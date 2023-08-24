#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonWarlord_Order_PositionChange.GA_SkeletonWarlord_Order_PositionChange_C.ExecuteUbergraph_GA_SkeletonWarlord_Order_PositionChange
struct FExecuteUbergraph_GA_SkeletonWarlord_Order_PositionChange
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	char pad_20[4];  // 0x14 (0x14)
	struct FGameplayEventData K2Node_CustomEvent_Payload_2;  // 0x18 (0x18)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x178 (0x178)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x180 (0x180)
	char pad_385[3];  // 0x181 (0x181)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x184 (0x184)
	char pad_404[4];  // 0x194 (0x194)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x198 (0x198)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x248 (0x248)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_2;  // 0x2F8 (0x2F8)
	char pad_768_1 : 7;  // 0x300 (0x300)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x300 (0x300)
	char pad_769[7];  // 0x301 (0x301)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x308 (0x308)
	char pad_952_1 : 7;  // 0x3B8 (0x3B8)
	bool CallFunc_GetBBTargetActorToCharacterBase_Result : 1;  // 0x3B8 (0x3B8)
	char pad_953[7];  // 0x3B9 (0x3B9)
	struct ADCCharacterBase* CallFunc_GetBBTargetActorToCharacterBase_As_DCCharacter_Base;  // 0x3C0 (0x3C0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x3C8 (0x3C8)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x3D0 (0x3D0)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x3E8 (0x3E8)
	float CallFunc_BreakRotator_Roll;  // 0x400 (0x400)
	float CallFunc_BreakRotator_Pitch;  // 0x404 (0x404)
	float CallFunc_BreakRotator_Yaw;  // 0x408 (0x408)
	char pad_1036[4];  // 0x40C (0x40C)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x410 (0x410)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x428 (0x428)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x430 (0x430)
	struct ABP_SkeletonWarlord_C* K2Node_DynamicCast_AsBP_Skeleton_Warlord;  // 0x490 (0x490)
	char pad_1176_1 : 7;  // 0x498 (0x498)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x498 (0x498)
	char pad_1177[7];  // 0x499 (0x499)
	struct FRotator CallFunc_FindRelativeLookAtRotation_ReturnValue;  // 0x4A0 (0x4A0)
	float CallFunc_BreakRotator_Roll_2;  // 0x4B8 (0x4B8)
	float CallFunc_BreakRotator_Pitch_2;  // 0x4BC (0x4BC)
	float CallFunc_BreakRotator_Yaw_2;  // 0x4C0 (0x4C0)
	char pad_1220[4];  // 0x4C4 (0x4C4)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x4C8 (0x4C8)
	enum class E_Direction CallFunc_Get_Enemy_Direction_From_Me_Direction;  // 0x4D0 (0x4D0)
	char pad_1233_1 : 7;  // 0x4D1 (0x4D1)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x4D1 (0x4D1)
	char pad_1234[6];  // 0x4D2 (0x4D2)
	double CallFunc_Subtract_DoubleDouble_B_ImplicitCast;  // 0x4D8 (0x4D8)
	double CallFunc_Subtract_DoubleDouble_A_ImplicitCast;  // 0x4E0 (0x4E0)


}; 
 
 // Function GA_SkeletonWarlord_Order_PositionChange.GA_SkeletonWarlord_Order_PositionChange_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonWarlord_Order_PositionChange.GA_SkeletonWarlord_Order_PositionChange_C.EventReceived_44DD460049DA934061B4F6814A425E85
struct FEventReceived_44DD460049DA934061B4F6814A425E85
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonWarlord_Order_PositionChange.GA_SkeletonWarlord_Order_PositionChange_C.EventReceived_83C55BE449DAD0B3E25BBEA000F573A2
struct FEventReceived_83C55BE449DAD0B3E25BBEA000F573A2
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 