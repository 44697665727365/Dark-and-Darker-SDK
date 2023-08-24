#pragma once 
#include <GA_DualWield_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DualWield.GA_DualWield_C
// Size: 0x561(Inherited: 0x558)
struct UGA_DualWield_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	char pad_1376_1 : 7;  // 0x560 (0x560)
	bool bActivated : 1;  // 0x560 (0x560)


	void Removed_E7DAE38A4964DF8EED1204AF3A2217C4(int32_t TagCount); // Function GA_DualWield.GA_DualWield_C.Removed_E7DAE38A4964DF8EED1204AF3A2217C4
	void OnCountChanged_E7DAE38A4964DF8EED1204AF3A2217C4(int32_t TagCount); // Function GA_DualWield.GA_DualWield_C.OnCountChanged_E7DAE38A4964DF8EED1204AF3A2217C4
	void Added_E7DAE38A4964DF8EED1204AF3A2217C4(int32_t TagCount); // Function GA_DualWield.GA_DualWield_C.Added_E7DAE38A4964DF8EED1204AF3A2217C4
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_DualWield.GA_DualWield_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_DualWield(int32_t EntryPoint); // Function GA_DualWield.GA_DualWield_C.ExecuteUbergraph_GA_DualWield
}; 
 
 


