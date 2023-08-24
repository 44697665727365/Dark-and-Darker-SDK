#pragma once 
#include <BTD_CheckToRunBehavior_Structs.h>
 
 
 
// BlueprintGeneratedClass BTD_CheckToRunBehavior.BTD_CheckToRunBehavior_C
// Size: 0xC0(Inherited: 0xA0)
struct UBTD_CheckToRunBehavior_C : UBTDecorator_BlueprintBase
{
	int32_t Check Depth;  // 0xA0 (0xA0)
	enum class E_BTActionsFromMonsterBP Check To Run;  // 0xA4 (0xA4)
	enum class E_ActionWhileConditionalTopPriorityMode Check Conditional Top Priority Action;  // 0xA5 (0xA5)
	enum class E_ActionWhilePeaceMode Check Peace Action;  // 0xA6 (0xA6)
	enum class E_ActionWhileCombat Check Combat Action;  // 0xA7 (0xA7)
	struct TArray<struct ADCCharacterBase*> Target Array;  // 0xA8 (0xA8)
	struct ABP_DCMonsterBaseWithOptions_C* As BP DCMonster Base With Options;  // 0xB8 (0xB8)


	void Check Combat Action Type Function(struct ABP_DCMonsterBaseWithOptions_C* MonsterBP, bool& Return Value); // Function BTD_CheckToRunBehavior.BTD_CheckToRunBehavior_C.Check Combat Action Type Function
	bool Check Peace Action Type Function(struct ABP_DCMonsterBaseWithOptions_C* MonsterBP); // Function BTD_CheckToRunBehavior.BTD_CheckToRunBehavior_C.Check Peace Action Type Function
	bool Check Conditional Top Priority Action Condition Function(struct ABP_DCMonsterBaseWithOptions_C* Monster BP); // Function BTD_CheckToRunBehavior.BTD_CheckToRunBehavior_C.Check Conditional Top Priority Action Condition Function
	void Check Conditional Top Priority Action Type Function(struct ABP_DCMonsterBaseWithOptions_C* Monster BP, bool& Return Value); // Function BTD_CheckToRunBehavior.BTD_CheckToRunBehavior_C.Check Conditional Top Priority Action Type Function
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTD_CheckToRunBehavior.BTD_CheckToRunBehavior_C.PerformConditionCheckAI
}; 
 
 


