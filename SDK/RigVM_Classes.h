#pragma once 
#include <RigVM_Structs.h>
 
 
 
// Class RigVM.RigVMMemoryStorage
// Size: 0x28(Inherited: 0x28)
struct URigVMMemoryStorage : UObject
{


}; 
 
 


// Class RigVM.RigVMUserWorkflowOptions
// Size: 0x98(Inherited: 0x28)
struct URigVMUserWorkflowOptions : UObject
{
	struct UObject* Subject;  // 0x28 (0x28)
	struct FRigVMUserWorkflow Workflow;  // 0x30 (0x30)
	char pad_136[16];  // 0x88 (0x88)


	bool RequiresDialog(); // Function RigVM.RigVMUserWorkflowOptions.RequiresDialog
	void ReportWarning(struct FString InMessage); // Function RigVM.RigVMUserWorkflowOptions.ReportWarning
	void ReportInfo(struct FString InMessage); // Function RigVM.RigVMUserWorkflowOptions.ReportInfo
	void ReportError(struct FString InMessage); // Function RigVM.RigVMUserWorkflowOptions.ReportError
	bool IsValid(); // Function RigVM.RigVMUserWorkflowOptions.IsValid
}; 
 
 


// Class RigVM.RigVMNativized
// Size: 0x2B0(Inherited: 0x2A8)
struct URigVMNativized : URigVM
{
	char pad_680[8];  // 0x2A8 (0x2A8)


}; 
 
 


// Class RigVM.RigVM
// Size: 0x2A8(Inherited: 0x28)
struct URigVM : UObject
{
	struct URigVMMemoryStorage* WorkMemoryStorageObject;  // 0x28 (0x28)
	struct URigVMMemoryStorage* LiteralMemoryStorageObject;  // 0x30 (0x30)
	struct URigVMMemoryStorage* DebugMemoryStorageObject;  // 0x38 (0x38)
	char pad_64[32];  // 0x40 (0x40)
	struct FRigVMByteCode ByteCodeStorage;  // 0x60 (0x60)
	char pad_144[8];  // 0x90 (0x90)
	struct FRigVMInstructionArray Instructions;  // 0x98 (0x98)
	struct FRigVMExtendedExecuteContext Context;  // 0xA8 (0xA8)
	uint32_t NumExecutions;  // 0x120 (0x120)
	char pad_292[4];  // 0x124 (0x124)
	struct TArray<struct FName> FunctionNamesStorage;  // 0x128 (0x128)
	char pad_312[56];  // 0x138 (0x138)
	struct TArray<struct FRigVMParameter> Parameters;  // 0x170 (0x170)
	struct TMap<struct FName, int32_t> ParametersNameMap;  // 0x180 (0x180)
	char pad_464[184];  // 0x1D0 (0x1D0)
	struct URigVM* DeferredVMToCopy;  // 0x288 (0x288)
	char pad_656[24];  // 0x290 (0x290)


	void SetParameterValueVector2D(struct FName& InParameterName, struct FVector2D& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueVector2D
	void SetParameterValueVector(struct FName& InParameterName, struct FVector& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueVector
	void SetParameterValueTransform(struct FName& InParameterName, struct FTransform& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueTransform
	void SetParameterValueString(struct FName& InParameterName, struct FString InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueString
	void SetParameterValueQuat(struct FName& InParameterName, struct FQuat& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueQuat
	void SetParameterValueName(struct FName& InParameterName, struct FName& InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueName
	void SetParameterValueInt(struct FName& InParameterName, int32_t InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueInt
	void SetParameterValueFloat(struct FName& InParameterName, float InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueFloat
	void SetParameterValueDouble(struct FName& InParameterName, double InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueDouble
	void SetParameterValueBool(struct FName& InParameterName, bool InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueBool
	struct FRigVMStatistics GetStatistics(); // Function RigVM.RigVM.GetStatistics
	struct FString GetRigVMFunctionName(int32_t InFunctionIndex); // Function RigVM.RigVM.GetRigVMFunctionName
	struct FVector2D GetParameterValueVector2D(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueVector2D
	struct FVector GetParameterValueVector(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueVector
	struct FTransform GetParameterValueTransform(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueTransform
	struct FString GetParameterValueString(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueString
	struct FQuat GetParameterValueQuat(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueQuat
	struct FName GetParameterValueName(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueName
	int32_t GetParameterValueInt(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueInt
	float GetParameterValueFloat(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueFloat
	double GetParameterValueDouble(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueDouble
	bool GetParameterValueBool(struct FName& InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueBool
	bool Execute(struct FName& InEntryName); // Function RigVM.RigVM.Execute
	int32_t AddRigVMFunction(struct UScriptStruct* InRigVMStruct, struct FName& InMethodName); // Function RigVM.RigVM.AddRigVMFunction
}; 
 
 


// Class RigVM.RigVMMemoryStorageGeneratorClass
// Size: 0x270(Inherited: 0x230)
struct URigVMMemoryStorageGeneratorClass : UClass
{
	char pad_560[64];  // 0x230 (0x230)


}; 
 
 


