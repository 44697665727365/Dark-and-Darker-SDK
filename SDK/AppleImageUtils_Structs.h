#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF
struct FCreateProxyObjectForConvertToTIFF
{
	struct UTexture* SourceImage;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bWantColor : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool bUseGpu : 1;  // 0x9 (0x9)
	char pad_10[2];  // 0xA (0xA)
	float Scale;  // 0xC (0xC)
	uint8_t Rotate;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;  // 0x18 (0x18)


}; 
 
 // DelegateFunction AppleImageUtils.AppleImageConversionDelegate__DelegateSignature
struct FAppleImageConversionDelegate__DelegateSignature
{
	struct FAppleImageUtilsImageConversionResult ConversionResult;  // 0x0 (0x0)


}; 
 
 // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF
struct FCreateProxyObjectForConvertToHEIF
{
	struct UTexture* SourceImage;  // 0x0 (0x0)
	int32_t Quality;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bWantColor : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool bUseGpu : 1;  // 0xD (0xD)
	char pad_14[2];  // 0xE (0xE)
	float Scale;  // 0x10 (0x10)
	uint8_t Rotate;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct AppleImageUtils.AppleImageUtilsImageConversionResult
struct FAppleImageUtilsImageConversionResult
{
	struct FString Error;  // 0x0 (0x0)
	struct TArray<char> ImageData;  // 0x10 (0x10)


}; 
 
 // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG
struct FCreateProxyObjectForConvertToJPEG
{
	struct UTexture* SourceImage;  // 0x0 (0x0)
	int32_t Quality;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bWantColor : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool bUseGpu : 1;  // 0xD (0xD)
	char pad_14[2];  // 0xE (0xE)
	float Scale;  // 0x10 (0x10)
	uint8_t Rotate;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG
struct FCreateProxyObjectForConvertToPNG
{
	struct UTexture* SourceImage;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bWantColor : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool bUseGpu : 1;  // 0x9 (0x9)
	char pad_10[2];  // 0xA (0xA)
	float Scale;  // 0xC (0xC)
	uint8_t Rotate;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;  // 0x18 (0x18)


}; 
 
 