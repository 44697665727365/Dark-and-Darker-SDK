#include "pch.h"
#include "SDK.h"

void UAudioAnalyzer::StopAnalyzing(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioAnalyzer.AudioAnalyzer.StopAnalyzing");

	FStopAnalyzing parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);
}

void UAudioAnalyzer::StartAnalyzing(struct UObject* WorldContextObject, struct UAudioBus* AudioBusToAnalyze){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioAnalyzer.AudioAnalyzer.StartAnalyzing");

	FStartAnalyzing parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.AudioBusToAnalyze = AudioBusToAnalyze;

	ProcessEvent(fn, &parms);
}

