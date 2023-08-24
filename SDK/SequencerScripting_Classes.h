#pragma once 
#include <SequencerScripting_Structs.h>
 
 
 
// Class SequencerScripting.MovieSceneScriptingStringChannel
// Size: 0x60(Inherited: 0x30)
struct UMovieSceneScriptingStringChannel : UMovieSceneScriptingChannel
{
	char pad_48[48];  // 0x30 (0x30)


	void SetDefault(struct FString InDefaultValue); // Function SequencerScripting.MovieSceneScriptingStringChannel.SetDefault
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys
	struct FString GetDefault(); // Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault
	struct UMovieSceneScriptingStringKey* AddKey(struct FFrameNumber& InTime, struct FString NewValue, float SubFrame, uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingStringChannel.AddKey
}; 
 
 


// Class SequencerScripting.MovieSceneScriptingDoubleChannel
// Size: 0x60(Inherited: 0x30)
struct UMovieSceneScriptingDoubleChannel : UMovieSceneScriptingChannel
{
	char pad_48[48];  // 0x30 (0x30)


	void SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPreInfinityExtrapolation
	void SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPostInfinityExtrapolation
	void SetDefault(double InDefaultValue); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetDefault
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveKey
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveDefault
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.HasDefault
	enum class ERichCurveExtrapolation GetPreInfinityExtrapolation(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPreInfinityExtrapolation
	enum class ERichCurveExtrapolation GetPostInfinityExtrapolation(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPostInfinityExtrapolation
	int32_t GetNumKeys(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetNumKeys
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeys
	double GetDefault(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetDefault
	struct TArray<double> EvaluateKeys(struct FSequencerScriptingRange Range, struct FFrameRate FrameRate); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.EvaluateKeys
	struct FSequencerScriptingRange ComputeEffectiveRange(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.ComputeEffectiveRange
	struct UMovieSceneScriptingDoubleKey* AddKey(struct FFrameNumber& InTime, double NewValue, float SubFrame, uint8_t TimeUnit, uint8_t InInterpolation); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.AddKey
}; 
 
 


// Class SequencerScripting.MovieSceneScriptingChannel
// Size: 0x30(Inherited: 0x28)
struct UMovieSceneScriptingChannel : UObject
{
	struct FName ChannelName;  // 0x28 (0x28)


}; 
 
 


// Class SequencerScripting.MovieSceneScriptingKey
// Size: 0x40(Inherited: 0x28)
struct UMovieSceneScriptingKey : UObject
{
	char pad_40[24];  // 0x28 (0x28)


}; 
 
 


// Class SequencerScripting.MovieSceneScriptingActorReferenceKey
// Size: 0x60(Inherited: 0x40)
struct UMovieSceneScriptingActorReferenceKey : UMovieSceneScriptingKey
{
	char pad_64[32];  // 0x40 (0x40)


	void SetValue(struct FMovieSceneObjectBindingID& InNewValue); // Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime
	struct FMovieSceneObjectBindingID GetValue(); // Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue
	struct FFrameTime GetTime(uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime
}; 
 
 


// Class SequencerScripting.MovieSceneScriptingByteKey
// Size: 0x60(Inherited: 0x40)
struct UMovieSceneScriptingByteKey : UMovieSceneScriptingKey
{
	char pad_64[32];  // 0x40 (0x40)


	void SetValue(char InNewValue); // Function SequencerScripting.MovieSceneScriptingByteKey.SetValue
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingByteKey.SetTime
	char GetValue(); // Function SequencerScripting.MovieSceneScriptingByteKey.GetValue
	struct FFrameTime GetTime(uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingByteKey.GetTime
}; 
 
 


// Class SequencerScripting.MovieSceneScriptingActorReferenceChannel
// Size: 0x60(Inherited: 0x30)
struct UMovieSceneScriptingActorReferenceChannel : UMovieSceneScriptingChannel
{
	char pad_48[48];  // 0x30 (0x30)


	void SetDefault(struct FMovieSceneObjectBindingID InDefaultValue); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys
	struct FMovieSceneObjectBindingID GetDefault(); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault
	struct UMovieSceneScriptingActorReferenceKey* AddKey(struct FFrameNumber InTime, struct FMovieSceneObjectBindingID NewValue, float SubFrame, uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey
}; 
 
 


// Class SequencerScripting.MovieSceneScriptingByteChannel
// Size: 0x60(Inherited: 0x30)
struct UMovieSceneScriptingByteChannel : UMovieSceneScriptingChannel
{
	char pad_48[48];  // 0x30 (0x30)


	void SetDefault(char InDefaultValue); // Function SequencerScripting.MovieSceneScriptingByteChannel.SetDefault
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingByteChannel.HasDefault
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingByteChannel.GetKeys
	char GetDefault(); // Function SequencerScripting.MovieSceneScriptingByteChannel.GetDefault
	struct UMovieSceneScriptingByteKey* AddKey(struct FFrameNumber& InTime, char NewValue, float SubFrame, uint8_t TimeUnit, uint8_t InInterpolation); // Function SequencerScripting.MovieSceneScriptingByteChannel.AddKey
}; 
 
 


// Class SequencerScripting.MovieSceneScriptingBoolKey
// Size: 0x60(Inherited: 0x40)
struct UMovieSceneScriptingBoolKey : UMovieSceneScriptingKey
{
	char pad_64[32];  // 0x40 (0x40)


	void SetValue(bool InNewValue); // Function SequencerScripting.MovieSceneScriptingBoolKey.SetValue
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingBoolKey.SetTime
	bool GetValue(); // Function SequencerScripting.MovieSceneScriptingBoolKey.GetValue
	struct FFrameTime GetTime(uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingBoolKey.GetTime
}; 
 
 


// Class SequencerScripting.MovieSceneScriptingObjectPathKey
// Size: 0x60(Inherited: 0x40)
struct UMovieSceneScriptingObjectPathKey : UMovieSceneScriptingKey
{
	char pad_64[32];  // 0x40 (0x40)


	void SetValue(struct UObject* InNewValue); // Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime
	struct UObject* GetValue(); // Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue
	struct FFrameTime GetTime(uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime
}; 
 
 


// Class SequencerScripting.MovieSceneScriptingBoolChannel
// Size: 0x60(Inherited: 0x30)
struct UMovieSceneScriptingBoolChannel : UMovieSceneScriptingChannel
{
	char pad_48[48];  // 0x30 (0x30)


	void SetDefault(bool InDefaultValue); // Function SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault
	int32_t GetNumKeys(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys
	bool GetDefault(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault
	struct TArray<bool> EvaluateKeys(struct FSequencerScriptingRange Range, struct FFrameRate FrameRate); // Function SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys
	struct FSequencerScriptingRange ComputeEffectiveRange(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange
	struct UMovieSceneScriptingBoolKey* AddKey(struct FFrameNumber& InTime, bool NewValue, float SubFrame, uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingBoolChannel.AddKey
}; 
 
 


// Class SequencerScripting.MovieSceneScriptingStringKey
// Size: 0x60(Inherited: 0x40)
struct UMovieSceneScriptingStringKey : UMovieSceneScriptingKey
{
	char pad_64[32];  // 0x40 (0x40)


	void SetValue(struct FString InNewValue); // Function SequencerScripting.MovieSceneScriptingStringKey.SetValue
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingStringKey.SetTime
	struct FString GetValue(); // Function SequencerScripting.MovieSceneScriptingStringKey.GetValue
	struct FFrameTime GetTime(uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingStringKey.GetTime
}; 
 
 


// Class SequencerScripting.MovieSceneScriptingDoubleKey
// Size: 0x60(Inherited: 0x40)
struct UMovieSceneScriptingDoubleKey : UMovieSceneScriptingKey
{
	char pad_64[32];  // 0x40 (0x40)


	void SetValue(double InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetValue
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTime
	void SetTangentWeightMode(enum class ERichCurveTangentWeightMode InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentWeightMode
	void SetTangentMode(enum class ERichCurveTangentMode InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentMode
	void SetLeaveTangentWeight(float InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangentWeight
	void SetLeaveTangent(float InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangent
	void SetInterpolationMode(enum class ERichCurveInterpMode InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetInterpolationMode
	void SetArriveTangentWeight(float InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangentWeight
	void SetArriveTangent(float InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangent
	double GetValue(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetValue
	struct FFrameTime GetTime(uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTime
	enum class ERichCurveTangentWeightMode GetTangentWeightMode(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentWeightMode
	enum class ERichCurveTangentMode GetTangentMode(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentMode
	float GetLeaveTangentWeight(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangentWeight
	float GetLeaveTangent(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangent
	enum class ERichCurveInterpMode GetInterpolationMode(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetInterpolationMode
	float GetArriveTangentWeight(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangentWeight
	float GetArriveTangent(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangent
}; 
 
 


// Class SequencerScripting.MovieSceneScriptingEventKey
// Size: 0x60(Inherited: 0x40)
struct UMovieSceneScriptingEventKey : UMovieSceneScriptingKey
{
	char pad_64[32];  // 0x40 (0x40)


	void SetValue(struct FMovieSceneEvent& InNewValue); // Function SequencerScripting.MovieSceneScriptingEventKey.SetValue
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingEventKey.SetTime
	struct FMovieSceneEvent GetValue(); // Function SequencerScripting.MovieSceneScriptingEventKey.GetValue
	struct FFrameTime GetTime(uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingEventKey.GetTime
}; 
 
 


// Class SequencerScripting.MovieSceneScriptingEventChannel
// Size: 0x60(Inherited: 0x30)
struct UMovieSceneScriptingEventChannel : UMovieSceneScriptingChannel
{
	char pad_48[48];  // 0x30 (0x30)


	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingEventChannel.GetKeys
	struct UMovieSceneScriptingEventKey* AddKey(struct FFrameNumber& InTime, struct FMovieSceneEvent NewValue, float SubFrame, uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingEventChannel.AddKey
}; 
 
 


// Class SequencerScripting.MovieSceneFolderExtensions
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneFolderExtensions : UBlueprintFunctionLibrary
{


	bool SetFolderName(struct UMovieSceneFolder* Folder, struct FName InFolderName); // Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName
	bool SetFolderColor(struct UMovieSceneFolder* Folder, struct FColor InFolderColor); // Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor
	bool RemoveChildObjectBinding(struct UMovieSceneFolder* Folder, struct FMovieSceneBindingProxy InObjectBinding); // Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding
	bool RemoveChildMasterTrack(struct UMovieSceneFolder* Folder, struct UMovieSceneTrack* InMasterTrack); // Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack
	bool RemoveChildFolder(struct UMovieSceneFolder* TargetFolder, struct UMovieSceneFolder* FolderToRemove); // Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder
	struct FName GetFolderName(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName
	struct FColor GetFolderColor(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor
	struct TArray<struct FMovieSceneBindingProxy> GetChildObjectBindings(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings
	struct TArray<struct UMovieSceneTrack*> GetChildMasterTracks(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks
	struct TArray<struct UMovieSceneFolder*> GetChildFolders(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders
	bool AddChildObjectBinding(struct UMovieSceneFolder* Folder, struct FMovieSceneBindingProxy InObjectBinding); // Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding
	bool AddChildMasterTrack(struct UMovieSceneFolder* Folder, struct UMovieSceneTrack* InMasterTrack); // Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack
	bool AddChildFolder(struct UMovieSceneFolder* TargetFolder, struct UMovieSceneFolder* FolderToAdd); // Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder
}; 
 
 


// Class SequencerScripting.MovieSceneScriptingFloatKey
// Size: 0x40(Inherited: 0x40)
struct UMovieSceneScriptingFloatKey : UMovieSceneScriptingKey
{


	void SetValue(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetValue
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetTime
	void SetTangentWeightMode(enum class ERichCurveTangentWeightMode InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode
	void SetTangentMode(enum class ERichCurveTangentMode InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode
	void SetLeaveTangentWeight(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight
	void SetLeaveTangent(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent
	void SetInterpolationMode(enum class ERichCurveInterpMode InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode
	void SetArriveTangentWeight(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight
	void SetArriveTangent(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent
	float GetValue(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetValue
	struct FFrameTime GetTime(uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetTime
	enum class ERichCurveTangentWeightMode GetTangentWeightMode(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode
	enum class ERichCurveTangentMode GetTangentMode(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode
	float GetLeaveTangentWeight(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight
	float GetLeaveTangent(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent
	enum class ERichCurveInterpMode GetInterpolationMode(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode
	float GetArriveTangentWeight(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight
	float GetArriveTangent(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent
}; 
 
 


// Class SequencerScripting.MovieSceneScriptingObjectPathChannel
// Size: 0x60(Inherited: 0x30)
struct UMovieSceneScriptingObjectPathChannel : UMovieSceneScriptingChannel
{
	char pad_48[48];  // 0x30 (0x30)


	void SetDefault(struct UObject* InDefaultValue); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys
	struct UObject* GetDefault(); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault
	struct UMovieSceneScriptingObjectPathKey* AddKey(struct FFrameNumber InTime, struct UObject* NewValue, float SubFrame, uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey
}; 
 
 


// Class SequencerScripting.MovieSceneScriptingActualFloatKey
// Size: 0x60(Inherited: 0x40)
struct UMovieSceneScriptingActualFloatKey : UMovieSceneScriptingFloatKey
{
	char pad_64[32];  // 0x40 (0x40)


}; 
 
 


// Class SequencerScripting.MovieSceneSequenceExtensions
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneSequenceExtensions : UBlueprintFunctionLibrary
{


	void SortMarkedFrames(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames
	void SetWorkRangeStart(struct UMovieSceneSequence* InSequence, float StartTimeInSeconds); // Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart
	void SetWorkRangeEnd(struct UMovieSceneSequence* InSequence, float EndTimeInSeconds); // Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd
	void SetViewRangeStart(struct UMovieSceneSequence* InSequence, float StartTimeInSeconds); // Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart
	void SetViewRangeEnd(struct UMovieSceneSequence* InSequence, float EndTimeInSeconds); // Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd
	void SetTickResolutionDirectly(struct UMovieSceneSequence* Sequence, struct FFrameRate TickResolution); // Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly
	void SetTickResolution(struct UMovieSceneSequence* Sequence, struct FFrameRate TickResolution); // Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution
	void SetReadOnly(struct UMovieSceneSequence* Sequence, bool bInReadOnly); // Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly
	void SetPlaybackStartSeconds(struct UMovieSceneSequence* Sequence, float StartTime); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds
	void SetPlaybackStart(struct UMovieSceneSequence* Sequence, int32_t StartFrame); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart
	void SetPlaybackEndSeconds(struct UMovieSceneSequence* Sequence, float EndTime); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds
	void SetPlaybackEnd(struct UMovieSceneSequence* Sequence, int32_t EndFrame); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd
	void SetMarkedFrame(struct UMovieSceneSequence* Sequence, int32_t InMarkIndex, struct FFrameNumber InFrameNumber); // Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame
	void SetEvaluationType(struct UMovieSceneSequence* InSequence, uint8_t InEvaluationType); // Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType
	void SetDisplayRate(struct UMovieSceneSequence* Sequence, struct FFrameRate DisplayRate); // Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate
	void SetClockSource(struct UMovieSceneSequence* InSequence, uint8_t InClockSource); // Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource
	struct FMovieSceneBindingProxy ResolveBindingID(struct UMovieSceneSequence* MasterSequence, struct FMovieSceneObjectBindingID InObjectBindingID); // Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID
	void RemoveRootFolderFromSequence(struct UMovieSceneSequence* Sequence, struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneSequenceExtensions.RemoveRootFolderFromSequence
	bool RemoveMasterTrack(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* MasterTrack); // Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack
	struct FSequencerScriptingRange MakeRangeSeconds(struct UMovieSceneSequence* Sequence, float StartTime, float Duration); // Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds
	struct FSequencerScriptingRange MakeRange(struct UMovieSceneSequence* Sequence, int32_t StartFrame, int32_t Duration); // Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange
	struct FMovieSceneObjectBindingID MakeBindingID(struct UMovieSceneSequence* MasterSequence, struct FMovieSceneBindingProxy& InBinding, uint8_t Space); // Function SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID
	struct TArray<struct UObject*> LocateBoundObjects(struct UMovieSceneSequence* Sequence, struct FMovieSceneBindingProxy& InBinding, struct UObject* Context); // Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects
	bool IsReadOnly(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly
	float GetWorkRangeStart(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart
	float GetWorkRangeEnd(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd
	float GetViewRangeStart(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart
	float GetViewRangeEnd(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd
	struct FTimecode GetTimecodeSource(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource
	struct FFrameRate GetTickResolution(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution
	struct TArray<struct FMovieSceneBindingProxy> GetSpawnables(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables
	struct TArray<struct UMovieSceneFolder*> GetRootFoldersInSequence(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence
	struct TArray<struct FMovieSceneBindingProxy> GetPossessables(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables
	struct FMovieSceneObjectBindingID GetPortableBindingID(struct UMovieSceneSequence* MasterSequence, struct UMovieSceneSequence* DestinationSequence, struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID
	float GetPlaybackStartSeconds(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds
	int32_t GetPlaybackStart(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart
	struct FSequencerScriptingRange GetPlaybackRange(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange
	float GetPlaybackEndSeconds(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds
	int32_t GetPlaybackEnd(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd
	struct UMovieScene* GetMovieScene(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene
	struct TArray<struct UMovieSceneTrack*> GetMasterTracks(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks
	struct TArray<struct FMovieSceneMarkedFrame> GetMarkedFrames(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames
	uint8_t GetEvaluationType(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType
	struct FFrameRate GetDisplayRate(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate
	uint8_t GetClockSource(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource
	struct TArray<struct FMovieSceneBindingProxy> GetBindings(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings
	struct FMovieSceneObjectBindingID GetBindingID(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID
	int32_t FindNextMarkedFrame(struct UMovieSceneSequence* Sequence, struct FFrameNumber InFrameNumber, bool bForward); // Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame
	struct TArray<struct UMovieSceneTrack*> FindMasterTracksByType(struct UMovieSceneSequence* Sequence, UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType
	struct TArray<struct UMovieSceneTrack*> FindMasterTracksByExactType(struct UMovieSceneSequence* Sequence, UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType
	int32_t FindMarkedFrameByLabel(struct UMovieSceneSequence* Sequence, struct FString InLabel); // Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel
	int32_t FindMarkedFrameByFrameNumber(struct UMovieSceneSequence* Sequence, struct FFrameNumber InFrameNumber); // Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber
	struct FMovieSceneBindingProxy FindBindingByName(struct UMovieSceneSequence* Sequence, struct FString Name); // Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName
	struct FMovieSceneBindingProxy FindBindingById(struct UMovieSceneSequence* Sequence, struct FGuid BindingID); // Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById
	void DeleteMarkedFrames(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames
	void DeleteMarkedFrame(struct UMovieSceneSequence* Sequence, int32_t DeleteIndex); // Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame
	struct FMovieSceneBindingProxy AddSpawnableFromInstance(struct UMovieSceneSequence* Sequence, struct UObject* ObjectToSpawn); // Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance
	struct FMovieSceneBindingProxy AddSpawnableFromClass(struct UMovieSceneSequence* Sequence, UObject* ClassToSpawn); // Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass
	struct UMovieSceneFolder* AddRootFolderToSequence(struct UMovieSceneSequence* Sequence, struct FString NewFolderName); // Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence
	struct FMovieSceneBindingProxy AddPossessable(struct UMovieSceneSequence* Sequence, struct UObject* ObjectToPossess); // Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable
	struct UMovieSceneTrack* AddMasterTrack(struct UMovieSceneSequence* Sequence, UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack
	int32_t AddMarkedFrame(struct UMovieSceneSequence* Sequence, struct FMovieSceneMarkedFrame& InMarkedFrame); // Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame
}; 
 
 


// Class SequencerScripting.MovieSceneScriptingDoubleAsFloatKey
// Size: 0x60(Inherited: 0x40)
struct UMovieSceneScriptingDoubleAsFloatKey : UMovieSceneScriptingFloatKey
{
	char pad_64[32];  // 0x40 (0x40)


}; 
 
 


// Class SequencerScripting.MovieScenePropertyTrackExtensions
// Size: 0x28(Inherited: 0x28)
struct UMovieScenePropertyTrackExtensions : UBlueprintFunctionLibrary
{


	void SetPropertyNameAndPath(struct UMovieScenePropertyTrack* Track, struct FName& InPropertyName, struct FString InPropertyPath); // Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath
	void SetObjectPropertyClass(struct UMovieSceneObjectPropertyTrack* Track, UObject* PropertyClass); // Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass
	void SetByteTrackEnum(struct UMovieSceneByteTrack* Track, struct UEnum* InEnum); // Function SequencerScripting.MovieScenePropertyTrackExtensions.SetByteTrackEnum
	struct FName GetUniqueTrackName(struct UMovieScenePropertyTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName
	struct FString GetPropertyPath(struct UMovieScenePropertyTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath
	struct FName GetPropertyName(struct UMovieScenePropertyTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName
	UObject* GetObjectPropertyClass(struct UMovieSceneObjectPropertyTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass
	struct UEnum* GetByteTrackEnum(struct UMovieSceneByteTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetByteTrackEnum
}; 
 
 


// Class SequencerScripting.MovieSceneScriptingFloatChannel
// Size: 0x80(Inherited: 0x30)
struct UMovieSceneScriptingFloatChannel : UMovieSceneScriptingChannel
{
	char pad_48[80];  // 0x30 (0x30)


	void SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation); // Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation
	void SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation); // Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation
	void SetDefault(float InDefaultValue); // Function SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault
	enum class ERichCurveExtrapolation GetPreInfinityExtrapolation(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation
	enum class ERichCurveExtrapolation GetPostInfinityExtrapolation(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation
	int32_t GetNumKeys(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys
	float GetDefault(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault
	struct TArray<float> EvaluateKeys(struct FSequencerScriptingRange Range, struct FFrameRate FrameRate); // Function SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys
	struct FSequencerScriptingRange ComputeEffectiveRange(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange
	struct UMovieSceneScriptingFloatKey* AddKey(struct FFrameNumber& InTime, float NewValue, float SubFrame, uint8_t TimeUnit, uint8_t InInterpolation); // Function SequencerScripting.MovieSceneScriptingFloatChannel.AddKey
}; 
 
 


// Class SequencerScripting.MovieSceneScriptingIntegerKey
// Size: 0x60(Inherited: 0x40)
struct UMovieSceneScriptingIntegerKey : UMovieSceneScriptingKey
{
	char pad_64[32];  // 0x40 (0x40)


	void SetValue(int32_t InNewValue); // Function SequencerScripting.MovieSceneScriptingIntegerKey.SetValue
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingIntegerKey.SetTime
	int32_t GetValue(); // Function SequencerScripting.MovieSceneScriptingIntegerKey.GetValue
	struct FFrameTime GetTime(uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingIntegerKey.GetTime
}; 
 
 


// Class SequencerScripting.MovieSceneScriptingIntegerChannel
// Size: 0x60(Inherited: 0x30)
struct UMovieSceneScriptingIntegerChannel : UMovieSceneScriptingChannel
{
	char pad_48[48];  // 0x30 (0x30)


	void SetDefault(int32_t InDefaultValue); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys
	int32_t GetDefault(); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault
	struct UMovieSceneScriptingIntegerKey* AddKey(struct FFrameNumber& InTime, int32_t NewValue, float SubFrame, uint8_t TimeUnit); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey
}; 
 
 


// Class SequencerScripting.MovieSceneBindingExtensions
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneBindingExtensions : UBlueprintFunctionLibrary
{


	void SetParent(struct FMovieSceneBindingProxy& InBinding, struct FMovieSceneBindingProxy& InParentBinding); // Function SequencerScripting.MovieSceneBindingExtensions.SetParent
	void SetName(struct FMovieSceneBindingProxy& InBinding, struct FString InName); // Function SequencerScripting.MovieSceneBindingExtensions.SetName
	void SetDisplayName(struct FMovieSceneBindingProxy& InBinding, struct FText& InDisplayName); // Function SequencerScripting.MovieSceneBindingExtensions.SetDisplayName
	void RemoveTrack(struct FMovieSceneBindingProxy& InBinding, struct UMovieSceneTrack* TrackToRemove); // Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack
	void Remove(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.Remove
	void MoveBindingContents(struct FMovieSceneBindingProxy& SourceBindingId, struct FMovieSceneBindingProxy& DestinationBindingId); // Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents
	bool IsValid(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.IsValid
	struct TArray<struct UMovieSceneTrack*> GetTracks(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetTracks
	UObject* GetPossessedObjectClass(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass
	struct FMovieSceneBindingProxy GetParent(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetParent
	struct UObject* GetObjectTemplate(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate
	struct FString GetName(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetName
	struct FGuid GetId(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetId
	struct FText GetDisplayName(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetDisplayName
	struct TArray<struct FMovieSceneBindingProxy> GetChildPossessables(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables
	struct TArray<struct UMovieSceneTrack*> FindTracksByType(struct FMovieSceneBindingProxy& InBinding, UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType
	struct TArray<struct UMovieSceneTrack*> FindTracksByExactType(struct FMovieSceneBindingProxy& InBinding, UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType
	struct UMovieSceneTrack* AddTrack(struct FMovieSceneBindingProxy& InBinding, UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneBindingExtensions.AddTrack
}; 
 
 


// Class SequencerScripting.MovieSceneEventTrackExtensions
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneEventTrackExtensions : UBlueprintFunctionLibrary
{


	UObject* GetBoundObjectPropertyClass(struct FMovieSceneEvent& EventKey); // Function SequencerScripting.MovieSceneEventTrackExtensions.GetBoundObjectPropertyClass
	struct UMovieSceneEventTriggerSection* AddEventTriggerSection(struct UMovieSceneEventTrack* InTrack); // Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection
	struct UMovieSceneEventRepeaterSection* AddEventRepeaterSection(struct UMovieSceneEventTrack* InTrack); // Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection
}; 
 
 


// Class SequencerScripting.MovieSceneFloatVectorTrackExtensions
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneFloatVectorTrackExtensions : UBlueprintFunctionLibrary
{


	void SetNumChannelsUsed(struct UMovieSceneFloatVectorTrack* Track, int32_t InNumChannelsUsed); // Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.SetNumChannelsUsed
	int32_t GetNumChannelsUsed(struct UMovieSceneFloatVectorTrack* Track); // Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.GetNumChannelsUsed
}; 
 
 


// Class SequencerScripting.MovieSceneMaterialTrackExtensions
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneMaterialTrackExtensions : UBlueprintFunctionLibrary
{


	void SetMaterialIndex(struct UMovieSceneComponentMaterialTrack* Track, int32_t MaterialIndex); // Function SequencerScripting.MovieSceneMaterialTrackExtensions.SetMaterialIndex
	int32_t GetMaterialIndex(struct UMovieSceneComponentMaterialTrack* Track); // Function SequencerScripting.MovieSceneMaterialTrackExtensions.GetMaterialIndex
}; 
 
 


// Class SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions
// Size: 0x28(Inherited: 0x28)
struct UMovieScenePrimitiveMaterialTrackExtensions : UBlueprintFunctionLibrary
{


	void SetMaterialIndex(struct UMovieScenePrimitiveMaterialTrack* Track, int32_t MaterialIndex); // Function SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.SetMaterialIndex
	int32_t GetMaterialIndex(struct UMovieScenePrimitiveMaterialTrack* Track); // Function SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.GetMaterialIndex
}; 
 
 


// Class SequencerScripting.MovieSceneSectionExtensions
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneSectionExtensions : UBlueprintFunctionLibrary
{


	void SetStartFrameSeconds(struct UMovieSceneSection* Section, float StartTime); // Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds
	void SetStartFrameBounded(struct UMovieSceneSection* Section, bool bIsBounded); // Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded
	void SetStartFrame(struct UMovieSceneSection* Section, int32_t StartFrame); // Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrame
	void SetRangeSeconds(struct UMovieSceneSection* Section, float StartTime, float EndTime); // Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds
	void SetRange(struct UMovieSceneSection* Section, int32_t StartFrame, int32_t EndFrame); // Function SequencerScripting.MovieSceneSectionExtensions.SetRange
	void SetEndFrameSeconds(struct UMovieSceneSection* Section, float EndTime); // Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds
	void SetEndFrameBounded(struct UMovieSceneSection* Section, bool bIsBounded); // Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded
	void SetEndFrame(struct UMovieSceneSection* Section, int32_t EndFrame); // Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrame
	bool HasStartFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame
	bool HasEndFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame
	float GetStartFrameSeconds(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds
	int32_t GetStartFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrame
	int32_t GetParentSequenceFrame(struct UMovieSceneSubSection* Section, int32_t InFrame, struct UMovieSceneSequence* ParentSequence); // Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame
	float GetEndFrameSeconds(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds
	int32_t GetEndFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrame
	struct TArray<struct UMovieSceneScriptingChannel*> GetChannelsByType(struct UMovieSceneSection* Section, UMovieSceneScriptingChannel* ChannelType); // Function SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType
	struct TArray<struct UMovieSceneScriptingChannel*> GetChannels(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetChannels
	float GetAutoSizeStartFrameSeconds(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrameSeconds
	int32_t GetAutoSizeStartFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrame
	bool GetAutoSizeHasStartFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasStartFrame
	bool GetAutoSizeHasEndFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasEndFrame
	float GetAutoSizeEndFrameSeconds(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrameSeconds
	int32_t GetAutoSizeEndFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrame
	struct TArray<struct UMovieSceneScriptingChannel*> GetAllChannels(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAllChannels
	struct TArray<struct UMovieSceneScriptingChannel*> FindChannelsByType(struct UMovieSceneSection* Section, UMovieSceneScriptingChannel* ChannelType); // Function SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType
}; 
 
 


// Class SequencerScripting.MovieSceneTrackExtensions
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneTrackExtensions : UBlueprintFunctionLibrary
{


	void SetTrackRowDisplayName(struct UMovieSceneTrack* Track, struct FText& InName, int32_t RowIndex); // Function SequencerScripting.MovieSceneTrackExtensions.SetTrackRowDisplayName
	void SetSortingOrder(struct UMovieSceneTrack* Track, int32_t SortingOrder); // Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder
	void SetSectionToKey(struct UMovieSceneTrack* Track, struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey
	void SetDisplayName(struct UMovieSceneTrack* Track, struct FText& InName); // Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName
	void SetColorTint(struct UMovieSceneTrack* Track, struct FColor& ColorTint); // Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint
	void RemoveSection(struct UMovieSceneTrack* Track, struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection
	struct FText GetTrackRowDisplayName(struct UMovieSceneTrack* Track, int32_t RowIndex); // Function SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName
	int32_t GetSortingOrder(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder
	struct UMovieSceneSection* GetSectionToKey(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey
	struct TArray<struct UMovieSceneSection*> GetSections(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetSections
	struct FText GetDisplayName(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName
	struct FColor GetColorTint(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint
	struct UMovieSceneSection* AddSection(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.AddSection
}; 
 
 


// Class SequencerScripting.MovieSceneDoubleVectorTrackExtensions
// Size: 0x28(Inherited: 0x28)
struct UMovieSceneDoubleVectorTrackExtensions : UBlueprintFunctionLibrary
{


	void SetNumChannelsUsed(struct UMovieSceneDoubleVectorTrack* Track, int32_t InNumChannelsUsed); // Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.SetNumChannelsUsed
	int32_t GetNumChannelsUsed(struct UMovieSceneDoubleVectorTrack* Track); // Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed
}; 
 
 


// Class SequencerScripting.SequencerScriptingRangeExtensions
// Size: 0x28(Inherited: 0x28)
struct USequencerScriptingRangeExtensions : UBlueprintFunctionLibrary
{


	void SetStartSeconds(struct FSequencerScriptingRange& Range, float Start); // Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds
	void SetStartFrame(struct FSequencerScriptingRange& Range, int32_t Start); // Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame
	void SetEndSeconds(struct FSequencerScriptingRange& Range, float End); // Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds
	void SetEndFrame(struct FSequencerScriptingRange& Range, int32_t End); // Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame
	void RemoveStart(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart
	void RemoveEnd(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd
	bool HasStart(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart
	bool HasEnd(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd
	float GetStartSeconds(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds
	int32_t GetStartFrame(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame
	float GetEndSeconds(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds
	int32_t GetEndFrame(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame
}; 
 
 


