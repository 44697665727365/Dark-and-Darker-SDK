#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function CustomizableSequencerTracks.SequencerTrackInstanceBP.K2_OnInputAdded
struct FK2_OnInputAdded
{
	struct FSequencerTrackInstanceInput Input;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CustomizableSequencerTracks.SequencerTrackInstanceInput
struct FSequencerTrackInstanceInput
{
	struct USequencerSectionBP* Section;  // 0x0 (0x0)
	char pad_8[104];  // 0x8 (0x8)


}; 
 
 // Function CustomizableSequencerTracks.SequencerTrackInstanceBP.GetAnimatedObject
struct FGetAnimatedObject
{
	struct UObject* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CustomizableSequencerTracks.SequencerTrackInstanceBP.GetInput
struct FGetInput
{
	int32_t Index;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FSequencerTrackInstanceInput ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function CustomizableSequencerTracks.SequencerTrackInstanceBP.GetInputs
struct FGetInputs
{
	struct TArray<struct FSequencerTrackInstanceInput> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CustomizableSequencerTracks.SequencerTrackInstanceBP.K2_OnInputRemoved
struct FK2_OnInputRemoved
{
	struct FSequencerTrackInstanceInput Input;  // 0x0 (0x0)


}; 
 
 // Function CustomizableSequencerTracks.SequencerTrackInstanceBP.GetNumInputs
struct FGetNumInputs
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 