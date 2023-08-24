#include "pch.h"
#include "SDK.h"

void UTypedElementHandleLibrary::Release(struct FScriptTypedElementHandle& ElementHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementHandleLibrary.Release");

	FRelease parms{};	
	parms.ElementHandle = ElementHandle;

	ProcessEvent(fn, &parms);
}

bool UTypedElementHandleLibrary::NotEqual(struct FScriptTypedElementHandle& LHS, struct FScriptTypedElementHandle& RHS){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementHandleLibrary.NotEqual");

	FNotEqual parms{};	
	parms.LHS = LHS;
	parms.RHS = RHS;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementHandleLibrary::IsSet(struct FScriptTypedElementHandle& ElementHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementHandleLibrary.IsSet");

	FIsSet parms{};	
	parms.ElementHandle = ElementHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementHandleLibrary::Equal(struct FScriptTypedElementHandle& LHS, struct FScriptTypedElementHandle& RHS){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementHandleLibrary.Equal");

	FEqual parms{};	
	parms.LHS = LHS;
	parms.RHS = RHS;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UTypedElementListLibrary::Shrink(struct FScriptTypedElementListProxy ElementList){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.Shrink");

	FShrink parms{};	
	parms.ElementList = ElementList;

	ProcessEvent(fn, &parms);
}

void UTypedElementListLibrary::Reset(struct FScriptTypedElementListProxy ElementList){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.Reset");

	FReset parms{};	
	parms.ElementList = ElementList;

	ProcessEvent(fn, &parms);
}

void UTypedElementListLibrary::Reserve(struct FScriptTypedElementListProxy ElementList, int32_t Size){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.Reserve");

	FReserve parms{};	
	parms.ElementList = ElementList;
	parms.Size = Size;

	ProcessEvent(fn, &parms);
}

bool UTypedElementListLibrary::Remove(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.Remove");

	FRemove parms{};	
	parms.ElementList = ElementList;
	parms.ElementHandle = ElementHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UTypedElementListLibrary::Num(struct FScriptTypedElementListProxy ElementList){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.Num");

	FNum parms{};	
	parms.ElementList = ElementList;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementListLibrary::IsValidIndex(struct FScriptTypedElementListProxy ElementList, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.IsValidIndex");

	FIsValidIndex parms{};	
	parms.ElementList = ElementList;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementListLibrary::HasElementsOfType(struct FScriptTypedElementListProxy ElementList, struct FName ElementTypeName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.HasElementsOfType");

	FHasElementsOfType parms{};	
	parms.ElementList = ElementList;
	parms.ElementTypeName = ElementTypeName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementListLibrary::HasElements(struct FScriptTypedElementListProxy ElementList, UInterface* BaseInterfaceType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.HasElements");

	FHasElements parms{};	
	parms.ElementList = ElementList;
	parms.BaseInterfaceType = BaseInterfaceType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* UTypedElementListLibrary::GetElementInterface(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle, UInterface* BaseInterfaceType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.GetElementInterface");

	FGetElementInterface parms{};	
	parms.ElementList = ElementList;
	parms.ElementHandle = ElementHandle;
	parms.BaseInterfaceType = BaseInterfaceType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FScriptTypedElementHandle> UTypedElementListLibrary::GetElementHandles(struct FScriptTypedElementListProxy ElementList, UInterface* BaseInterfaceType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.GetElementHandles");

	FGetElementHandles parms{};	
	parms.ElementList = ElementList;
	parms.BaseInterfaceType = BaseInterfaceType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FScriptTypedElementHandle UTypedElementListLibrary::GetElementHandleAt(struct FScriptTypedElementListProxy ElementList, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.GetElementHandleAt");

	FGetElementHandleAt parms{};	
	parms.ElementList = ElementList;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UTypedElementListLibrary::Empty(struct FScriptTypedElementListProxy ElementList, int32_t Slack){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.Empty");

	FEmpty parms{};	
	parms.ElementList = ElementList;
	parms.Slack = Slack;

	ProcessEvent(fn, &parms);
}

struct FScriptTypedElementListProxy UTypedElementListLibrary::CreateScriptElementList(struct UTypedElementRegistry* Registry){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.CreateScriptElementList");

	FCreateScriptElementList parms{};	
	parms.Registry = Registry;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UTypedElementListLibrary::CountElementsOfType(struct FScriptTypedElementListProxy ElementList, struct FName ElementTypeName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.CountElementsOfType");

	FCountElementsOfType parms{};	
	parms.ElementList = ElementList;
	parms.ElementTypeName = ElementTypeName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UTypedElementListLibrary::CountElements(struct FScriptTypedElementListProxy ElementList, UInterface* BaseInterfaceType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.CountElements");

	FCountElements parms{};	
	parms.ElementList = ElementList;
	parms.BaseInterfaceType = BaseInterfaceType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementListLibrary::Contains(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.Contains");

	FContains parms{};	
	parms.ElementList = ElementList;
	parms.ElementHandle = ElementHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FScriptTypedElementListProxy UTypedElementListLibrary::Clone(struct FScriptTypedElementListProxy ElementList){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.Clone");

	FClone parms{};	
	parms.ElementList = ElementList;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UTypedElementListLibrary::AppendList(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementListProxy OtherElementList){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.AppendList");

	FAppendList parms{};	
	parms.ElementList = ElementList;
	parms.OtherElementList = OtherElementList;

	ProcessEvent(fn, &parms);
}

void UTypedElementListLibrary::Append(struct FScriptTypedElementListProxy ElementList, struct TArray<struct FScriptTypedElementHandle>& ElementHandles){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.Append");

	FAppend parms{};	
	parms.ElementList = ElementList;
	parms.ElementHandles = ElementHandles;

	ProcessEvent(fn, &parms);
}

bool UTypedElementListLibrary::Add(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementListLibrary.Add");

	FAdd parms{};	
	parms.ElementList = ElementList;
	parms.ElementHandle = ElementHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTestTypedElementInterfaceB::MarkAsTested(struct FScriptTypedElementHandle& InElementHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested");

	FMarkAsTested parms{};	
	parms.InElementHandle = InElementHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UTypedElementRegistry* UTypedElementRegistry::GetInstance(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementRegistry.GetInstance");

	FGetInstance parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* UTypedElementRegistry::GetElementInterface(struct FScriptTypedElementHandle& InElementHandle, UInterface* InBaseInterfaceType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TypedElementRegistry.GetElementInterface");

	FGetElementInterface parms{};	
	parms.InElementHandle = InElementHandle;
	parms.InBaseInterfaceType = InBaseInterfaceType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTestTypedElementInterfaceA::SetDisplayName(struct FScriptTypedElementHandle& InElementHandle, struct FText InNewName, bool bNotify){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName");

	FSetDisplayName parms{};	
	parms.InElementHandle = InElementHandle;
	parms.InNewName = InNewName;
	parms.bNotify = bNotify;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UTestTypedElementInterfaceA::GetDisplayName(struct FScriptTypedElementHandle& InElementHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName");

	FGetDisplayName parms{};	
	parms.InElementHandle = InElementHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTestTypedElementInterfaceC::GetIsTested(struct FScriptTypedElementHandle& InElementHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementFramework.TestTypedElementInterfaceC.GetIsTested");

	FGetIsTested parms{};	
	parms.InElementHandle = InElementHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

