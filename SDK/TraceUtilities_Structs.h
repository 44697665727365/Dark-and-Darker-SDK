#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function TraceUtilities.TraceUtilLibrary.GetAllChannels
struct FGetAllChannels
{
	struct TArray<struct FString> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function TraceUtilities.TraceUtilLibrary.GetEnabledChannels
struct FGetEnabledChannels
{
	struct TArray<struct FString> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function TraceUtilities.TraceUtilLibrary.IsChannelEnabled
struct FIsChannelEnabled
{
	struct FString ChannelName;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function TraceUtilities.TraceUtilLibrary.PauseTracing
struct FPauseTracing
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function TraceUtilities.TraceUtilLibrary.IsTracing
struct FIsTracing
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function TraceUtilities.TraceUtilLibrary.ResumeTracing
struct FResumeTracing
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function TraceUtilities.TraceUtilLibrary.StartTraceSendTo
struct FStartTraceSendTo
{
	struct FString Target;  // 0x0 (0x0)
	struct TArray<struct FString> Channels;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function TraceUtilities.TraceUtilLibrary.StartTraceToFile
struct FStartTraceToFile
{
	struct FString Filename;  // 0x0 (0x0)
	struct TArray<struct FString> Channels;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function TraceUtilities.TraceUtilLibrary.StopTracing
struct FStopTracing
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function TraceUtilities.TraceUtilLibrary.ToggleChannel
struct FToggleChannel
{
	struct FString ChannelName;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool Enabled : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool ReturnValue : 1;  // 0x11 (0x11)
	char pad_18[6];  // 0x12 (0x12)


}; 
 
 // Function TraceUtilities.TraceUtilLibrary.TraceBookmark
struct FTraceBookmark
{
	struct FString Name;  // 0x0 (0x0)


}; 
 
 // Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionEnd
struct FTraceMarkRegionEnd
{
	struct FString Name;  // 0x0 (0x0)


}; 
 
 // Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionStart
struct FTraceMarkRegionStart
{
	struct FString Name;  // 0x0 (0x0)


}; 
 
 