#include "pch.h"
#include "SDK.h"

bool UCommonInputSubsystem::ShouldShowInputKeys(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys");

	FShouldShowInputKeys parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCommonInputSubsystem::SetGamepadInputType(struct FName InGamepadInputType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.SetGamepadInputType");

	FSetGamepadInputType parms{};	
	parms.InGamepadInputType = InGamepadInputType;

	ProcessEvent(fn, &parms);
}

void UCommonInputSubsystem::SetCurrentInputType(uint8_t NewInputType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.SetCurrentInputType");

	FSetCurrentInputType parms{};	
	parms.NewInputType = NewInputType;

	ProcessEvent(fn, &parms);
}

bool UCommonInputSubsystem::IsUsingPointerInput(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.IsUsingPointerInput");

	FIsUsingPointerInput parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UCommonInputSubsystem::IsInputMethodActive(uint8_t InputMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.IsInputMethodActive");

	FIsInputMethodActive parms{};	
	parms.InputMethod = InputMethod;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UCommonInputSubsystem::GetDefaultInputType(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.GetDefaultInputType");

	FGetDefaultInputType parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t UCommonInputSubsystem::GetCurrentInputType(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.GetCurrentInputType");

	FGetCurrentInputType parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName UCommonInputSubsystem::GetCurrentGamepadName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonInput.CommonInputSubsystem.GetCurrentGamepadName");

	FGetCurrentGamepadName parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FName> UCommonInputBaseControllerData::GetRegisteredGamepads(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads");

	FGetRegisteredGamepads parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

