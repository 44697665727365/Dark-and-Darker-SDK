#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function TypedElementFramework.TypedElementListLibrary.Add
struct FAdd
{
	struct FScriptTypedElementListProxy ElementList;  // 0x0 (0x0)
	struct FScriptTypedElementHandle ElementHandle;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function TypedElementFramework.TypedElementListLibrary.GetElementHandles
struct FGetElementHandles
{
	struct FScriptTypedElementListProxy ElementList;  // 0x0 (0x0)
	UInterface* BaseInterfaceType;  // 0x10 (0x10)
	struct TArray<struct FScriptTypedElementHandle> ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct TypedElementFramework.ScriptTypedElementHandle
struct FScriptTypedElementHandle
{
	char pad_0[8];  // 0x0 (0x0)


}; 
 
 // ScriptStruct TypedElementFramework.ScriptTypedElementListProxy
struct FScriptTypedElementListProxy
{
	char pad_0[16];  // 0x0 (0x0)


}; 
 
 // Function TypedElementFramework.TypedElementHandleLibrary.Equal
struct FEqual
{
	struct FScriptTypedElementHandle LHS;  // 0x0 (0x0)
	struct FScriptTypedElementHandle RHS;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function TypedElementFramework.TypedElementHandleLibrary.IsSet
struct FIsSet
{
	struct FScriptTypedElementHandle ElementHandle;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function TypedElementFramework.TypedElementHandleLibrary.Release
struct FRelease
{
	struct FScriptTypedElementHandle ElementHandle;  // 0x0 (0x0)


}; 
 
 // Function TypedElementFramework.TypedElementHandleLibrary.NotEqual
struct FNotEqual
{
	struct FScriptTypedElementHandle LHS;  // 0x0 (0x0)
	struct FScriptTypedElementHandle RHS;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function TypedElementFramework.TypedElementListLibrary.Append
struct FAppend
{
	struct FScriptTypedElementListProxy ElementList;  // 0x0 (0x0)
	struct TArray<struct FScriptTypedElementHandle> ElementHandles;  // 0x10 (0x10)


}; 
 
 // Function TypedElementFramework.TypedElementListLibrary.AppendList
struct FAppendList
{
	struct FScriptTypedElementListProxy ElementList;  // 0x0 (0x0)
	struct FScriptTypedElementListProxy OtherElementList;  // 0x10 (0x10)


}; 
 
 // Function TypedElementFramework.TypedElementListLibrary.Clone
struct FClone
{
	struct FScriptTypedElementListProxy ElementList;  // 0x0 (0x0)
	struct FScriptTypedElementListProxy ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function TypedElementFramework.TypedElementListLibrary.Shrink
struct FShrink
{
	struct FScriptTypedElementListProxy ElementList;  // 0x0 (0x0)


}; 
 
 // Function TypedElementFramework.TypedElementListLibrary.CountElementsOfType
struct FCountElementsOfType
{
	struct FScriptTypedElementListProxy ElementList;  // 0x0 (0x0)
	struct FName ElementTypeName;  // 0x10 (0x10)
	int32_t ReturnValue;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function TypedElementFramework.TypedElementListLibrary.Contains
struct FContains
{
	struct FScriptTypedElementListProxy ElementList;  // 0x0 (0x0)
	struct FScriptTypedElementHandle ElementHandle;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function TypedElementFramework.TypedElementListLibrary.CountElements
struct FCountElements
{
	struct FScriptTypedElementListProxy ElementList;  // 0x0 (0x0)
	UInterface* BaseInterfaceType;  // 0x10 (0x10)
	int32_t ReturnValue;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function TypedElementFramework.TestTypedElementInterfaceC.GetIsTested
struct FGetIsTested
{
	struct FScriptTypedElementHandle InElementHandle;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function TypedElementFramework.TypedElementListLibrary.CreateScriptElementList
struct FCreateScriptElementList
{
	struct UTypedElementRegistry* Registry;  // 0x0 (0x0)
	struct FScriptTypedElementListProxy ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function TypedElementFramework.TypedElementListLibrary.Empty
struct FEmpty
{
	struct FScriptTypedElementListProxy ElementList;  // 0x0 (0x0)
	int32_t Slack;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function TypedElementFramework.TypedElementListLibrary.GetElementHandleAt
struct FGetElementHandleAt
{
	struct FScriptTypedElementListProxy ElementList;  // 0x0 (0x0)
	int32_t Index;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FScriptTypedElementHandle ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function TypedElementFramework.TypedElementRegistry.GetInstance
struct FGetInstance
{
	struct UTypedElementRegistry* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function TypedElementFramework.TypedElementRegistry.GetElementInterface
struct FGetElementInterface
{
	struct FScriptTypedElementHandle InElementHandle;  // 0x0 (0x0)
	UInterface* InBaseInterfaceType;  // 0x8 (0x8)
	struct UObject* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function TypedElementFramework.TypedElementListLibrary.HasElements
struct FHasElements
{
	struct FScriptTypedElementListProxy ElementList;  // 0x0 (0x0)
	UInterface* BaseInterfaceType;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function TypedElementFramework.TypedElementListLibrary.HasElementsOfType
struct FHasElementsOfType
{
	struct FScriptTypedElementListProxy ElementList;  // 0x0 (0x0)
	struct FName ElementTypeName;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function TypedElementFramework.TypedElementListLibrary.IsValidIndex
struct FIsValidIndex
{
	struct FScriptTypedElementListProxy ElementList;  // 0x0 (0x0)
	int32_t Index;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function TypedElementFramework.TypedElementListLibrary.Reserve
struct FReserve
{
	struct FScriptTypedElementListProxy ElementList;  // 0x0 (0x0)
	int32_t Size;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function TypedElementFramework.TypedElementListLibrary.Num
struct FNum
{
	struct FScriptTypedElementListProxy ElementList;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested
struct FMarkAsTested
{
	struct FScriptTypedElementHandle InElementHandle;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function TypedElementFramework.TypedElementListLibrary.Remove
struct FRemove
{
	struct FScriptTypedElementListProxy ElementList;  // 0x0 (0x0)
	struct FScriptTypedElementHandle ElementHandle;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function TypedElementFramework.TypedElementListLibrary.Reset
struct FReset
{
	struct FScriptTypedElementListProxy ElementList;  // 0x0 (0x0)


}; 
 
 // Function TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName
struct FGetDisplayName
{
	struct FScriptTypedElementHandle InElementHandle;  // 0x0 (0x0)
	struct FText ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName
struct FSetDisplayName
{
	struct FScriptTypedElementHandle InElementHandle;  // 0x0 (0x0)
	struct FText InNewName;  // 0x8 (0x8)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bNotify : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool ReturnValue : 1;  // 0x21 (0x21)
	char pad_34[6];  // 0x22 (0x22)


}; 
 
 