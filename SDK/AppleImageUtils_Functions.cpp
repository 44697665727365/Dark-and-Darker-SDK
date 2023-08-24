#include "pch.h"
#include "SDK.h"

struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToTIFF(struct UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, uint8_t Rotate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF");

	FCreateProxyObjectForConvertToTIFF parms{};	
	parms.SourceImage = SourceImage;
	parms.bWantColor = bWantColor;
	parms.bUseGpu = bUseGpu;
	parms.Scale = Scale;
	parms.Rotate = Rotate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToPNG(struct UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, uint8_t Rotate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG");

	FCreateProxyObjectForConvertToPNG parms{};	
	parms.SourceImage = SourceImage;
	parms.bWantColor = bWantColor;
	parms.bUseGpu = bUseGpu;
	parms.Scale = Scale;
	parms.Rotate = Rotate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToJPEG(struct UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, uint8_t Rotate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG");

	FCreateProxyObjectForConvertToJPEG parms{};	
	parms.SourceImage = SourceImage;
	parms.Quality = Quality;
	parms.bWantColor = bWantColor;
	parms.bUseGpu = bUseGpu;
	parms.Scale = Scale;
	parms.Rotate = Rotate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::CreateProxyObjectForConvertToHEIF(struct UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, uint8_t Rotate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF");

	FCreateProxyObjectForConvertToHEIF parms{};	
	parms.SourceImage = SourceImage;
	parms.Quality = Quality;
	parms.bWantColor = bWantColor;
	parms.bUseGpu = bUseGpu;
	parms.Scale = Scale;
	parms.Rotate = Rotate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

