#pragma once 
#include <PerceptionExtension_Structs.h>
 
 
 
// Class PerceptionExtension.PerceptionExtensionBPLibrary
// Size: 0x28(Inherited: 0x28)
struct UPerceptionExtensionBPLibrary : UBlueprintFunctionLibrary
{


	bool SetVisionAngle(struct UAIPerceptionComponent* Perception, float VisionAngle); // Function PerceptionExtension.PerceptionExtensionBPLibrary.SetVisionAngle
	bool SetUseLoSHearing(struct UAIPerceptionComponent* Perception, bool UseLoSHearing); // Function PerceptionExtension.PerceptionExtensionBPLibrary.SetUseLoSHearing
	bool SetSightRange(struct UAIPerceptionComponent* Perception, float SightRange); // Function PerceptionExtension.PerceptionExtensionBPLibrary.SetSightRange
	bool SetMaxAge(struct UAIPerceptionComponent* Perception, UAISense* SenseClass, float MaxAge); // Function PerceptionExtension.PerceptionExtensionBPLibrary.SetMaxAge
	bool SetLoSHearingRange(struct UAIPerceptionComponent* Perception, float LoSHearingRange); // Function PerceptionExtension.PerceptionExtensionBPLibrary.SetLoSHearingRange
	bool SetLoseSightRange(struct UAIPerceptionComponent* Perception, float LoseSightRange); // Function PerceptionExtension.PerceptionExtensionBPLibrary.SetLoseSightRange
	bool SetHearingRange(struct UAIPerceptionComponent* Perception, float HearingRange); // Function PerceptionExtension.PerceptionExtensionBPLibrary.SetHearingRange
	bool SetDominantSense(struct UAIPerceptionComponent* Perception, UAISense* SenseClass); // Function PerceptionExtension.PerceptionExtensionBPLibrary.SetDominantSense
	bool SetDetectionByAffiliation(struct UAIPerceptionComponent* Perception, UAISense* SenseClass, bool DetectEnemies, bool DetectNeutrals, bool DetectFriendlies); // Function PerceptionExtension.PerceptionExtensionBPLibrary.SetDetectionByAffiliation
	float GetVisionAngle(struct UAIPerceptionComponent* Perception); // Function PerceptionExtension.PerceptionExtensionBPLibrary.GetVisionAngle
	bool GetUseLoSHearing(struct UAIPerceptionComponent* Perception); // Function PerceptionExtension.PerceptionExtensionBPLibrary.GetUseLoSHearing
	float GetSightRange(struct UAIPerceptionComponent* Perception); // Function PerceptionExtension.PerceptionExtensionBPLibrary.GetSightRange
	float GetMaxAge(struct UAIPerceptionComponent* Perception, UAISense* SenseClass); // Function PerceptionExtension.PerceptionExtensionBPLibrary.GetMaxAge
	float GetLoSHearingRange(struct UAIPerceptionComponent* Perception); // Function PerceptionExtension.PerceptionExtensionBPLibrary.GetLoSHearingRange
	float GetLoseSightRange(struct UAIPerceptionComponent* Perception); // Function PerceptionExtension.PerceptionExtensionBPLibrary.GetLoseSightRange
	float GetHearingRange(struct UAIPerceptionComponent* Perception); // Function PerceptionExtension.PerceptionExtensionBPLibrary.GetHearingRange
	UAISense* GetDominantSense(struct UAIPerceptionComponent* Perception); // Function PerceptionExtension.PerceptionExtensionBPLibrary.GetDominantSense
	struct FAISenseAffiliationFilter GetDetectionByAffiliation(struct UAIPerceptionComponent* Perception, UAISense* SenseClass); // Function PerceptionExtension.PerceptionExtensionBPLibrary.GetDetectionByAffiliation
	bool ForgetAll(struct UAIPerceptionComponent* Perception); // Function PerceptionExtension.PerceptionExtensionBPLibrary.ForgetAll
	bool ForgetActor(struct UAIPerceptionComponent* Perception, struct AActor* Actor); // Function PerceptionExtension.PerceptionExtensionBPLibrary.ForgetActor
}; 
 
 


