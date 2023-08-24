#pragma once 
#include <TypedElementFramework_Structs.h>
 
 
 
// Class TypedElementFramework.TypedElementHandleLibrary
// Size: 0x28(Inherited: 0x28)
struct UTypedElementHandleLibrary : UObject
{


	void Release(struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementHandleLibrary.Release
	bool NotEqual(struct FScriptTypedElementHandle& LHS, struct FScriptTypedElementHandle& RHS); // Function TypedElementFramework.TypedElementHandleLibrary.NotEqual
	bool IsSet(struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementHandleLibrary.IsSet
	bool Equal(struct FScriptTypedElementHandle& LHS, struct FScriptTypedElementHandle& RHS); // Function TypedElementFramework.TypedElementHandleLibrary.Equal
}; 
 
 


// Class TypedElementFramework.TypedElementListLibrary
// Size: 0x28(Inherited: 0x28)
struct UTypedElementListLibrary : UObject
{


	void Shrink(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Shrink
	void Reset(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Reset
	void Reserve(struct FScriptTypedElementListProxy ElementList, int32_t Size); // Function TypedElementFramework.TypedElementListLibrary.Reserve
	bool Remove(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementListLibrary.Remove
	int32_t Num(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Num
	bool IsValidIndex(struct FScriptTypedElementListProxy ElementList, int32_t Index); // Function TypedElementFramework.TypedElementListLibrary.IsValidIndex
	bool HasElementsOfType(struct FScriptTypedElementListProxy ElementList, struct FName ElementTypeName); // Function TypedElementFramework.TypedElementListLibrary.HasElementsOfType
	bool HasElements(struct FScriptTypedElementListProxy ElementList, UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.HasElements
	struct UObject* GetElementInterface(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle, UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.GetElementInterface
	struct TArray<struct FScriptTypedElementHandle> GetElementHandles(struct FScriptTypedElementListProxy ElementList, UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.GetElementHandles
	struct FScriptTypedElementHandle GetElementHandleAt(struct FScriptTypedElementListProxy ElementList, int32_t Index); // Function TypedElementFramework.TypedElementListLibrary.GetElementHandleAt
	void Empty(struct FScriptTypedElementListProxy ElementList, int32_t Slack); // Function TypedElementFramework.TypedElementListLibrary.Empty
	struct FScriptTypedElementListProxy CreateScriptElementList(struct UTypedElementRegistry* Registry); // Function TypedElementFramework.TypedElementListLibrary.CreateScriptElementList
	int32_t CountElementsOfType(struct FScriptTypedElementListProxy ElementList, struct FName ElementTypeName); // Function TypedElementFramework.TypedElementListLibrary.CountElementsOfType
	int32_t CountElements(struct FScriptTypedElementListProxy ElementList, UInterface* BaseInterfaceType); // Function TypedElementFramework.TypedElementListLibrary.CountElements
	bool Contains(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementListLibrary.Contains
	struct FScriptTypedElementListProxy Clone(struct FScriptTypedElementListProxy ElementList); // Function TypedElementFramework.TypedElementListLibrary.Clone
	void AppendList(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementListProxy OtherElementList); // Function TypedElementFramework.TypedElementListLibrary.AppendList
	void Append(struct FScriptTypedElementListProxy ElementList, struct TArray<struct FScriptTypedElementHandle>& ElementHandles); // Function TypedElementFramework.TypedElementListLibrary.Append
	bool Add(struct FScriptTypedElementListProxy ElementList, struct FScriptTypedElementHandle& ElementHandle); // Function TypedElementFramework.TypedElementListLibrary.Add
}; 
 
 


// Class TypedElementFramework.TestTypedElementInterfaceB
// Size: 0x28(Inherited: 0x28)
struct UTestTypedElementInterfaceB : UInterface
{


	bool MarkAsTested(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested
}; 
 
 


// Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
// Size: 0x30(Inherited: 0x28)
struct UTestTypedElementInterfaceA_ImplTyped : UObject
{
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 


// Class TypedElementFramework.TypedElementRegistry
// Size: 0x948(Inherited: 0x28)
struct UTypedElementRegistry : UObject
{
	char pad_40[2336];  // 0x28 (0x28)


	struct UTypedElementRegistry* GetInstance(); // Function TypedElementFramework.TypedElementRegistry.GetInstance
	struct UObject* GetElementInterface(struct FScriptTypedElementHandle& InElementHandle, UInterface* InBaseInterfaceType); // Function TypedElementFramework.TypedElementRegistry.GetElementInterface
}; 
 
 


// Class TypedElementFramework.TypedElementCounterInterface
// Size: 0x28(Inherited: 0x28)
struct UTypedElementCounterInterface : UInterface
{


}; 
 
 


// Class TypedElementFramework.TestTypedElementInterfaceA
// Size: 0x28(Inherited: 0x28)
struct UTestTypedElementInterfaceA : UInterface
{


	bool SetDisplayName(struct FScriptTypedElementHandle& InElementHandle, struct FText InNewName, bool bNotify); // Function TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName
	struct FText GetDisplayName(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName
}; 
 
 


// Class TypedElementFramework.TestTypedElementInterfaceC
// Size: 0x28(Inherited: 0x28)
struct UTestTypedElementInterfaceC : UInterface
{


	bool GetIsTested(struct FScriptTypedElementHandle& InElementHandle); // Function TypedElementFramework.TestTypedElementInterfaceC.GetIsTested
}; 
 
 


// Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
// Size: 0x30(Inherited: 0x28)
struct UTestTypedElementInterfaceA_ImplUntyped : UObject
{
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 


// Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
// Size: 0x38(Inherited: 0x28)
struct UTestTypedElementInterfaceBAndC_Typed : UObject
{
	char pad_40[16];  // 0x28 (0x28)


}; 
 
 


