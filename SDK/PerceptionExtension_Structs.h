#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function PerceptionExtension.PerceptionExtensionBPLibrary.ForgetActor
struct FForgetActor
{
	struct UAIPerceptionComponent* Perception;  // 0x0 (0x0)
	struct AActor* Actor;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function PerceptionExtension.PerceptionExtensionBPLibrary.GetDetectionByAffiliation
struct FGetDetectionByAffiliation
{
	struct UAIPerceptionComponent* Perception;  // 0x0 (0x0)
	UAISense* SenseClass;  // 0x8 (0x8)
	struct FAISenseAffiliationFilter ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function PerceptionExtension.PerceptionExtensionBPLibrary.ForgetAll
struct FForgetAll
{
	struct UAIPerceptionComponent* Perception;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function PerceptionExtension.PerceptionExtensionBPLibrary.GetDominantSense
struct FGetDominantSense
{
	struct UAIPerceptionComponent* Perception;  // 0x0 (0x0)
	UAISense* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function PerceptionExtension.PerceptionExtensionBPLibrary.GetHearingRange
struct FGetHearingRange
{
	struct UAIPerceptionComponent* Perception;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function PerceptionExtension.PerceptionExtensionBPLibrary.GetLoseSightRange
struct FGetLoseSightRange
{
	struct UAIPerceptionComponent* Perception;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function PerceptionExtension.PerceptionExtensionBPLibrary.SetHearingRange
struct FSetHearingRange
{
	struct UAIPerceptionComponent* Perception;  // 0x0 (0x0)
	float HearingRange;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function PerceptionExtension.PerceptionExtensionBPLibrary.GetMaxAge
struct FGetMaxAge
{
	struct UAIPerceptionComponent* Perception;  // 0x0 (0x0)
	UAISense* SenseClass;  // 0x8 (0x8)
	float ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function PerceptionExtension.PerceptionExtensionBPLibrary.SetVisionAngle
struct FSetVisionAngle
{
	struct UAIPerceptionComponent* Perception;  // 0x0 (0x0)
	float VisionAngle;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function PerceptionExtension.PerceptionExtensionBPLibrary.GetLoSHearingRange
struct FGetLoSHearingRange
{
	struct UAIPerceptionComponent* Perception;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function PerceptionExtension.PerceptionExtensionBPLibrary.GetSightRange
struct FGetSightRange
{
	struct UAIPerceptionComponent* Perception;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function PerceptionExtension.PerceptionExtensionBPLibrary.GetUseLoSHearing
struct FGetUseLoSHearing
{
	struct UAIPerceptionComponent* Perception;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function PerceptionExtension.PerceptionExtensionBPLibrary.GetVisionAngle
struct FGetVisionAngle
{
	struct UAIPerceptionComponent* Perception;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function PerceptionExtension.PerceptionExtensionBPLibrary.SetDetectionByAffiliation
struct FSetDetectionByAffiliation
{
	struct UAIPerceptionComponent* Perception;  // 0x0 (0x0)
	UAISense* SenseClass;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool DetectEnemies : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool DetectNeutrals : 1;  // 0x11 (0x11)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool DetectFriendlies : 1;  // 0x12 (0x12)
	char pad_19_1 : 7;  // 0x13 (0x13)
	bool ReturnValue : 1;  // 0x13 (0x13)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function PerceptionExtension.PerceptionExtensionBPLibrary.SetDominantSense
struct FSetDominantSense
{
	struct UAIPerceptionComponent* Perception;  // 0x0 (0x0)
	UAISense* SenseClass;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function PerceptionExtension.PerceptionExtensionBPLibrary.SetLoseSightRange
struct FSetLoseSightRange
{
	struct UAIPerceptionComponent* Perception;  // 0x0 (0x0)
	float LoseSightRange;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function PerceptionExtension.PerceptionExtensionBPLibrary.SetLoSHearingRange
struct FSetLoSHearingRange
{
	struct UAIPerceptionComponent* Perception;  // 0x0 (0x0)
	float LoSHearingRange;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function PerceptionExtension.PerceptionExtensionBPLibrary.SetMaxAge
struct FSetMaxAge
{
	struct UAIPerceptionComponent* Perception;  // 0x0 (0x0)
	UAISense* SenseClass;  // 0x8 (0x8)
	float MaxAge;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function PerceptionExtension.PerceptionExtensionBPLibrary.SetSightRange
struct FSetSightRange
{
	struct UAIPerceptionComponent* Perception;  // 0x0 (0x0)
	float SightRange;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function PerceptionExtension.PerceptionExtensionBPLibrary.SetUseLoSHearing
struct FSetUseLoSHearing
{
	struct UAIPerceptionComponent* Perception;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool UseLoSHearing : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool ReturnValue : 1;  // 0x9 (0x9)
	char pad_10[6];  // 0xA (0xA)


}; 
 
 