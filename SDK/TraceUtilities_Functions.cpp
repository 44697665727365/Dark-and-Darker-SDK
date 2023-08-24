#include "pch.h"
#include "SDK.h"

void UTraceUtilLibrary::TraceMarkRegionStart(struct FString Name){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionStart");

	FTraceMarkRegionStart parms{};	
	parms.Name = Name;

	ProcessEvent(fn, &parms);
}

void UTraceUtilLibrary::TraceMarkRegionEnd(struct FString Name){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionEnd");

	FTraceMarkRegionEnd parms{};	
	parms.Name = Name;

	ProcessEvent(fn, &parms);
}

void UTraceUtilLibrary::TraceBookmark(struct FString Name){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.TraceBookmark");

	FTraceBookmark parms{};	
	parms.Name = Name;

	ProcessEvent(fn, &parms);
}

bool UTraceUtilLibrary::ToggleChannel(struct FString ChannelName, bool Enabled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.ToggleChannel");

	FToggleChannel parms{};	
	parms.ChannelName = ChannelName;
	parms.Enabled = Enabled;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTraceUtilLibrary::StopTracing(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.StopTracing");

	FStopTracing parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTraceUtilLibrary::StartTraceToFile(struct FString Filename, struct TArray<struct FString>& Channels){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.StartTraceToFile");

	FStartTraceToFile parms{};	
	parms.Filename = Filename;
	parms.Channels = Channels;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTraceUtilLibrary::StartTraceSendTo(struct FString Target, struct TArray<struct FString>& Channels){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.StartTraceSendTo");

	FStartTraceSendTo parms{};	
	parms.Target = Target;
	parms.Channels = Channels;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTraceUtilLibrary::ResumeTracing(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.ResumeTracing");

	FResumeTracing parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTraceUtilLibrary::PauseTracing(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.PauseTracing");

	FPauseTracing parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTraceUtilLibrary::IsTracing(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.IsTracing");

	FIsTracing parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTraceUtilLibrary::IsChannelEnabled(struct FString ChannelName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.IsChannelEnabled");

	FIsChannelEnabled parms{};	
	parms.ChannelName = ChannelName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FString> UTraceUtilLibrary::GetEnabledChannels(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.GetEnabledChannels");

	FGetEnabledChannels parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FString> UTraceUtilLibrary::GetAllChannels(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TraceUtilities.TraceUtilLibrary.GetAllChannels");

	FGetAllChannels parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

