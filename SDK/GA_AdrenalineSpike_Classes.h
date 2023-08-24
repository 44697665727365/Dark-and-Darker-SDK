#pragma once 
#include <GA_AdrenalineSpike_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_AdrenalineSpike.GA_AdrenalineSpike_C
// Size: 0x561(Inherited: 0x558)
struct UGA_AdrenalineSpike_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)
	char pad_1376_1 : 7;  // 0x560 (0x560)
	bool IsActivate : 1;  // 0x560 (0x560)


	void CheckHealthBelowCertainPer(double CurrentHealth, bool& Result); // Function GA_AdrenalineSpike.GA_AdrenalineSpike_C.CheckHealthBelowCertainPer
	void OnChange_15B3EBAC461BE5313FFA019C63C0FA1F(float OldValue, float NewValue); // Function GA_AdrenalineSpike.GA_AdrenalineSpike_C.OnChange_15B3EBAC461BE5313FFA019C63C0FA1F
	void OnFinish_254A5E03472F5D7D8E4F218B424166D4(); // Function GA_AdrenalineSpike.GA_AdrenalineSpike_C.OnFinish_254A5E03472F5D7D8E4F218B424166D4
	void Removed_CBACE4974B9430A96188D89A17A89481(); // Function GA_AdrenalineSpike.GA_AdrenalineSpike_C.Removed_CBACE4974B9430A96188D89A17A89481
	void K2_ActivateAbility(); // Function GA_AdrenalineSpike.GA_AdrenalineSpike_C.K2_ActivateAbility
	void ExecuteUbergraph_GA_AdrenalineSpike(int32_t EntryPoint); // Function GA_AdrenalineSpike.GA_AdrenalineSpike_C.ExecuteUbergraph_GA_AdrenalineSpike
}; 
 
 


