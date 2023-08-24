#include "pch.h"
#include "SDK.h"

bool UAndroidPermissionFunctionLibrary::CheckPermission(struct FString permission){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission");

	FCheckPermission parms{};	
	parms.permission = permission;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAndroidPermissionCallbackProxy* UAndroidPermissionFunctionLibrary::AcquirePermissions(struct TArray<struct FString>& Permissions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions");

	FAcquirePermissions parms{};	
	parms.Permissions = Permissions;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

