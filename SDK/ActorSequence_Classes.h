#pragma once 
#include <ActorSequence_Structs.h>
 
 
 
// Class ActorSequence.ActorSequence
// Size: 0x90(Inherited: 0x68)
struct UActorSequence : UMovieSceneSequence
{
	struct UMovieScene* MovieScene;  // 0x68 (0x68)
	struct FActorSequenceObjectReferenceMap ObjectReferences;  // 0x70 (0x70)


}; 
 
 


// Class ActorSequence.ActorSequenceComponent
// Size: 0xD0(Inherited: 0xA0)
struct UActorSequenceComponent : UActorComponent
{
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings;  // 0xA0 (0xA0)
	struct UActorSequence* Sequence;  // 0xC0 (0xC0)
	struct UActorSequencePlayer* SequencePlayer;  // 0xC8 (0xC8)


	void StopSequence(); // Function ActorSequence.ActorSequenceComponent.StopSequence
	void PlaySequence(); // Function ActorSequence.ActorSequenceComponent.PlaySequence
	void PauseSequence(); // Function ActorSequence.ActorSequenceComponent.PauseSequence
}; 
 
 


// Class ActorSequence.ActorSequencePlayer
// Size: 0x4A8(Inherited: 0x4A8)
struct UActorSequencePlayer : UMovieSceneSequencePlayer
{


}; 
 
 


