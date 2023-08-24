#include "pch.h"
#include "SDK.h"

bool UAndroidFileServerBPLibrary::StopFileServer(bool bUSB, bool bNetwork){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AndroidFileServer.AndroidFileServerBPLibrary.StopFileServer");

	FStopFileServer parms{};	
	parms.bUSB = bUSB;
	parms.bNetwork = bNetwork;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAndroidFileServerBPLibrary::StartFileServer(bool bUSB, bool bNetwork, int32_t Port){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AndroidFileServer.AndroidFileServerBPLibrary.StartFileServer");

	FStartFileServer parms{};	
	parms.bUSB = bUSB;
	parms.bNetwork = bNetwork;
	parms.Port = Port;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class EAFSActiveType UAndroidFileServerBPLibrary::IsFileServerRunning(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AndroidFileServer.AndroidFileServerBPLibrary.IsFileServerRunning");

	FIsFileServerRunning parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

