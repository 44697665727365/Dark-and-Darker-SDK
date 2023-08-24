#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct RigVM.RigVMQuaternaryOp
// Size: 0x1A(Inherited: 0x1)
struct FRigVMQuaternaryOp : FRigVMBaseOp
{
	char pad_1[25];  // 0x1 (0x1)


}; 
 
 // ScriptStruct RigVM.RigVMMemoryStatistics
struct FRigVMMemoryStatistics
{
	int32_t RegisterCount;  // 0x0 (0x0)
	int32_t DataBytes;  // 0x4 (0x4)
	int32_t TotalBytes;  // 0x8 (0x8)


}; 
 
 // Function RigVM.RigVM.Execute
struct FExecute
{
	struct FName InEntryName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // ScriptStruct RigVM.RigVMSenaryOp
// Size: 0x26(Inherited: 0x1)
struct FRigVMSenaryOp : FRigVMBaseOp
{
	char pad_1[37];  // 0x1 (0x1)


}; 
 
 // DelegateFunction RigVM.RigVMPeformUserWorkflowDynamicDelegate__DelegateSignature
struct FRigVMPeformUserWorkflowDynamicDelegate__DelegateSignature
{
	struct URigVMUserWorkflowOptions* InOptions;  // 0x0 (0x0)
	struct UObject* InController;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function RigVM.RigVMUserWorkflowOptions.RequiresDialog
struct FRequiresDialog
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct RigVM.RigVMStruct
struct FRigVMStruct
{
	char pad_0[8];  // 0x0 (0x0)


}; 
 
 // ScriptStruct RigVM.RigVMUnaryOp
// Size: 0x8(Inherited: 0x1)
struct FRigVMUnaryOp : FRigVMBaseOp
{
	char pad_1[7];  // 0x1 (0x1)


}; 
 
 // Function RigVM.RigVMUserWorkflowOptions.IsValid
struct FIsValid
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct RigVM.RigVMRuntimeSettings
struct FRigVMRuntimeSettings
{
	int32_t MaximumArraySize;  // 0x0 (0x0)
	char pad_4[20];  // 0x4 (0x4)


}; 
 
 // ScriptStruct RigVM.RigVMExecuteContext
struct FRigVMExecuteContext
{
	char pad_0[48];  // 0x0 (0x0)


}; 
 
 // ScriptStruct RigVM.RigVMByteCodeStatistics
struct FRigVMByteCodeStatistics
{
	int32_t InstructionCount;  // 0x0 (0x0)
	int32_t DataBytes;  // 0x4 (0x4)


}; 
 
 // ScriptStruct RigVM.RigVMDispatchFactory
struct FRigVMDispatchFactory
{
	char pad_0[24];  // 0x0 (0x0)


}; 
 
 // ScriptStruct RigVM.RigVMUnknownType
struct FRigVMUnknownType
{
	uint32_t Hash;  // 0x0 (0x0)


}; 
 
 // ScriptStruct RigVM.RigVMStatistics
struct FRigVMStatistics
{
	int32_t BytesForCDO;  // 0x0 (0x0)
	int32_t BytesPerInstance;  // 0x4 (0x4)
	struct FRigVMMemoryStatistics LiteralMemory;  // 0x8 (0x8)
	struct FRigVMMemoryStatistics WorkMemory;  // 0x14 (0x14)
	struct FRigVMMemoryStatistics DebugMemory;  // 0x20 (0x20)
	int32_t BytesForCaching;  // 0x2C (0x2C)
	struct FRigVMByteCodeStatistics ByteCode;  // 0x30 (0x30)


}; 
 
 // ScriptStruct RigVM.RigVMDebugInfo
struct FRigVMDebugInfo
{
	char pad_0[248];  // 0x0 (0x0)


}; 
 
 // Function RigVM.RigVM.SetParameterValueFloat
struct FSetParameterValueFloat
{
	struct FName InParameterName;  // 0x0 (0x0)
	float InValue;  // 0x8 (0x8)
	int32_t InArrayIndex;  // 0xC (0xC)


}; 
 
 // ScriptStruct RigVM.RigVMBinaryOp
// Size: 0xE(Inherited: 0x1)
struct FRigVMBinaryOp : FRigVMBaseOp
{
	char pad_1[13];  // 0x1 (0x1)


}; 
 
