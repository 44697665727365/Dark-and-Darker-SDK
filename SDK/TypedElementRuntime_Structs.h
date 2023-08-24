#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function TypedElementRuntime.TypedElementSelectionInterface.DeselectElement
struct FDeselectElement
{
	struct FScriptTypedElementHandle InElementHandle;  // 0x0 (0x0)
	struct FScriptTypedElementListProxy InSelectionSet;  // 0x8 (0x8)
	struct FTypedElementSelectionOptions InSelectionOptions;  // 0x18 (0x18)
	char pad_29_1 : 7;  // 0x1D (0x1D)
	bool ReturnValue : 1;  // 0x1D (0x1D)
	char pad_30[2];  // 0x1E (0x1E)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects
struct FGetSelectedObjects
{
	UObject* InRequiredClass;  // 0x0 (0x0)
	struct TArray<struct UObject*> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers
struct FAllowSelectionModifiers
{
	struct FScriptTypedElementHandle InElementHandle;  // 0x0 (0x0)
	struct FScriptTypedElementListProxy InSelectionSet;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement
struct FCanDeselectElement
{
	struct FScriptTypedElementHandle InElementHandle;  // 0x0 (0x0)
	struct FTypedElementSelectionOptions InSelectionOptions;  // 0x8 (0x8)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool ReturnValue : 1;  // 0xD (0xD)
	char pad_14[2];  // 0xE (0xE)


}; 
 
 // ScriptStruct TypedElementRuntime.TypedElementSelectionOptions
struct FTypedElementSelectionOptions
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bAllowHidden : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bAllowGroups : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool bAllowLegacyNotifications : 1;  // 0x2 (0x2)
	char pad_3_1 : 7;  // 0x3 (0x3)
	bool bWarnIfLocked : 1;  // 0x3 (0x3)
	uint8_t ChildElementInclusionMethod;  // 0x4 (0x4)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement
struct FCanSelectElement
{
	struct FScriptTypedElementHandle InElementHandle;  // 0x0 (0x0)
	struct FTypedElementSelectionOptions InSelectionOptions;  // 0x8 (0x8)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool ReturnValue : 1;  // 0xD (0xD)
	char pad_14[2];  // 0xE (0xE)


}; 
 
 // Function TypedElementRuntime.TypedElementObjectInterface.GetObjectClass
struct FGetObjectClass
{
	struct FScriptTypedElementHandle InElementHandle;  // 0x0 (0x0)
	UObject* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList
struct FSelectElementsFromList
{
	struct UTypedElementSelectionSet* SelectionSet;  // 0x0 (0x0)
	struct FScriptTypedElementListProxy ElementList;  // 0x8 (0x8)
	struct FTypedElementSelectionOptions SelectionOptions;  // 0x18 (0x18)
	char pad_29_1 : 7;  // 0x1D (0x1D)
	bool ReturnValue : 1;  // 0x1D (0x1D)
	char pad_30[2];  // 0x1E (0x1E)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements
struct FCountSelectedElements
{
	UInterface* InBaseInterfaceType;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionSet.ClearSelection
struct FClearSelection
{
	struct FTypedElementSelectionOptions InSelectionOptions;  // 0x0 (0x0)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool ReturnValue : 1;  // 0x5 (0x5)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects
struct FCountSelectedObjects
{
	UObject* InRequiredClass;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList
struct FSetSelectionFromList
{
	struct UTypedElementSelectionSet* SelectionSet;  // 0x0 (0x0)
	struct FScriptTypedElementListProxy ElementList;  // 0x8 (0x8)
	struct FTypedElementSelectionOptions SelectionOptions;  // 0x18 (0x18)
	char pad_29_1 : 7;  // 0x1D (0x1D)
	bool ReturnValue : 1;  // 0x1D (0x1D)
	char pad_30[2];  // 0x1E (0x1E)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements
struct FHasSelectedElements
{
	UInterface* InBaseInterfaceType;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState
struct FGetCurrentSelectionState
{
	struct FTypedElementSelectionSetState ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionSet.DeselectElements
struct FDeselectElements
{
	struct TArray<struct FScriptTypedElementHandle> InElementHandles;  // 0x0 (0x0)
	struct FTypedElementSelectionOptions InSelectionOptions;  // 0x10 (0x10)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool ReturnValue : 1;  // 0x15 (0x15)
	char pad_22[2];  // 0x16 (0x16)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject
struct FGetBottomSelectedObject
{
	UObject* InRequiredClass;  // 0x0 (0x0)
	struct UObject* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection
struct FGetNormalizedSelection
{
	struct UTypedElementSelectionSet* SelectionSet;  // 0x0 (0x0)
	struct FTypedElementSelectionNormalizationOptions NormalizationOptions;  // 0x8 (0x8)
	char pad_10[6];  // 0xA (0xA)
	struct FScriptTypedElementListProxy ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct TypedElementRuntime.TypedElementSelectionNormalizationOptions
struct FTypedElementSelectionNormalizationOptions
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bExpandGroups : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bFollowAttachment : 1;  // 0x1 (0x1)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject
struct FGetTopSelectedObject
{
	UObject* InRequiredClass;  // 0x0 (0x0)
	struct UObject* ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct TypedElementRuntime.TypedElementSelectionSetState
struct FTypedElementSelectionSetState
{
	struct TWeakObjectPtr<UTypedElementSelectionSet> CreatedFromSelectionSet;  // 0x0 (0x0)
	char pad_8[16];  // 0x8 (0x8)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements
struct FGetNumSelectedElements
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement
struct FGetSelectionElement
{
	struct FScriptTypedElementHandle InElementHandle;  // 0x0 (0x0)
	struct FScriptTypedElementListProxy InCurrentSelection;  // 0x8 (0x8)
	uint8_t InSelectionMethod;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct FScriptTypedElementHandle ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects
struct FHasSelectedObjects
{
	UObject* InRequiredClass;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList
struct FGetNormalizedElementList
{
	struct UTypedElementSelectionSet* SelectionSet;  // 0x0 (0x0)
	struct FScriptTypedElementListProxy ElementList;  // 0x8 (0x8)
	struct FTypedElementSelectionNormalizationOptions NormalizationOptions;  // 0x18 (0x18)
	char pad_26[6];  // 0x1A (0x1A)
	struct FScriptTypedElementListProxy ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected
struct FIsElementSelected
{
	struct FScriptTypedElementHandle InElementHandle;  // 0x0 (0x0)
	struct FScriptTypedElementListProxy InSelectionSet;  // 0x8 (0x8)
	struct FTypedElementIsSelectedOptions InSelectionOptions;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool ReturnValue : 1;  // 0x19 (0x19)
	char pad_26[6];  // 0x1A (0x1A)


}; 
 
