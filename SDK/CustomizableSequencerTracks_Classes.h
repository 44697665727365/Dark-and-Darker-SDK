#pragma once 
#include <CustomizableSequencerTracks_Structs.h>
 
 
 
// Class CustomizableSequencerTracks.SequencerSectionBP
// Size: 0xF8(Inherited: 0xF0)
struct USequencerSectionBP : UMovieSceneSection
{
	char pad_240[8];  // 0xF0 (0xF0)


}; 
 
 


// Class CustomizableSequencerTracks.SequencerTrackBP
// Size: 0x1B0(Inherited: 0x98)
struct USequencerTrackBP : UMovieSceneNameableTrack
{
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool bSupportsMultipleRows : 1;  // 0x98 (0x98)
	char pad_153_1 : 7;  // 0x99 (0x99)
	bool bSupportsBlending : 1;  // 0x99 (0x99)
	char pad_154[2];  // 0x9A (0x9A)
	uint8_t TrackType;  // 0x9C (0x9C)
	 SupportedObjectType;  // 0xA0 (0xA0)
	USequencerSectionBP* DefaultSectionType;  // 0xA8 (0xA8)
	struct TArray<USequencerSectionBP*> SupportedSections;  // 0xB0 (0xB0)
	USequencerTrackInstanceBP* TrackInstanceType;  // 0xC0 (0xC0)
	char pad_200[8];  // 0xC8 (0xC8)
	struct FSlateBrush Icon;  // 0xD0 (0xD0)
	struct TArray<struct UMovieSceneSection*> Sections;  // 0x1A0 (0x1A0)


}; 
 
 


// Class CustomizableSequencerTracks.SequencerTrackInstanceBP
// Size: 0x50(Inherited: 0x50)
struct USequencerTrackInstanceBP : UMovieSceneTrackInstance
{


	void K2_OnUpdate(); // Function CustomizableSequencerTracks.SequencerTrackInstanceBP.K2_OnUpdate
	void K2_OnInputRemoved(struct FSequencerTrackInstanceInput Input); // Function CustomizableSequencerTracks.SequencerTrackInstanceBP.K2_OnInputRemoved
	void K2_OnInputAdded(struct FSequencerTrackInstanceInput Input); // Function CustomizableSequencerTracks.SequencerTrackInstanceBP.K2_OnInputAdded
	void K2_OnInitialize(); // Function CustomizableSequencerTracks.SequencerTrackInstanceBP.K2_OnInitialize
	void K2_OnEndUpdateInputs(); // Function CustomizableSequencerTracks.SequencerTrackInstanceBP.K2_OnEndUpdateInputs
	void K2_OnDestroyed(); // Function CustomizableSequencerTracks.SequencerTrackInstanceBP.K2_OnDestroyed
	void K2_OnBeginUpdateInputs(); // Function CustomizableSequencerTracks.SequencerTrackInstanceBP.K2_OnBeginUpdateInputs
	int32_t GetNumInputs(); // Function CustomizableSequencerTracks.SequencerTrackInstanceBP.GetNumInputs
	struct TArray<struct FSequencerTrackInstanceInput> GetInputs(); // Function CustomizableSequencerTracks.SequencerTrackInstanceBP.GetInputs
	struct FSequencerTrackInstanceInput GetInput(int32_t Index); // Function CustomizableSequencerTracks.SequencerTrackInstanceBP.GetInput
	struct UObject* GetAnimatedObject(); // Function CustomizableSequencerTracks.SequencerTrackInstanceBP.GetAnimatedObject
}; 
 
 


