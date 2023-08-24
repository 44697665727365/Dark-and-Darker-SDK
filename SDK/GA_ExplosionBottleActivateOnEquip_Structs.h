#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_ExplosionBottleActivateOnEquip.GA_ExplosionBottleActivateOnEquip_C.ExecuteUbergraph_GA_ExplosionBottleActivateOnEquip
struct FExecuteUbergraph_GA_ExplosionBottleActivateOnEquip
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct ABP_ExplosionBottle_C* K2Node_DynamicCast_AsBP_Explosion_Bottle;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x19 (0x19)


}; 
 
 