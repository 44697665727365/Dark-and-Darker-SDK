#include "pch.h"
#include "SDK.h"

bool UTypedElementSelectionInterface::SelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionInterface.SelectElement");

	FSelectElement parms{};	
	parms.InElementHandle = InElementHandle;
	parms.InSelectionSet = InSelectionSet;
	parms.InSelectionOptions = InSelectionOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementSelectionInterface::IsElementSelected(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet, struct FTypedElementIsSelectedOptions& InSelectionOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected");

	FIsElementSelected parms{};	
	parms.InElementHandle = InElementHandle;
	parms.InSelectionSet = InSelectionSet;
	parms.InSelectionOptions = InSelectionOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FScriptTypedElementHandle UTypedElementSelectionInterface::GetSelectionElement(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InCurrentSelection, uint8_t InSelectionMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement");

	FGetSelectionElement parms{};	
	parms.InElementHandle = InElementHandle;
	parms.InCurrentSelection = InCurrentSelection;
	parms.InSelectionMethod = InSelectionMethod;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementSelectionInterface::DeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionInterface.DeselectElement");

	FDeselectElement parms{};	
	parms.InElementHandle = InElementHandle;
	parms.InSelectionSet = InSelectionSet;
	parms.InSelectionOptions = InSelectionOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementSelectionInterface::CanSelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement");

	FCanSelectElement parms{};	
	parms.InElementHandle = InElementHandle;
	parms.InSelectionOptions = InSelectionOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementSelectionInterface::CanDeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement");

	FCanDeselectElement parms{};	
	parms.InElementHandle = InElementHandle;
	parms.InSelectionOptions = InSelectionOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementSelectionInterface::AllowSelectionModifiers(struct FScriptTypedElementHandle& InElementHandle, struct FScriptTypedElementListProxy InSelectionSet){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers");

	FAllowSelectionModifiers parms{};	
	parms.InElementHandle = InElementHandle;
	parms.InSelectionSet = InSelectionSet;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementSelectionSetLibrary::SetSelectionFromList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionOptions SelectionOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList");

	FSetSelectionFromList parms{};	
	parms.SelectionSet = SelectionSet;
	parms.ElementList = ElementList;
	parms.SelectionOptions = SelectionOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementSelectionSetLibrary::SelectElementsFromList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionOptions SelectionOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList");

	FSelectElementsFromList parms{};	
	parms.SelectionSet = SelectionSet;
	parms.ElementList = ElementList;
	parms.SelectionOptions = SelectionOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FScriptTypedElementListProxy UTypedElementSelectionSetLibrary::GetNormalizedSelection(struct UTypedElementSelectionSet* SelectionSet, struct FTypedElementSelectionNormalizationOptions NormalizationOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection");

	FGetNormalizedSelection parms{};	
	parms.SelectionSet = SelectionSet;
	parms.NormalizationOptions = NormalizationOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FScriptTypedElementListProxy UTypedElementSelectionSetLibrary::GetNormalizedElementList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionNormalizationOptions NormalizationOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList");

	FGetNormalizedElementList parms{};	
	parms.SelectionSet = SelectionSet;
	parms.ElementList = ElementList;
	parms.NormalizationOptions = NormalizationOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementSelectionSetLibrary::DeselectElementsFromList(struct UTypedElementSelectionSet* SelectionSet, struct FScriptTypedElementListProxy ElementList, struct FTypedElementSelectionOptions SelectionOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList");

	FDeselectElementsFromList parms{};	
	parms.SelectionSet = SelectionSet;
	parms.ElementList = ElementList;
	parms.SelectionOptions = SelectionOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementSelectionSet::SetSelection(struct TArray<struct FScriptTypedElementHandle>& InElementHandles, struct FTypedElementSelectionOptions InSelectionOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.SetSelection");

	FSetSelection parms{};	
	parms.InElementHandles = InElementHandles;
	parms.InSelectionOptions = InSelectionOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementSelectionSet::SelectElements(struct TArray<struct FScriptTypedElementHandle>& InElementHandles, struct FTypedElementSelectionOptions InSelectionOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.SelectElements");

	FSelectElements parms{};	
	parms.InElementHandles = InElementHandles;
	parms.InSelectionOptions = InSelectionOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementSelectionSet::SelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.SelectElement");

	FSelectElement parms{};	
	parms.InElementHandle = InElementHandle;
	parms.InSelectionOptions = InSelectionOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UTypedElementSelectionSet::RestoreSelectionState(struct FTypedElementSelectionSetState& InSelectionState){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState");

	FRestoreSelectionState parms{};	
	parms.InSelectionState = InSelectionState;

	ProcessEvent(fn, &parms);
}

void UTypedElementSelectionSet::OnPreChangeDynamic__DelegateSignature(struct UTypedElementSelectionSet* SelectionSet){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature");

	FOnPreChangeDynamic__DelegateSignature parms{};	
	parms.SelectionSet = SelectionSet;

	ProcessEvent(fn, &parms);
}

void UTypedElementSelectionSet::OnChangeDynamic__DelegateSignature(struct UTypedElementSelectionSet* SelectionSet){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature");

	FOnChangeDynamic__DelegateSignature parms{};	
	parms.SelectionSet = SelectionSet;

	ProcessEvent(fn, &parms);
}

struct TArray<struct FScriptTypedElementHandle> UTypedElementSelectionSet::K2_GetSelectedElementHandles(UInterface* InBaseInterfaceType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles");

	FK2_GetSelectedElementHandles parms{};	
	parms.InBaseInterfaceType = InBaseInterfaceType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementSelectionSet::IsElementSelected(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementIsSelectedOptions InSelectionOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.IsElementSelected");

	FIsElementSelected parms{};	
	parms.InElementHandle = InElementHandle;
	parms.InSelectionOptions = InSelectionOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementSelectionSet::HasSelectedObjects(UObject* InRequiredClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects");

	FHasSelectedObjects parms{};	
	parms.InRequiredClass = InRequiredClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementSelectionSet::HasSelectedElements(UInterface* InBaseInterfaceType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements");

	FHasSelectedElements parms{};	
	parms.InBaseInterfaceType = InBaseInterfaceType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* UTypedElementSelectionSet::GetTopSelectedObject(UObject* InRequiredClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject");

	FGetTopSelectedObject parms{};	
	parms.InRequiredClass = InRequiredClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FScriptTypedElementHandle UTypedElementSelectionSet::GetSelectionElement(struct FScriptTypedElementHandle& InElementHandle, uint8_t InSelectionMethod){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement");

	FGetSelectionElement parms{};	
	parms.InElementHandle = InElementHandle;
	parms.InSelectionMethod = InSelectionMethod;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UObject*> UTypedElementSelectionSet::GetSelectedObjects(UObject* InRequiredClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects");

	FGetSelectedObjects parms{};	
	parms.InRequiredClass = InRequiredClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UTypedElementSelectionSet::GetNumSelectedElements(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements");

	FGetNumSelectedElements parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTypedElementSelectionSetState UTypedElementSelectionSet::GetCurrentSelectionState(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState");

	FGetCurrentSelectionState parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* UTypedElementSelectionSet::GetBottomSelectedObject(UObject* InRequiredClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject");

	FGetBottomSelectedObject parms{};	
	parms.InRequiredClass = InRequiredClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementSelectionSet::DeselectElements(struct TArray<struct FScriptTypedElementHandle>& InElementHandles, struct FTypedElementSelectionOptions InSelectionOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.DeselectElements");

	FDeselectElements parms{};	
	parms.InElementHandles = InElementHandles;
	parms.InSelectionOptions = InSelectionOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementSelectionSet::DeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.DeselectElement");

	FDeselectElement parms{};	
	parms.InElementHandle = InElementHandle;
	parms.InSelectionOptions = InSelectionOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UTypedElementSelectionSet::CountSelectedObjects(UObject* InRequiredClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects");

	FCountSelectedObjects parms{};	
	parms.InRequiredClass = InRequiredClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UTypedElementSelectionSet::CountSelectedElements(UInterface* InBaseInterfaceType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements");

	FCountSelectedElements parms{};	
	parms.InBaseInterfaceType = InBaseInterfaceType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementSelectionSet::ClearSelection(struct FTypedElementSelectionOptions InSelectionOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.ClearSelection");

	FClearSelection parms{};	
	parms.InSelectionOptions = InSelectionOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementSelectionSet::CanSelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.CanSelectElement");

	FCanSelectElement parms{};	
	parms.InElementHandle = InElementHandle;
	parms.InSelectionOptions = InSelectionOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementSelectionSet::CanDeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions InSelectionOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement");

	FCanDeselectElement parms{};	
	parms.InElementHandle = InElementHandle;
	parms.InSelectionOptions = InSelectionOptions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UTypedElementSelectionSet::AllowSelectionModifiers(struct FScriptTypedElementHandle& InElementHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers");

	FAllowSelectionModifiers parms{};	
	parms.InElementHandle = InElementHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAssetData UTypedElementAssetDataInterface::GetAssetData(struct FScriptTypedElementHandle& InElementHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData");

	FGetAssetData parms{};	
	parms.InElementHandle = InElementHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FAssetData> UTypedElementAssetDataInterface::GetAllReferencedAssetDatas(struct FScriptTypedElementHandle& InElementHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas");

	FGetAllReferencedAssetDatas parms{};	
	parms.InElementHandle = InElementHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FScriptTypedElementHandle UTypedElementHierarchyInterface::GetParentElement(struct FScriptTypedElementHandle& InElementHandle, bool bAllowCreate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement");

	FGetParentElement parms{};	
	parms.InElementHandle = InElementHandle;
	parms.bAllowCreate = bAllowCreate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UTypedElementHierarchyInterface::GetChildElements(struct FScriptTypedElementHandle& InElementHandle, struct TArray<struct FScriptTypedElementHandle>& OutElementHandles, bool bAllowCreate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements");

	FGetChildElements parms{};	
	parms.InElementHandle = InElementHandle;
	parms.OutElementHandles = OutElementHandles;
	parms.bAllowCreate = bAllowCreate;

	ProcessEvent(fn, &parms);
}

UObject* UTypedElementObjectInterface::GetObjectClass(struct FScriptTypedElementHandle& InElementHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementObjectInterface.GetObjectClass");

	FGetObjectClass parms{};	
	parms.InElementHandle = InElementHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UObject* UTypedElementObjectInterface::GetObject(struct FScriptTypedElementHandle& InElementHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementObjectInterface.GetObject");

	FGetObject parms{};	
	parms.InElementHandle = InElementHandle;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

