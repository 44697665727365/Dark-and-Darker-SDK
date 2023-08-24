#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_UniqueWeaponPassive.GA_UniqueWeaponPassive_C.EventReceived_255D149942688A65BC6EB2AA8CA4B432
struct FEventReceived_255D149942688A65BC6EB2AA8CA4B432
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_UniqueWeaponPassive.GA_UniqueWeaponPassive_C.ExecuteUbergraph_GA_UniqueWeaponPassive
struct FExecuteUbergraph_GA_UniqueWeaponPassive
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x10 (0x10)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC0 (0xC0)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x170 (0x170)
	char pad_376_1 : 7;  // 0x178 (0x178)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x178 (0x178)
	char pad_377[7];  // 0x179 (0x179)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x180 (0x180)
	char pad_560_1 : 7;  // 0x230 (0x230)
	bool CallFunc_EffectContextHasHitResult_ReturnValue : 1;  // 0x230 (0x230)
	char pad_561[7];  // 0x231 (0x231)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x238 (0x238)
	struct UObject* CallFunc_EffectContextGetSourceObject_ReturnValue;  // 0x248 (0x248)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x250 (0x250)
	char pad_593_1 : 7;  // 0x251 (0x251)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x251 (0x251)
	char pad_594[6];  // 0x252 (0x252)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x258 (0x258)
	struct UObject* CallFunc_GetCurrentSourceObject_ReturnValue;  // 0x308 (0x308)
	char pad_784_1 : 7;  // 0x310 (0x310)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x310 (0x310)
	char pad_785[3];  // 0x311 (0x311)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x314 (0x314)


}; 
 
 // Function GA_UniqueWeaponPassive.GA_UniqueWeaponPassive_C.K2_ActivateAbilityFromEvent
// Size: 0xB0(Inherited: 0xB0)
struct FK2_ActivateAbilityFromEvent : FK2_ActivateAbilityFromEvent
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 // Function GA_UniqueWeaponPassive.GA_UniqueWeaponPassive_C.OnHit
struct FOnHit
{
	struct FGameplayEventData EventData;  // 0x0 (0x0)


}; 
 
 