 // ScriptStruct RigVM.RigVMParameter
struct FRigVMParameter
{
	uint8_t Type;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FName Name;  // 0x4 (0x4)
	int32_t RegisterIndex;  // 0xC (0xC)
	struct FString CPPType;  // 0x10 (0x10)
	struct UScriptStruct* ScriptStruct;  // 0x20 (0x20)
	struct FName ScriptStructPath;  // 0x28 (0x28)


}; 
 
 // Function RigVM.RigVM.GetParameterValueVector2D
struct FGetParameterValueVector2D
{
	struct FName InParameterName;  // 0x0 (0x0)
	int32_t InArrayIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FVector2D ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct RigVM.RigVMSlice
struct FRigVMSlice
{
	char pad_0[12];  // 0x0 (0x0)


}; 
 
 // ScriptStruct RigVM.RigVMBaseOp
struct FRigVMBaseOp
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct RigVM.RigVMExecuteOp
// Size: 0x4(Inherited: 0x1)
struct FRigVMExecuteOp : FRigVMBaseOp
{
	char pad_1[3];  // 0x1 (0x1)


}; 
 
 // Function RigVM.RigVMUserWorkflowOptions.ReportWarning
struct FReportWarning
{
	struct FString InMessage;  // 0x0 (0x0)


}; 
 
 // ScriptStruct RigVM.RigVMTernaryOp
// Size: 0x14(Inherited: 0x1)
struct FRigVMTernaryOp : FRigVMBaseOp
{
	char pad_1[19];  // 0x1 (0x1)


}; 
 
 // ScriptStruct RigVM.RigVMQuinaryOp
// Size: 0x20(Inherited: 0x1)
struct FRigVMQuinaryOp : FRigVMBaseOp
{
	char pad_1[31];  // 0x1 (0x1)


}; 
 
 // ScriptStruct RigVM.RigVMCopyOp
// Size: 0x12(Inherited: 0x1)
struct FRigVMCopyOp : FRigVMBaseOp
{
	char pad_1[17];  // 0x1 (0x1)


}; 
 
 // Function RigVM.RigVM.GetParameterValueBool
struct FGetParameterValueBool
{
	struct FName InParameterName;  // 0x0 (0x0)
	int32_t InArrayIndex;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function RigVM.RigVM.AddRigVMFunction
struct FAddRigVMFunction
{
	struct UScriptStruct* InRigVMStruct;  // 0x0 (0x0)
	struct FName InMethodName;  // 0x8 (0x8)
	int32_t ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct RigVM.RigVMComparisonOp
// Size: 0x14(Inherited: 0x1)
struct FRigVMComparisonOp : FRigVMBaseOp
{
	char pad_1[19];  // 0x1 (0x1)


}; 
 
 // Function RigVM.RigVM.GetParameterValueQuat
struct FGetParameterValueQuat
{
	struct FName InParameterName;  // 0x0 (0x0)
	int32_t InArrayIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FQuat ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct RigVM.RigVMJumpOp
// Size: 0x8(Inherited: 0x1)
struct FRigVMJumpOp : FRigVMBaseOp
{
	char pad_1[7];  // 0x1 (0x1)


}; 
 
 // ScriptStruct RigVM.RigVMJumpIfOp
// Size: 0x10(Inherited: 0x8)
struct FRigVMJumpIfOp : FRigVMUnaryOp
{
	char pad_8[8];  // 0x8 (0x8)


}; 
 
 // Function RigVM.RigVM.SetParameterValueString
struct FSetParameterValueString
{
	struct FName InParameterName;  // 0x0 (0x0)
	struct FString InValue;  // 0x8 (0x8)
	int32_t InArrayIndex;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct RigVM.RigVMChangeTypeOp
// Size: 0x8(Inherited: 0x8)
struct FRigVMChangeTypeOp : FRigVMUnaryOp
{


}; 
 
 // Function RigVM.RigVM.GetParameterValueInt
struct FGetParameterValueInt
{
	struct FName InParameterName;  // 0x0 (0x0)
	int32_t InArrayIndex;  // 0x8 (0x8)
	int32_t ReturnValue;  // 0xC (0xC)


}; 
 
 // ScriptStruct RigVM.RigVMInvokeEntryOp
// Size: 0xC(Inherited: 0x1)
struct FRigVMInvokeEntryOp : FRigVMBaseOp
{
	char pad_1[11];  // 0x1 (0x1)


}; 
 
 // ScriptStruct RigVM.RigVMInstruction
struct FRigVMInstruction
{
	uint64_t ByteCodeIndex;  // 0x0 (0x0)
	uint8_t OpCode;  // 0x8 (0x8)
	char OperandAlignment;  // 0x9 (0x9)
	char pad_10[6];  // 0xA (0xA)


}; 
 
