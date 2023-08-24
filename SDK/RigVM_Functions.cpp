#include "pch.h"
#include "SDK.h"

bool URigVMUserWorkflowOptions::RequiresDialog(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVMUserWorkflowOptions.RequiresDialog");

	FRequiresDialog parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void URigVMUserWorkflowOptions::ReportWarning(struct FString InMessage){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVMUserWorkflowOptions.ReportWarning");

	FReportWarning parms{};	
	parms.InMessage = InMessage;

	ProcessEvent(fn, &parms);
}

void URigVMUserWorkflowOptions::ReportInfo(struct FString InMessage){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVMUserWorkflowOptions.ReportInfo");

	FReportInfo parms{};	
	parms.InMessage = InMessage;

	ProcessEvent(fn, &parms);
}

void URigVMUserWorkflowOptions::ReportError(struct FString InMessage){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVMUserWorkflowOptions.ReportError");

	FReportError parms{};	
	parms.InMessage = InMessage;

	ProcessEvent(fn, &parms);
}

bool URigVMUserWorkflowOptions::IsValid(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVMUserWorkflowOptions.IsValid");

	FIsValid parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void URigVM::SetParameterValueVector2D(struct FName& InParameterName, struct FVector2D& InValue, int32_t InArrayIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.SetParameterValueVector2D");

	FSetParameterValueVector2D parms{};	
	parms.InParameterName = InParameterName;
	parms.InValue = InValue;
	parms.InArrayIndex = InArrayIndex;

	ProcessEvent(fn, &parms);
}

void URigVM::SetParameterValueVector(struct FName& InParameterName, struct FVector& InValue, int32_t InArrayIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.SetParameterValueVector");

	FSetParameterValueVector parms{};	
	parms.InParameterName = InParameterName;
	parms.InValue = InValue;
	parms.InArrayIndex = InArrayIndex;

	ProcessEvent(fn, &parms);
}

void URigVM::SetParameterValueTransform(struct FName& InParameterName, struct FTransform& InValue, int32_t InArrayIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.SetParameterValueTransform");

	FSetParameterValueTransform parms{};	
	parms.InParameterName = InParameterName;
	parms.InValue = InValue;
	parms.InArrayIndex = InArrayIndex;

	ProcessEvent(fn, &parms);
}

void URigVM::SetParameterValueString(struct FName& InParameterName, struct FString InValue, int32_t InArrayIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.SetParameterValueString");

	FSetParameterValueString parms{};	
	parms.InParameterName = InParameterName;
	parms.InValue = InValue;
	parms.InArrayIndex = InArrayIndex;

	ProcessEvent(fn, &parms);
}

void URigVM::SetParameterValueQuat(struct FName& InParameterName, struct FQuat& InValue, int32_t InArrayIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.SetParameterValueQuat");

	FSetParameterValueQuat parms{};	
	parms.InParameterName = InParameterName;
	parms.InValue = InValue;
	parms.InArrayIndex = InArrayIndex;

	ProcessEvent(fn, &parms);
}

void URigVM::SetParameterValueName(struct FName& InParameterName, struct FName& InValue, int32_t InArrayIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.SetParameterValueName");

	FSetParameterValueName parms{};	
	parms.InParameterName = InParameterName;
	parms.InValue = InValue;
	parms.InArrayIndex = InArrayIndex;

	ProcessEvent(fn, &parms);
}

void URigVM::SetParameterValueInt(struct FName& InParameterName, int32_t InValue, int32_t InArrayIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.SetParameterValueInt");

	FSetParameterValueInt parms{};	
	parms.InParameterName = InParameterName;
	parms.InValue = InValue;
	parms.InArrayIndex = InArrayIndex;

	ProcessEvent(fn, &parms);
}

void URigVM::SetParameterValueFloat(struct FName& InParameterName, float InValue, int32_t InArrayIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.SetParameterValueFloat");

	FSetParameterValueFloat parms{};	
	parms.InParameterName = InParameterName;
	parms.InValue = InValue;
	parms.InArrayIndex = InArrayIndex;

	ProcessEvent(fn, &parms);
}

void URigVM::SetParameterValueDouble(struct FName& InParameterName, double InValue, int32_t InArrayIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.SetParameterValueDouble");

	FSetParameterValueDouble parms{};	
	parms.InParameterName = InParameterName;
	parms.InValue = InValue;
	parms.InArrayIndex = InArrayIndex;

	ProcessEvent(fn, &parms);
}

void URigVM::SetParameterValueBool(struct FName& InParameterName, bool InValue, int32_t InArrayIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.SetParameterValueBool");

	FSetParameterValueBool parms{};	
	parms.InParameterName = InParameterName;
	parms.InValue = InValue;
	parms.InArrayIndex = InArrayIndex;

	ProcessEvent(fn, &parms);
}

struct FRigVMStatistics URigVM::GetStatistics(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.GetStatistics");

	FGetStatistics parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString URigVM::GetRigVMFunctionName(int32_t InFunctionIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.GetRigVMFunctionName");

	FGetRigVMFunctionName parms{};	
	parms.InFunctionIndex = InFunctionIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector2D URigVM::GetParameterValueVector2D(struct FName& InParameterName, int32_t InArrayIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.GetParameterValueVector2D");

	FGetParameterValueVector2D parms{};	
	parms.InParameterName = InParameterName;
	parms.InArrayIndex = InArrayIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector URigVM::GetParameterValueVector(struct FName& InParameterName, int32_t InArrayIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.GetParameterValueVector");

	FGetParameterValueVector parms{};	
	parms.InParameterName = InParameterName;
	parms.InArrayIndex = InArrayIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform URigVM::GetParameterValueTransform(struct FName& InParameterName, int32_t InArrayIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.GetParameterValueTransform");

	FGetParameterValueTransform parms{};	
	parms.InParameterName = InParameterName;
	parms.InArrayIndex = InArrayIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString URigVM::GetParameterValueString(struct FName& InParameterName, int32_t InArrayIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.GetParameterValueString");

	FGetParameterValueString parms{};	
	parms.InParameterName = InParameterName;
	parms.InArrayIndex = InArrayIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FQuat URigVM::GetParameterValueQuat(struct FName& InParameterName, int32_t InArrayIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.GetParameterValueQuat");

	FGetParameterValueQuat parms{};	
	parms.InParameterName = InParameterName;
	parms.InArrayIndex = InArrayIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName URigVM::GetParameterValueName(struct FName& InParameterName, int32_t InArrayIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.GetParameterValueName");

	FGetParameterValueName parms{};	
	parms.InParameterName = InParameterName;
	parms.InArrayIndex = InArrayIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t URigVM::GetParameterValueInt(struct FName& InParameterName, int32_t InArrayIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.GetParameterValueInt");

	FGetParameterValueInt parms{};	
	parms.InParameterName = InParameterName;
	parms.InArrayIndex = InArrayIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float URigVM::GetParameterValueFloat(struct FName& InParameterName, int32_t InArrayIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.GetParameterValueFloat");

	FGetParameterValueFloat parms{};	
	parms.InParameterName = InParameterName;
	parms.InArrayIndex = InArrayIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

double URigVM::GetParameterValueDouble(struct FName& InParameterName, int32_t InArrayIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.GetParameterValueDouble");

	FGetParameterValueDouble parms{};	
	parms.InParameterName = InParameterName;
	parms.InArrayIndex = InArrayIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigVM::GetParameterValueBool(struct FName& InParameterName, int32_t InArrayIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.GetParameterValueBool");

	FGetParameterValueBool parms{};	
	parms.InParameterName = InParameterName;
	parms.InArrayIndex = InArrayIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool URigVM::Execute(struct FName& InEntryName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.Execute");

	FExecute parms{};	
	parms.InEntryName = InEntryName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t URigVM::AddRigVMFunction(struct UScriptStruct* InRigVMStruct, struct FName& InMethodName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function RigVM.RigVM.AddRigVMFunction");

	FAddRigVMFunction parms{};	
	parms.InRigVMStruct = InRigVMStruct;
	parms.InMethodName = InMethodName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

