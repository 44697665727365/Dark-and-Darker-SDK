#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
struct FCheckPermission
{
	struct FString permission;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // DelegateFunction AndroidPermission.AndroidPermissionDynamicDelegate__DelegateSignature
struct FAndroidPermissionDynamicDelegate__DelegateSignature
{
	struct TArray<struct FString> Permissions;  // 0x0 (0x0)
	struct TArray<bool> GrantResults;  // 0x10 (0x10)


}; 
 
 // Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
struct FAcquirePermissions
{
	struct TArray<struct FString> Permissions;  // 0x0 (0x0)
	struct UAndroidPermissionCallbackProxy* ReturnValue;  // 0x10 (0x10)


}; 
 
 