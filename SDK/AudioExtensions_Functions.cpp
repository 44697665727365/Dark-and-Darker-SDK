#include "pch.h"
#include "SDK.h"

void UAudioParameterControllerInterface::SetTriggerParameter(struct FName InName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter");

	FSetTriggerParameter parms{};	
	parms.InName = InName;

	ProcessEvent(fn, &parms);
}

void UAudioParameterControllerInterface::SetStringParameter(struct FName InName, struct FString InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetStringParameter");

	FSetStringParameter parms{};	
	parms.InName = InName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAudioParameterControllerInterface::SetStringArrayParameter(struct FName InName, struct TArray<struct FString>& InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter");

	FSetStringArrayParameter parms{};	
	parms.InName = InName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAudioParameterControllerInterface::SetParameters_Blueprint(struct TArray<struct FAudioParameter>& InParameters){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint");

	FSetParameters_Blueprint parms{};	
	parms.InParameters = InParameters;

	ProcessEvent(fn, &parms);
}

void UAudioParameterControllerInterface::SetObjectParameter(struct FName InName, struct UObject* InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetObjectParameter");

	FSetObjectParameter parms{};	
	parms.InName = InName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAudioParameterControllerInterface::SetObjectArrayParameter(struct FName InName, struct TArray<struct UObject*>& InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter");

	FSetObjectArrayParameter parms{};	
	parms.InName = InName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAudioParameterControllerInterface::SetIntParameter(struct FName InName, int32_t inInt){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetIntParameter");

	FSetIntParameter parms{};	
	parms.InName = InName;
	parms.inInt = inInt;

	ProcessEvent(fn, &parms);
}

void UAudioParameterControllerInterface::SetIntArrayParameter(struct FName InName, struct TArray<int32_t>& InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter");

	FSetIntArrayParameter parms{};	
	parms.InName = InName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAudioParameterControllerInterface::SetFloatParameter(struct FName InName, float InFloat){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetFloatParameter");

	FSetFloatParameter parms{};	
	parms.InName = InName;
	parms.InFloat = InFloat;

	ProcessEvent(fn, &parms);
}

void UAudioParameterControllerInterface::SetFloatArrayParameter(struct FName InName, struct TArray<float>& InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter");

	FSetFloatArrayParameter parms{};	
	parms.InName = InName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAudioParameterControllerInterface::SetBoolParameter(struct FName InName, bool InBool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetBoolParameter");

	FSetBoolParameter parms{};	
	parms.InName = InName;
	parms.InBool = InBool;

	ProcessEvent(fn, &parms);
}

void UAudioParameterControllerInterface::SetBoolArrayParameter(struct FName InName, struct TArray<bool>& InValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter");

	FSetBoolArrayParameter parms{};	
	parms.InName = InName;
	parms.InValue = InValue;

	ProcessEvent(fn, &parms);
}

void UAudioParameterControllerInterface::ResetParameters(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AudioExtensions.AudioParameterControllerInterface.ResetParameters");

	FResetParameters parms{};	

	ProcessEvent(fn, &parms);
}

