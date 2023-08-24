#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct MetasoundFrontend.MetasoundFrontendVersionNumber
struct FMetasoundFrontendVersionNumber
{
	int32_t Major;  // 0x0 (0x0)
	int32_t Minor;  // 0x4 (0x4)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendVertex
struct FMetasoundFrontendVertex
{
	struct FName Name;  // 0x0 (0x0)
	struct FName TypeName;  // 0x8 (0x8)
	struct FGuid VertexID;  // 0x10 (0x10)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendVersion
struct FMetasoundFrontendVersion
{
	struct FName Name;  // 0x0 (0x0)
	struct FMetasoundFrontendVersionNumber Number;  // 0x8 (0x8)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendClassStyleDisplay
struct FMetasoundFrontendClassStyleDisplay
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendVertexLiteral
struct FMetasoundFrontendVertexLiteral
{
	struct FGuid VertexID;  // 0x0 (0x0)
	struct FMetasoundFrontendLiteral Value;  // 0x10 (0x10)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendGraphStyle
struct FMetasoundFrontendGraphStyle
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsGraphEditable : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct FMetasoundFrontendEdgeStyle> EdgeStyles;  // 0x8 (0x8)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendNodeStyleDisplay
struct FMetasoundFrontendNodeStyleDisplay
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendNodeInterface
struct FMetasoundFrontendNodeInterface
{
	struct TArray<struct FMetasoundFrontendVertex> Inputs;  // 0x0 (0x0)
	struct TArray<struct FMetasoundFrontendVertex> Outputs;  // 0x10 (0x10)
	struct TArray<struct FMetasoundFrontendVertex> Environment;  // 0x20 (0x20)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendLiteral
struct FMetasoundFrontendLiteral
{
	uint8_t Type;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t AsNumDefault;  // 0x4 (0x4)
	struct TArray<bool> AsBoolean;  // 0x8 (0x8)
	struct TArray<int32_t> AsInteger;  // 0x18 (0x18)
	struct TArray<float> AsFloat;  // 0x28 (0x28)
	struct TArray<struct FString> AsString;  // 0x38 (0x38)
	struct TArray<struct UObject*> AsUObject;  // 0x48 (0x48)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendClassVertex
// Size: 0x34(Inherited: 0x20)
struct FMetasoundFrontendClassVertex : FMetasoundFrontendVertex
{
	struct FGuid NodeID;  // 0x20 (0x20)
	uint8_t AccessType;  // 0x30 (0x30)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendVariable
struct FMetasoundFrontendVariable
{
	struct FName Name;  // 0x0 (0x0)
	struct FName TypeName;  // 0x8 (0x8)
	struct FMetasoundFrontendLiteral Literal;  // 0x10 (0x10)
	struct FGuid ID;  // 0x68 (0x68)
	struct FGuid VariableNodeID;  // 0x78 (0x78)
	struct FGuid MutatorNodeID;  // 0x88 (0x88)
	struct TArray<struct FGuid> AccessorNodeIDs;  // 0x98 (0x98)
	struct TArray<struct FGuid> DeferredAccessorNodeIDs;  // 0xA8 (0xA8)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendNodeStyle
struct FMetasoundFrontendNodeStyle
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendGraphClass
// Size: 0x118(Inherited: 0x90)
struct FMetasoundFrontendGraphClass : FMetasoundFrontendClass
{
	struct FMetasoundFrontendGraph Graph;  // 0x90 (0x90)
	struct FMetasoundFrontendGraphClassPresetOptions PresetOptions;  // 0xC0 (0xC0)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendEdgeStyle
struct FMetasoundFrontendEdgeStyle
{
	struct FGuid NodeID;  // 0x0 (0x0)
	struct FName OutputName;  // 0x10 (0x10)
	struct TArray<struct FMetasoundFrontendEdgeStyleLiteralColorPair> LiteralColorPairs;  // 0x18 (0x18)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendNode
struct FMetasoundFrontendNode
{
	struct FGuid ID;  // 0x0 (0x0)
	struct FGuid ClassID;  // 0x10 (0x10)
	struct FName Name;  // 0x20 (0x20)
	struct FMetasoundFrontendNodeInterface Interface;  // 0x28 (0x28)
	struct TArray<struct FMetasoundFrontendVertexLiteral> InputLiterals;  // 0x58 (0x58)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendDocument
struct FMetasoundFrontendDocument
{
	char pad_0[16];  // 0x0 (0x0)
	struct FMetasoundFrontendDocumentMetadata MetaData;  // 0x10 (0x10)
	struct TSet<struct FMetasoundFrontendVersion> Interfaces;  // 0x20 (0x20)
	struct FMetasoundFrontendGraphClass RootGraph;  // 0x70 (0x70)
	struct TArray<struct FMetasoundFrontendGraphClass> Subgraphs;  // 0x188 (0x188)
	struct TArray<struct FMetasoundFrontendClass> Dependencies;  // 0x198 (0x198)
	struct FMetasoundFrontendVersion ArchetypeVersion;  // 0x1A8 (0x1A8)
	struct TArray<struct FMetasoundFrontendVersion> InterfaceVersions;  // 0x1B8 (0x1B8)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendEdge
struct FMetasoundFrontendEdge
{
	struct FGuid FromNodeID;  // 0x0 (0x0)
	struct FGuid FromVertexID;  // 0x10 (0x10)
	struct FGuid ToNodeID;  // 0x20 (0x20)
	struct FGuid ToVertexID;  // 0x30 (0x30)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendEdgeStyleLiteralColorPair
struct FMetasoundFrontendEdgeStyleLiteralColorPair
{
	struct FMetasoundFrontendLiteral Value;  // 0x0 (0x0)
	struct FLinearColor Color;  // 0x58 (0x58)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendGraph
struct FMetasoundFrontendGraph
{
	struct TArray<struct FMetasoundFrontendNode> Nodes;  // 0x0 (0x0)
	struct TArray<struct FMetasoundFrontendEdge> Edges;  // 0x10 (0x10)
	struct TArray<struct FMetasoundFrontendVariable> Variables;  // 0x20 (0x20)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendVertexMetadata
struct FMetasoundFrontendVertexMetadata
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendClassInput
// Size: 0x90(Inherited: 0x34)
struct FMetasoundFrontendClassInput : FMetasoundFrontendClassVertex
{
	char pad_52[4];  // 0x34 (0x34)
	struct FMetasoundFrontendLiteral DefaultLiteral;  // 0x38 (0x38)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendClassVariable
// Size: 0x90(Inherited: 0x34)
struct FMetasoundFrontendClassVariable : FMetasoundFrontendClassVertex
{
	char pad_52[4];  // 0x34 (0x34)
	struct FMetasoundFrontendLiteral DefaultLiteral;  // 0x38 (0x38)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendClassOutput
// Size: 0x34(Inherited: 0x34)
struct FMetasoundFrontendClassOutput : FMetasoundFrontendClassVertex
{


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendClassEnvironmentVariable
struct FMetasoundFrontendClassEnvironmentVariable
{
	struct FName Name;  // 0x0 (0x0)
	struct FName TypeName;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bIsRequired : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendInterfaceStyle
struct FMetasoundFrontendInterfaceStyle
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendClassInterface
struct FMetasoundFrontendClassInterface
{
	struct TArray<struct FMetasoundFrontendClassInput> Inputs;  // 0x0 (0x0)
	struct TArray<struct FMetasoundFrontendClassOutput> Outputs;  // 0x10 (0x10)
	struct TArray<struct FMetasoundFrontendClassEnvironmentVariable> Environment;  // 0x20 (0x20)
	struct FGuid ChangeID;  // 0x30 (0x30)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendInterface
// Size: 0x50(Inherited: 0x40)
struct FMetasoundFrontendInterface : FMetasoundFrontendClassInterface
{
	struct FMetasoundFrontendVersion Version;  // 0x40 (0x40)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendClassName
struct FMetasoundFrontendClassName
{
	struct FName Namespace;  // 0x0 (0x0)
	struct FName Name;  // 0x8 (0x8)
	struct FName Variant;  // 0x10 (0x10)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendClassMetadata
struct FMetasoundFrontendClassMetadata
{
	struct FMetasoundFrontendClassName ClassName;  // 0x0 (0x0)
	struct FMetasoundFrontendVersionNumber Version;  // 0x18 (0x18)
	uint8_t Type;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool bIsDeprecated : 1;  // 0x21 (0x21)
	char pad_34_1 : 7;  // 0x22 (0x22)
	bool bAutoUpdateManagesInterface : 1;  // 0x22 (0x22)
	char pad_35[1];  // 0x23 (0x23)
	struct FGuid ChangeID;  // 0x24 (0x24)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendClassStyle
struct FMetasoundFrontendClassStyle
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendClass
struct FMetasoundFrontendClass
{
	char pad_0[8];  // 0x0 (0x0)
	struct FGuid ID;  // 0x8 (0x8)
	struct FMetasoundFrontendClassMetadata MetaData;  // 0x18 (0x18)
	char pad_76[4];  // 0x4C (0x4C)
	struct FMetasoundFrontendClassInterface Interface;  // 0x50 (0x50)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendGraphClassPresetOptions
struct FMetasoundFrontendGraphClassPresetOptions
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsPreset : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TSet<struct FName> InputsInheritingDefault;  // 0x8 (0x8)


}; 
 
 // ScriptStruct MetasoundFrontend.MetasoundFrontendDocumentMetadata
struct FMetasoundFrontendDocumentMetadata
{
	struct FMetasoundFrontendVersion Version;  // 0x0 (0x0)


}; 
 
 