 // ScriptStruct TypedElementRuntime.TypedElementIsSelectedOptions
struct FTypedElementIsSelectedOptions
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bAllowIndirect : 1;  // 0x0 (0x0)


}; 
 
 // Function TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData
struct FGetAssetData
{
	struct FScriptTypedElementHandle InElementHandle;  // 0x0 (0x0)
	struct FAssetData ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles
struct FK2_GetSelectedElementHandles
{
	UInterface* InBaseInterfaceType;  // 0x0 (0x0)
	struct TArray<struct FScriptTypedElementHandle> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState
struct FRestoreSelectionState
{
	struct FTypedElementSelectionSetState InSelectionState;  // 0x0 (0x0)


}; 
 
 // DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature
struct FOnChangeDynamic__DelegateSignature
{
	struct UTypedElementSelectionSet* SelectionSet;  // 0x0 (0x0)


}; 
 
 // DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature
struct FOnPreChangeDynamic__DelegateSignature
{
	struct UTypedElementSelectionSet* SelectionSet;  // 0x0 (0x0)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionInterface.SelectElement
struct FSelectElement
{
	struct FScriptTypedElementHandle InElementHandle;  // 0x0 (0x0)
	struct FScriptTypedElementListProxy InSelectionSet;  // 0x8 (0x8)
	struct FTypedElementSelectionOptions InSelectionOptions;  // 0x18 (0x18)
	char pad_29_1 : 7;  // 0x1D (0x1D)
	bool ReturnValue : 1;  // 0x1D (0x1D)
	char pad_30[2];  // 0x1E (0x1E)


}; 
 
 // Function TypedElementRuntime.TypedElementObjectInterface.GetObject
struct FGetObject
{
	struct FScriptTypedElementHandle InElementHandle;  // 0x0 (0x0)
	struct UObject* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionSet.SelectElements
struct FSelectElements
{
	struct TArray<struct FScriptTypedElementHandle> InElementHandles;  // 0x0 (0x0)
	struct FTypedElementSelectionOptions InSelectionOptions;  // 0x10 (0x10)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool ReturnValue : 1;  // 0x15 (0x15)
	char pad_22[2];  // 0x16 (0x16)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionSet.SetSelection
struct FSetSelection
{
	struct TArray<struct FScriptTypedElementHandle> InElementHandles;  // 0x0 (0x0)
	struct FTypedElementSelectionOptions InSelectionOptions;  // 0x10 (0x10)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool ReturnValue : 1;  // 0x15 (0x15)
	char pad_22[2];  // 0x16 (0x16)


}; 
 
 // Function TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList
struct FDeselectElementsFromList
{
	struct UTypedElementSelectionSet* SelectionSet;  // 0x0 (0x0)
	struct FScriptTypedElementListProxy ElementList;  // 0x8 (0x8)
	struct FTypedElementSelectionOptions SelectionOptions;  // 0x18 (0x18)
	char pad_29_1 : 7;  // 0x1D (0x1D)
	bool ReturnValue : 1;  // 0x1D (0x1D)
	char pad_30[2];  // 0x1E (0x1E)


}; 
 
 // Function TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas
struct FGetAllReferencedAssetDatas
{
	struct FScriptTypedElementHandle InElementHandle;  // 0x0 (0x0)
	struct TArray<struct FAssetData> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements
struct FGetChildElements
{
	struct FScriptTypedElementHandle InElementHandle;  // 0x0 (0x0)
	struct TArray<struct FScriptTypedElementHandle> OutElementHandles;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bAllowCreate : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement
struct FGetParentElement
{
	struct FScriptTypedElementHandle InElementHandle;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bAllowCreate : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FScriptTypedElementHandle ReturnValue;  // 0x10 (0x10)


}; 
 
 