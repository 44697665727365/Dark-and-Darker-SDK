#pragma once 
#include <AndroidPermission_Structs.h>
 
 
 
// Class AndroidPermission.AndroidPermissionCallbackProxy
// Size: 0x50(Inherited: 0x28)
struct UAndroidPermissionCallbackProxy : UObject
{
	struct FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate;  // 0x28 (0x28)
	char pad_56[24];  // 0x38 (0x38)


}; 
 
 


// Class AndroidPermission.AndroidPermissionFunctionLibrary
// Size: 0x28(Inherited: 0x28)
struct UAndroidPermissionFunctionLibrary : UBlueprintFunctionLibrary
{


	bool CheckPermission(struct FString permission); // Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
	struct UAndroidPermissionCallbackProxy* AcquirePermissions(struct TArray<struct FString>& Permissions); // Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
}; 
 
 


