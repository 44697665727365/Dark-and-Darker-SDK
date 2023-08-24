#pragma once 
#include <AndroidFileServer_Structs.h>
 
 
 
// Class AndroidFileServer.AndroidFileServerBPLibrary
// Size: 0x28(Inherited: 0x28)
struct UAndroidFileServerBPLibrary : UBlueprintFunctionLibrary
{


	bool StopFileServer(bool bUSB, bool bNetwork); // Function AndroidFileServer.AndroidFileServerBPLibrary.StopFileServer
	bool StartFileServer(bool bUSB, bool bNetwork, int32_t Port); // Function AndroidFileServer.AndroidFileServerBPLibrary.StartFileServer
	enum class EAFSActiveType IsFileServerRunning(); // Function AndroidFileServer.AndroidFileServerBPLibrary.IsFileServerRunning
}; 
 
 


