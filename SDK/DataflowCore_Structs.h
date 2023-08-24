#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct DataflowCore.DataflowNode
struct FDataflowNode
{
	char pad_0[200];  // 0x0 (0x0)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool bActive : 1;  // 0xC8 (0xC8)
	char pad_201[7];  // 0xC9 (0xC9)


}; 
 
 // ScriptStruct DataflowCore.DataflowConnection
struct FDataflowConnection
{
	char pad_0[64];  // 0x0 (0x0)


}; 
 
 // ScriptStruct DataflowCore.DataflowInput
// Size: 0x48(Inherited: 0x40)
struct FDataflowInput : FDataflowConnection
{
	char pad_64[8];  // 0x40 (0x40)


}; 
 
 // ScriptStruct DataflowCore.DataflowOutput
// Size: 0x68(Inherited: 0x40)
struct FDataflowOutput : FDataflowConnection
{
	char pad_64[40];  // 0x40 (0x40)


}; 
 
 