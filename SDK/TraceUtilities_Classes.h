#pragma once 
#include <TraceUtilities_Structs.h>
 
 
 
// Class TraceUtilities.TraceUtilLibrary
// Size: 0x28(Inherited: 0x28)
struct UTraceUtilLibrary : UBlueprintFunctionLibrary
{


	void TraceMarkRegionStart(struct FString Name); // Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionStart
	void TraceMarkRegionEnd(struct FString Name); // Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionEnd
	void TraceBookmark(struct FString Name); // Function TraceUtilities.TraceUtilLibrary.TraceBookmark
	bool ToggleChannel(struct FString ChannelName, bool Enabled); // Function TraceUtilities.TraceUtilLibrary.ToggleChannel
	bool StopTracing(); // Function TraceUtilities.TraceUtilLibrary.StopTracing
	bool StartTraceToFile(struct FString Filename, struct TArray<struct FString>& Channels); // Function TraceUtilities.TraceUtilLibrary.StartTraceToFile
	bool StartTraceSendTo(struct FString Target, struct TArray<struct FString>& Channels); // Function TraceUtilities.TraceUtilLibrary.StartTraceSendTo
	bool ResumeTracing(); // Function TraceUtilities.TraceUtilLibrary.ResumeTracing
	bool PauseTracing(); // Function TraceUtilities.TraceUtilLibrary.PauseTracing
	bool IsTracing(); // Function TraceUtilities.TraceUtilLibrary.IsTracing
	bool IsChannelEnabled(struct FString ChannelName); // Function TraceUtilities.TraceUtilLibrary.IsChannelEnabled
	struct TArray<struct FString> GetEnabledChannels(); // Function TraceUtilities.TraceUtilLibrary.GetEnabledChannels
	struct TArray<struct FString> GetAllChannels(); // Function TraceUtilities.TraceUtilLibrary.GetAllChannels
}; 
 
 


