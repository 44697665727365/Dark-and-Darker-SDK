#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function AndroidFileServer.AndroidFileServerBPLibrary.IsFileServerRunning
struct FIsFileServerRunning
{
	enum class EAFSActiveType ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function AndroidFileServer.AndroidFileServerBPLibrary.StartFileServer
struct FStartFileServer
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bUSB : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bNetwork : 1;  // 0x1 (0x1)
	char pad_2[2];  // 0x2 (0x2)
	int32_t Port;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function AndroidFileServer.AndroidFileServerBPLibrary.StopFileServer
struct FStopFileServer
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bUSB : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bNetwork : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool ReturnValue : 1;  // 0x2 (0x2)


}; 
 
 