 // Function RigVM.RigVM.SetParameterValueName
struct FSetParameterValueName
{
	struct FName InParameterName;  // 0x0 (0x0)
	struct FName InValue;  // 0x8 (0x8)
	int32_t InArrayIndex;  // 0x10 (0x10)


}; 
 
 // ScriptStruct RigVM.RigVMInstructionArray
struct FRigVMInstructionArray
{
	struct TArray<struct FRigVMInstruction> Instructions;  // 0x0 (0x0)


}; 
 
 // ScriptStruct RigVM.RigVMByteCodeEntry
struct FRigVMByteCodeEntry
{
	struct FName Name;  // 0x0 (0x0)
	int32_t InstructionIndex;  // 0x8 (0x8)


}; 
 
 // ScriptStruct RigVM.RigVMByteCode
struct FRigVMByteCode
{
	struct TArray<char> ByteCode;  // 0x0 (0x0)
	int32_t NumInstructions;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct TArray<struct FRigVMByteCodeEntry> Entries;  // 0x18 (0x18)
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 // ScriptStruct RigVM.RigVMBreakpoint
struct FRigVMBreakpoint
{
	char pad_0[40];  // 0x0 (0x0)


}; 
 
 // Function RigVM.RigVMUserWorkflowOptions.ReportInfo
struct FReportInfo
{
	struct FString InMessage;  // 0x0 (0x0)


}; 
 
 // ScriptStruct RigVM.RigVMExtendedExecuteContext
struct FRigVMExtendedExecuteContext
{
	char pad_0[120];  // 0x0 (0x0)


}; 
 
 // ScriptStruct RigVM.RigVMOperand
struct FRigVMOperand
{
	uint8_t MemoryType;  // 0x0 (0x0)
	char pad_1[1];  // 0x1 (0x1)
	uint16_t RegisterIndex;  // 0x2 (0x2)
	uint16_t RegisterOffset;  // 0x4 (0x4)


}; 
 
 // Function RigVM.RigVM.GetParameterValueTransform
struct FGetParameterValueTransform
{
	struct FName InParameterName;  // 0x0 (0x0)
	int32_t InArrayIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct RigVM.RigVMRegister
struct FRigVMRegister
{
	uint8_t Type;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	uint32_t ByteIndex;  // 0x4 (0x4)
	uint16_t ElementSize;  // 0x8 (0x8)
	uint16_t ElementCount;  // 0xA (0xA)
	uint16_t SliceCount;  // 0xC (0xC)
	char AlignmentBytes;  // 0xE (0xE)
	char pad_15[1];  // 0xF (0xF)
	uint16_t TrailingBytes;  // 0x10 (0x10)
	char pad_18[2];  // 0x12 (0x12)
	struct FName Name;  // 0x14 (0x14)
	int32_t ScriptStructIndex;  // 0x1C (0x1C)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bIsArray : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool bIsDynamic : 1;  // 0x21 (0x21)
	char pad_34[2];  // 0x22 (0x22)


}; 
 
 // ScriptStruct RigVM.RigVMRegisterOffset
struct FRigVMRegisterOffset
{
	struct TArray<int32_t> Segments;  // 0x0 (0x0)
	uint8_t Type;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	struct FName CPPType;  // 0x14 (0x14)
	char pad_28[4];  // 0x1C (0x1C)
	struct UScriptStruct* ScriptStruct;  // 0x20 (0x20)
	struct UScriptStruct* ParentScriptStruct;  // 0x28 (0x28)
	int32_t ArrayIndex;  // 0x30 (0x30)
	uint16_t ElementSize;  // 0x34 (0x34)
	char pad_54[2];  // 0x36 (0x36)
	struct FString CachedSegmentPath;  // 0x38 (0x38)


}; 
 
 // Function RigVM.RigVM.SetParameterValueDouble
struct FSetParameterValueDouble
{
	struct FName InParameterName;  // 0x0 (0x0)
	double InValue;  // 0x8 (0x8)
	int32_t InArrayIndex;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct RigVM.RigVMMemoryContainer
struct FRigVMMemoryContainer
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bUseNameMap : 1;  // 0x0 (0x0)
	uint8_t MemoryType;  // 0x1 (0x1)
	char pad_2[6];  // 0x2 (0x2)
	struct TArray<struct FRigVMRegister> Registers;  // 0x8 (0x8)
	struct TArray<struct FRigVMRegisterOffset> RegisterOffsets;  // 0x18 (0x18)
	struct TArray<char> Data;  // 0x28 (0x28)
	struct TArray<struct UScriptStruct*> ScriptStructs;  // 0x38 (0x38)
	struct TMap<struct FName, int32_t> NameMap;  // 0x48 (0x48)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool bEncounteredErrorDuringLoad : 1;  // 0x98 (0x98)
	char pad_153[7];  // 0x99 (0x99)


}; 
 
