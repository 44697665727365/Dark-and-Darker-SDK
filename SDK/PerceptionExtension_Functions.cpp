#include "pch.h"
#include "SDK.h"

bool UPerceptionExtensionBPLibrary::SetVisionAngle(struct UAIPerceptionComponent* Perception, float VisionAngle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.SetVisionAngle");

	FSetVisionAngle parms{};	
	parms.Perception = Perception;
	parms.VisionAngle = VisionAngle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPerceptionExtensionBPLibrary::SetUseLoSHearing(struct UAIPerceptionComponent* Perception, bool UseLoSHearing){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.SetUseLoSHearing");

	FSetUseLoSHearing parms{};	
	parms.Perception = Perception;
	parms.UseLoSHearing = UseLoSHearing;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPerceptionExtensionBPLibrary::SetSightRange(struct UAIPerceptionComponent* Perception, float SightRange){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.SetSightRange");

	FSetSightRange parms{};	
	parms.Perception = Perception;
	parms.SightRange = SightRange;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPerceptionExtensionBPLibrary::SetMaxAge(struct UAIPerceptionComponent* Perception, UAISense* SenseClass, float MaxAge){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.SetMaxAge");

	FSetMaxAge parms{};	
	parms.Perception = Perception;
	parms.SenseClass = SenseClass;
	parms.MaxAge = MaxAge;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPerceptionExtensionBPLibrary::SetLoSHearingRange(struct UAIPerceptionComponent* Perception, float LoSHearingRange){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.SetLoSHearingRange");

	FSetLoSHearingRange parms{};	
	parms.Perception = Perception;
	parms.LoSHearingRange = LoSHearingRange;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPerceptionExtensionBPLibrary::SetLoseSightRange(struct UAIPerceptionComponent* Perception, float LoseSightRange){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.SetLoseSightRange");

	FSetLoseSightRange parms{};	
	parms.Perception = Perception;
	parms.LoseSightRange = LoseSightRange;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPerceptionExtensionBPLibrary::SetHearingRange(struct UAIPerceptionComponent* Perception, float HearingRange){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.SetHearingRange");

	FSetHearingRange parms{};	
	parms.Perception = Perception;
	parms.HearingRange = HearingRange;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPerceptionExtensionBPLibrary::SetDominantSense(struct UAIPerceptionComponent* Perception, UAISense* SenseClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.SetDominantSense");

	FSetDominantSense parms{};	
	parms.Perception = Perception;
	parms.SenseClass = SenseClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPerceptionExtensionBPLibrary::SetDetectionByAffiliation(struct UAIPerceptionComponent* Perception, UAISense* SenseClass, bool DetectEnemies, bool DetectNeutrals, bool DetectFriendlies){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.SetDetectionByAffiliation");

	FSetDetectionByAffiliation parms{};	
	parms.Perception = Perception;
	parms.SenseClass = SenseClass;
	parms.DetectEnemies = DetectEnemies;
	parms.DetectNeutrals = DetectNeutrals;
	parms.DetectFriendlies = DetectFriendlies;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UPerceptionExtensionBPLibrary::GetVisionAngle(struct UAIPerceptionComponent* Perception){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.GetVisionAngle");

	FGetVisionAngle parms{};	
	parms.Perception = Perception;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPerceptionExtensionBPLibrary::GetUseLoSHearing(struct UAIPerceptionComponent* Perception){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.GetUseLoSHearing");

	FGetUseLoSHearing parms{};	
	parms.Perception = Perception;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UPerceptionExtensionBPLibrary::GetSightRange(struct UAIPerceptionComponent* Perception){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.GetSightRange");

	FGetSightRange parms{};	
	parms.Perception = Perception;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UPerceptionExtensionBPLibrary::GetMaxAge(struct UAIPerceptionComponent* Perception, UAISense* SenseClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.GetMaxAge");

	FGetMaxAge parms{};	
	parms.Perception = Perception;
	parms.SenseClass = SenseClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UPerceptionExtensionBPLibrary::GetLoSHearingRange(struct UAIPerceptionComponent* Perception){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.GetLoSHearingRange");

	FGetLoSHearingRange parms{};	
	parms.Perception = Perception;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UPerceptionExtensionBPLibrary::GetLoseSightRange(struct UAIPerceptionComponent* Perception){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.GetLoseSightRange");

	FGetLoseSightRange parms{};	
	parms.Perception = Perception;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UPerceptionExtensionBPLibrary::GetHearingRange(struct UAIPerceptionComponent* Perception){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.GetHearingRange");

	FGetHearingRange parms{};	
	parms.Perception = Perception;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

UAISense* UPerceptionExtensionBPLibrary::GetDominantSense(struct UAIPerceptionComponent* Perception){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.GetDominantSense");

	FGetDominantSense parms{};	
	parms.Perception = Perception;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAISenseAffiliationFilter UPerceptionExtensionBPLibrary::GetDetectionByAffiliation(struct UAIPerceptionComponent* Perception, UAISense* SenseClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.GetDetectionByAffiliation");

	FGetDetectionByAffiliation parms{};	
	parms.Perception = Perception;
	parms.SenseClass = SenseClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPerceptionExtensionBPLibrary::ForgetAll(struct UAIPerceptionComponent* Perception){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.ForgetAll");

	FForgetAll parms{};	
	parms.Perception = Perception;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPerceptionExtensionBPLibrary::ForgetActor(struct UAIPerceptionComponent* Perception, struct AActor* Actor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function PerceptionExtension.PerceptionExtensionBPLibrary.ForgetActor");

	FForgetActor parms{};	
	parms.Perception = Perception;
	parms.Actor = Actor;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

