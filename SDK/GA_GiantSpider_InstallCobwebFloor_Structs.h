#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_GiantSpider_InstallCobwebFloor.GA_GiantSpider_InstallCobwebFloor_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_GiantSpider_InstallCobwebFloor.GA_GiantSpider_InstallCobwebFloor_C.EventReceived_785D1E8D44006265CC3CE4B32225B48A
struct FEventReceived_785D1E8D44006265CC3CE4B32225B48A
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayEventData EventData;  // 0x8 (0x8)


}; 
 
 // Function GA_GiantSpider_InstallCobwebFloor.GA_GiantSpider_InstallCobwebFloor_C.ExecuteUbergraph_GA_GiantSpider_InstallCobwebFloor
struct FExecuteUbergraph_GA_GiantSpider_InstallCobwebFloor
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag Temp_struct_Variable;  // 0x4 (0x4)
	int32_t Temp_int_Variable;  // 0xC (0xC)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x10 (0x10)
	struct FGameplayTag K2Node_CustomEvent_EventTag;  // 0xC0 (0xC0)
	struct FGameplayEventData K2Node_CustomEvent_EventData;  // 0xC8 (0xC8)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x178 (0x178)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x228 (0x228)
	struct ABP_GiantSpider_C* K2Node_DynamicCast_AsBP_Giant_Spider;  // 0x230 (0x230)
	char pad_568_1 : 7;  // 0x238 (0x238)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x238 (0x238)
	char pad_569[3];  // 0x239 (0x239)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x23C (0x23C)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x24C (0x24C)
	char pad_592_1 : 7;  // 0x250 (0x250)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x250 (0x250)
	char pad_593[7];  // 0x251 (0x251)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x258 (0x258)
	struct ABP_GiantSpider_CobWeb_C* K2Node_DynamicCast_AsBP_Giant_Spider_Cob_Web;  // 0x260 (0x260)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x268 (0x268)
	char pad_617[7];  // 0x269 (0x269)
	struct UDCAT_WaitForGameplayEvents* CallFunc_WaitForGameplayEvents_ReturnValue;  // 0x270 (0x270)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x278 (0x278)


}; 
 
 