 // Function RigVM.RigVM.GetRigVMFunctionName
struct FGetRigVMFunctionName
{
	int32_t InFunctionIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FString ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct RigVM.RigVMTemplateArgumentType
struct FRigVMTemplateArgumentType
{
	struct FName CPPType;  // 0x0 (0x0)
	struct UObject* CPPTypeObject;  // 0x8 (0x8)


}; 
 
 // ScriptStruct RigVM.RigVMUserWorkflow
struct FRigVMUserWorkflow
{
	char pad_0[8];  // 0x0 (0x0)
	struct FString Title;  // 0x8 (0x8)
	struct FString ToolTip;  // 0x18 (0x18)
	uint8_t Type;  // 0x28 (0x28)
	char pad_41[23];  // 0x29 (0x29)
	struct FDelegate PerformDynamicDelegate;  // 0x40 (0x40)
	 OptionsClass;  // 0x50 (0x50)


}; 
 
 // Function RigVM.RigVMUserWorkflowOptions.ReportError
struct FReportError
{
	struct FString InMessage;  // 0x0 (0x0)


}; 
 
 // Function RigVM.RigVM.GetParameterValueDouble
struct FGetParameterValueDouble
{
	struct FName InParameterName;  // 0x0 (0x0)
	int32_t InArrayIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	double ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function RigVM.RigVM.GetParameterValueFloat
struct FGetParameterValueFloat
{
	struct FName InParameterName;  // 0x0 (0x0)
	int32_t InArrayIndex;  // 0x8 (0x8)
	float ReturnValue;  // 0xC (0xC)


}; 
 
 // Function RigVM.RigVM.GetParameterValueName
struct FGetParameterValueName
{
	struct FName InParameterName;  // 0x0 (0x0)
	int32_t InArrayIndex;  // 0x8 (0x8)
	struct FName ReturnValue;  // 0xC (0xC)


}; 
 
 // Function RigVM.RigVM.GetParameterValueString
struct FGetParameterValueString
{
	struct FName InParameterName;  // 0x0 (0x0)
	int32_t InArrayIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FString ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function RigVM.RigVM.GetParameterValueVector
struct FGetParameterValueVector
{
	struct FName InParameterName;  // 0x0 (0x0)
	int32_t InArrayIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FVector ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function RigVM.RigVM.GetStatistics
struct FGetStatistics
{
	struct FRigVMStatistics ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function RigVM.RigVM.SetParameterValueBool
struct FSetParameterValueBool
{
	struct FName InParameterName;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool InValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	int32_t InArrayIndex;  // 0xC (0xC)


}; 
 
 // Function RigVM.RigVM.SetParameterValueQuat
struct FSetParameterValueQuat
{
	struct FName InParameterName;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FQuat InValue;  // 0x10 (0x10)
	int32_t InArrayIndex;  // 0x30 (0x30)
	char pad_52[12];  // 0x34 (0x34)


}; 
 
 // Function RigVM.RigVM.SetParameterValueInt
struct FSetParameterValueInt
{
	struct FName InParameterName;  // 0x0 (0x0)
	int32_t InValue;  // 0x8 (0x8)
	int32_t InArrayIndex;  // 0xC (0xC)


}; 
 
 // Function RigVM.RigVM.SetParameterValueTransform
struct FSetParameterValueTransform
{
	struct FName InParameterName;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform InValue;  // 0x10 (0x10)
	int32_t InArrayIndex;  // 0x70 (0x70)
	char pad_116[12];  // 0x74 (0x74)


}; 
 
 // Function RigVM.RigVM.SetParameterValueVector
struct FSetParameterValueVector
{
	struct FName InParameterName;  // 0x0 (0x0)
	struct FVector InValue;  // 0x8 (0x8)
	int32_t InArrayIndex;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function RigVM.RigVM.SetParameterValueVector2D
struct FSetParameterValueVector2D
{
	struct FName InParameterName;  // 0x0 (0x0)
	struct FVector2D InValue;  // 0x8 (0x8)
	int32_t InArrayIndex;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 