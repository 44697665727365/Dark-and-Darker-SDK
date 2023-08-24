#pragma once 
#include <BTS_AttachEffectWhileActive_Structs.h>
 
 
 
// BlueprintGeneratedClass BTS_AttachEffectWhileActive.BTS_AttachEffectWhileActive_C
// Size: 0xD0(Inherited: 0x98)
struct UBTS_AttachEffectWhileActive_C : UBTService_BlueprintBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x98 (0x98)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool Get Data From Monster BP : 1;  // 0xA0 (0xA0)
	enum class E_BTActionsFromMonsterBP Check BT Action;  // 0xA1 (0xA1)
	enum class E_ActionWhileCombat Combat Action;  // 0xA2 (0xA2)
	char pad_163[5];  // 0xA3 (0xA3)
	struct TArray<struct FPrimaryAssetId> Attach Effect;  // 0xA8 (0xA8)
	struct ABP_DCMonsterBaseWithOptions_C* As BP DCMonster Base With Options;  // 0xB8 (0xB8)
	struct TArray<struct FActiveGameplayEffectHandle> Effect Handle;  // 0xC0 (0xC0)


	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTS_AttachEffectWhileActive.BTS_AttachEffectWhileActive_C.ReceiveActivationAI
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTS_AttachEffectWhileActive.BTS_AttachEffectWhileActive_C.ReceiveDeactivationAI
	void ExecuteUbergraph_BTS_AttachEffectWhileActive(int32_t EntryPoint); // Function BTS_AttachEffectWhileActive.BTS_AttachEffectWhileActive_C.ExecuteUbergraph_BTS_AttachEffectWhileActive
}; 
 
 


