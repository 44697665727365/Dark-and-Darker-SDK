#include "pch.h"
#include "SDK.h"

struct FFrameTime UTimeManagementBlueprintLibrary::TransformTime(struct FFrameTime& SourceTime, struct FFrameRate& SourceRate, struct FFrameRate& DestinationRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime");

	FTransformTime parms{};	
	parms.SourceTime = SourceTime;
	parms.SourceRate = SourceRate;
	parms.DestinationRate = DestinationRate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameNumber UTimeManagementBlueprintLibrary::Subtract_FrameNumberInteger(struct FFrameNumber A, int32_t B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger");

	FSubtract_FrameNumberInteger parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameNumber UTimeManagementBlueprintLibrary::Subtract_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber");

	FSubtract_FrameNumberFrameNumber parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameTime UTimeManagementBlueprintLibrary::SnapFrameTimeToRate(struct FFrameTime& SourceTime, struct FFrameRate& SourceRate, struct FFrameRate& SnapToRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate");

	FSnapFrameTimeToRate parms{};	
	parms.SourceTime = SourceTime;
	parms.SourceRate = SourceRate;
	parms.SnapToRate = SnapToRate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameTime UTimeManagementBlueprintLibrary::Multiply_SecondsFrameRate(float TimeInSeconds, struct FFrameRate& FrameRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate");

	FMultiply_SecondsFrameRate parms{};	
	parms.TimeInSeconds = TimeInSeconds;
	parms.FrameRate = FrameRate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameNumber UTimeManagementBlueprintLibrary::Multiply_FrameNumberInteger(struct FFrameNumber A, int32_t B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger");

	FMultiply_FrameNumberInteger parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTimeManagementBlueprintLibrary::IsValid_MultipleOf(struct FFrameRate& InFrameRate, struct FFrameRate& OtherFramerate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf");

	FIsValid_MultipleOf parms{};	
	parms.InFrameRate = InFrameRate;
	parms.OtherFramerate = OtherFramerate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTimeManagementBlueprintLibrary::IsValid_Framerate(struct FFrameRate& InFrameRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate");

	FIsValid_Framerate parms{};	
	parms.InFrameRate = InFrameRate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameRate UTimeManagementBlueprintLibrary::GetTimecodeFrameRate(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate");

	FGetTimecodeFrameRate parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTimecode UTimeManagementBlueprintLibrary::GetTimecode(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode");

	FGetTimecode parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameNumber UTimeManagementBlueprintLibrary::Divide_FrameNumberInteger(struct FFrameNumber A, int32_t B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger");

	FDivide_FrameNumberInteger parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UTimeManagementBlueprintLibrary::Conv_TimecodeToString(struct FTimecode& InTimecode, bool bForceSignDisplay){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString");

	FConv_TimecodeToString parms{};	
	parms.InTimecode = InTimecode;
	parms.bForceSignDisplay = bForceSignDisplay;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UTimeManagementBlueprintLibrary::Conv_QualifiedFrameTimeToSeconds(struct FQualifiedFrameTime& InFrameTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds");

	FConv_QualifiedFrameTimeToSeconds parms{};	
	parms.InFrameTime = InFrameTime;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UTimeManagementBlueprintLibrary::Conv_FrameRateToSeconds(struct FFrameRate& InFrameRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds");

	FConv_FrameRateToSeconds parms{};	
	parms.InFrameRate = InFrameRate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UTimeManagementBlueprintLibrary::Conv_FrameNumberToInteger(struct FFrameNumber& InFrameNumber){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger");

	FConv_FrameNumberToInteger parms{};	
	parms.InFrameNumber = InFrameNumber;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameNumber UTimeManagementBlueprintLibrary::Add_FrameNumberInteger(struct FFrameNumber A, int32_t B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger");

	FAdd_FrameNumberInteger parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FFrameNumber UTimeManagementBlueprintLibrary::Add_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber");

	FAdd_FrameNumberFrameNumber parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

