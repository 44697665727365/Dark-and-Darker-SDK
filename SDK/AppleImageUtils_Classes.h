#pragma once 
#include <AppleImageUtils_Structs.h>
 
 
 
// Class AppleImageUtils.AppleImageInterface
// Size: 0x28(Inherited: 0x28)
struct UAppleImageInterface : UInterface
{


}; 
 
 


// Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
// Size: 0x88(Inherited: 0x28)
struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct FMulticastInlineDelegate OnSuccess;  // 0x30 (0x30)
	struct FMulticastInlineDelegate OnFailure;  // 0x40 (0x40)
	char pad_80[16];  // 0x50 (0x50)
	struct FAppleImageUtilsImageConversionResult ConversionResult;  // 0x60 (0x60)
	char pad_128[8];  // 0x80 (0x80)


	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(struct UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, uint8_t Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(struct UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, uint8_t Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(struct UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, uint8_t Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(struct UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, uint8_t Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF
}; 
 
 


