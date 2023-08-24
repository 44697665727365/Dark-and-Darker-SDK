#include "pch.h"
#include "SDK.h"

void UAutomationUtilsBlueprintLibrary::TakeGameplayAutomationScreenshot(struct FString ScreenshotName, float MaxGlobalError, float MaxLocalError, struct FString MapNameOverride){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot");

	FTakeGameplayAutomationScreenshot parms{};	
	parms.ScreenshotName = ScreenshotName;
	parms.MaxGlobalError = MaxGlobalError;
	parms.MaxLocalError = MaxLocalError;
	parms.MapNameOverride = MapNameOverride;

	ProcessEvent(fn, &parms);
}

