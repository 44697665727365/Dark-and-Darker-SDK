#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders
struct FGetChildFolders
{
	struct UMovieSceneFolder* Folder;  // 0x0 (0x0)
	struct TArray<struct UMovieSceneFolder*> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneBindingExtensions.SetName
struct FSetName
{
	struct FMovieSceneBindingProxy InBinding;  // 0x0 (0x0)
	struct FString InName;  // 0x18 (0x18)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault
struct FGetDefault
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingStringKey.SetValue
struct FSetValue
{
	struct FString InNewValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName
struct FGetFolderName
{
	struct UMovieSceneFolder* Folder;  // 0x0 (0x0)
	struct FName ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange
struct FComputeEffectiveRange
{
	struct FSequencerScriptingRange ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct SequencerScripting.SequencerScriptingRange
struct FSequencerScriptingRange
{
	char bHasStart : 1;  // 0x0 (0x0)
	char bHasEnd : 1;  // 0x0 (0x0)
	char pad_0_1 : 6;  // 0x0 (0x0)
	char pad_1[4];  // 0x1 (0x1)
	int32_t InclusiveStart;  // 0x4 (0x4)
	int32_t ExclusiveEnd;  // 0x8 (0x8)
	struct FFrameRate InternalRate;  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType
struct FFindTracksByExactType
{
	struct FMovieSceneBindingProxy InBinding;  // 0x0 (0x0)
	UMovieSceneTrack* TrackType;  // 0x18 (0x18)
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart
struct FSetPlaybackStart
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	int32_t StartFrame;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingStringKey.GetTime
struct FGetTime
{
	uint8_t TimeUnit;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FFrameTime ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingStringKey.GetValue
struct FGetValue
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack
struct FRemoveChildMasterTrack
{
	struct UMovieSceneFolder* Folder;  // 0x0 (0x0)
	struct UMovieSceneTrack* InMasterTrack;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingStringKey.SetTime
struct FSetTime
{
	struct FFrameNumber NewFrameNumber;  // 0x0 (0x0)
	float SubFrame;  // 0x4 (0x4)
	uint8_t TimeUnit;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function SequencerScripting.MovieSceneBindingExtensions.SetParent
struct FSetParent
{
	struct FMovieSceneBindingProxy InBinding;  // 0x0 (0x0)
	struct FMovieSceneBindingProxy InParentBinding;  // 0x18 (0x18)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingStringChannel.AddKey
struct FAddKey
{
	struct FFrameNumber InTime;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FString NewValue;  // 0x8 (0x8)
	float SubFrame;  // 0x18 (0x18)
	uint8_t TimeUnit;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	struct UMovieSceneScriptingStringKey* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys
struct FGetKeys
{
	struct TArray<struct UMovieSceneScriptingKey*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingStringChannel.SetDefault
struct FSetDefault
{
	struct FString InDefaultValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault
struct FHasDefault
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName
struct FSetFolderName
{
	struct UMovieSceneFolder* Folder;  // 0x0 (0x0)
	struct FName InFolderName;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack
struct FRemoveTrack
{
	struct FMovieSceneBindingProxy InBinding;  // 0x0 (0x0)
	struct UMovieSceneTrack* TrackToRemove;  // 0x18 (0x18)


}; 
 
 // Function SequencerScripting.MovieSceneBindingExtensions.GetName
struct FGetName
{
	struct FMovieSceneBindingProxy InBinding;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID
struct FGetPortableBindingID
{
	struct UMovieSceneSequence* MasterSequence;  // 0x0 (0x0)
	struct UMovieSceneSequence* DestinationSequence;  // 0x8 (0x8)
	struct FMovieSceneBindingProxy InBinding;  // 0x10 (0x10)
	struct FMovieSceneObjectBindingID ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode
struct FSetInterpolationMode
{
	enum class ERichCurveInterpMode InNewValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey
struct FRemoveKey
{
	struct UMovieSceneScriptingKey* Key;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys
struct FEvaluateKeys
{
	struct FSequencerScriptingRange Range;  // 0x0 (0x0)
	struct FFrameRate FrameRate;  // 0x14 (0x14)
	char pad_28[4];  // 0x1C (0x1C)
	struct TArray<float> ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight
struct FSetArriveTangentWeight
{
	float InNewValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys
struct FGetNumKeys
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder
struct FRemoveChildFolder
{
	struct UMovieSceneFolder* TargetFolder;  // 0x0 (0x0)
	struct UMovieSceneFolder* FolderToRemove;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent
struct FGetArriveTangent
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight
struct FGetArriveTangentWeight
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName
struct FSetDisplayName
{
	struct UMovieSceneTrack* Track;  // 0x0 (0x0)
	struct FText InName;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode
struct FGetInterpolationMode
{
	enum class ERichCurveInterpMode ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent
struct FGetLeaveTangent
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode
struct FSetTangentMode
{
	enum class ERichCurveTangentMode InNewValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack
struct FAddChildMasterTrack
{
	struct UMovieSceneFolder* Folder;  // 0x0 (0x0)
	struct UMovieSceneTrack* InMasterTrack;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function SequencerScripting.MovieSceneBindingExtensions.GetParent
struct FGetParent
{
	struct FMovieSceneBindingProxy InBinding;  // 0x0 (0x0)
	struct FMovieSceneBindingProxy ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType
struct FFindTracksByType
{
	struct FMovieSceneBindingProxy InBinding;  // 0x0 (0x0)
	UMovieSceneTrack* TrackType;  // 0x18 (0x18)
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight
struct FGetLeaveTangentWeight
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode
struct FGetTangentMode
{
	enum class ERichCurveTangentMode ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode
struct FGetTangentWeightMode
{
	enum class ERichCurveTangentWeightMode ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames
struct FGetMarkedFrames
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct TArray<struct FMovieSceneMarkedFrame> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent
struct FSetArriveTangent
{
	float InNewValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart
struct FRemoveStart
{
	struct FSequencerScriptingRange Range;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection
struct FAddEventRepeaterSection
{
	struct UMovieSceneEventTrack* InTrack;  // 0x0 (0x0)
	struct UMovieSceneEventRepeaterSection* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding
struct FRemoveChildObjectBinding
{
	struct UMovieSceneFolder* Folder;  // 0x0 (0x0)
	struct FMovieSceneBindingProxy InObjectBinding;  // 0x8 (0x8)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function SequencerScripting.MovieSceneBindingExtensions.GetTracks
struct FGetTracks
{
	struct FMovieSceneBindingProxy InBinding;  // 0x0 (0x0)
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent
struct FSetLeaveTangent
{
	float InNewValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents
struct FMoveBindingContents
{
	struct FMovieSceneBindingProxy SourceBindingId;  // 0x0 (0x0)
	struct FMovieSceneBindingProxy DestinationBindingId;  // 0x18 (0x18)


}; 
 
 // Function SequencerScripting.MovieSceneBindingExtensions.AddTrack
struct FAddTrack
{
	struct FMovieSceneBindingProxy InBinding;  // 0x0 (0x0)
	UMovieSceneTrack* TrackType;  // 0x18 (0x18)
	struct UMovieSceneTrack* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode
struct FSetTangentWeightMode
{
	enum class ERichCurveTangentWeightMode InNewValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight
struct FSetLeaveTangentWeight
{
	float InNewValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation
struct FGetPostInfinityExtrapolation
{
	enum class ERichCurveExtrapolation ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation
struct FGetPreInfinityExtrapolation
{
	enum class ERichCurveExtrapolation ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation
struct FSetPostInfinityExtrapolation
{
	enum class ERichCurveExtrapolation InExtrapolation;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneBindingExtensions.GetId
struct FGetId
{
	struct FMovieSceneBindingProxy InBinding;  // 0x0 (0x0)
	struct FGuid ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation
struct FSetPreInfinityExtrapolation
{
	enum class ERichCurveExtrapolation InExtrapolation;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding
struct FAddChildObjectBinding
{
	struct UMovieSceneFolder* Folder;  // 0x0 (0x0)
	struct FMovieSceneBindingProxy InObjectBinding;  // 0x8 (0x8)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables
struct FGetChildPossessables
{
	struct FMovieSceneBindingProxy InBinding;  // 0x0 (0x0)
	struct TArray<struct FMovieSceneBindingProxy> ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame
struct FSetMarkedFrame
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	int32_t InMarkIndex;  // 0x8 (0x8)
	struct FFrameNumber InFrameNumber;  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName
struct FGetDisplayName
{
	struct UMovieSceneTrack* Track;  // 0x0 (0x0)
	struct FText ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor
struct FSetFolderColor
{
	struct UMovieSceneFolder* Folder;  // 0x0 (0x0)
	struct FColor InFolderColor;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate
struct FGetObjectTemplate
{
	struct FMovieSceneBindingProxy InBinding;  // 0x0 (0x0)
	struct UObject* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function SequencerScripting.MovieSceneBindingExtensions.IsValid
struct FIsValid
{
	struct FMovieSceneBindingProxy InBinding;  // 0x0 (0x0)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass
struct FGetPossessedObjectClass
{
	struct FMovieSceneBindingProxy InBinding;  // 0x0 (0x0)
	UObject* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function SequencerScripting.MovieSceneBindingExtensions.Remove
struct FRemove
{
	struct FMovieSceneBindingProxy InBinding;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection
struct FAddEventTriggerSection
{
	struct UMovieSceneEventTrack* InTrack;  // 0x0 (0x0)
	struct UMovieSceneEventTriggerSection* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneEventTrackExtensions.GetBoundObjectPropertyClass
struct FGetBoundObjectPropertyClass
{
	struct FMovieSceneEvent EventKey;  // 0x0 (0x0)
	UObject* ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder
struct FAddChildFolder
{
	struct UMovieSceneFolder* TargetFolder;  // 0x0 (0x0)
	struct UMovieSceneFolder* FolderToAdd;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks
struct FGetChildMasterTracks
{
	struct UMovieSceneFolder* Folder;  // 0x0 (0x0)
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings
struct FGetChildObjectBindings
{
	struct UMovieSceneFolder* Folder;  // 0x0 (0x0)
	struct TArray<struct FMovieSceneBindingProxy> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd
struct FRemoveEnd
{
	struct FSequencerScriptingRange Range;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType
struct FGetChannelsByType
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	UMovieSceneScriptingChannel* ChannelType;  // 0x8 (0x8)
	struct TArray<struct UMovieSceneScriptingChannel*> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor
struct FGetFolderColor
{
	struct UMovieSceneFolder* Folder;  // 0x0 (0x0)
	struct FColor ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds
struct FSetEndFrameSeconds
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	float EndTime;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.GetMaterialIndex
struct FGetMaterialIndex
{
	struct UMovieScenePrimitiveMaterialTrack* Track;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.SetMaterialIndex
struct FSetMaterialIndex
{
	struct UMovieScenePrimitiveMaterialTrack* Track;  // 0x0 (0x0)
	int32_t MaterialIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetByteTrackEnum
struct FGetByteTrackEnum
{
	struct UMovieSceneByteTrack* Track;  // 0x0 (0x0)
	struct UEnum* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames
struct FSortMarkedFrames
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass
struct FGetObjectPropertyClass
{
	struct UMovieSceneObjectPropertyTrack* Track;  // 0x0 (0x0)
	UObject* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName
struct FGetPropertyName
{
	struct UMovieScenePropertyTrack* Track;  // 0x0 (0x0)
	struct FName ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath
struct FGetPropertyPath
{
	struct UMovieScenePropertyTrack* Track;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName
struct FGetUniqueTrackName
{
	struct UMovieScenePropertyTrack* Track;  // 0x0 (0x0)
	struct FName ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieScenePropertyTrackExtensions.SetByteTrackEnum
struct FSetByteTrackEnum
{
	struct UMovieSceneByteTrack* Track;  // 0x0 (0x0)
	struct UEnum* InEnum;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass
struct FSetObjectPropertyClass
{
	struct UMovieSceneObjectPropertyTrack* Track;  // 0x0 (0x0)
	UObject* PropertyClass;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds
struct FGetEndSeconds
{
	struct FSequencerScriptingRange Range;  // 0x0 (0x0)
	float ReturnValue;  // 0x14 (0x14)


}; 
 
 // Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath
struct FSetPropertyNameAndPath
{
	struct UMovieScenePropertyTrack* Track;  // 0x0 (0x0)
	struct FName InPropertyName;  // 0x8 (0x8)
	struct FString InPropertyPath;  // 0x10 (0x10)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType
struct FFindChannelsByType
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	UMovieSceneScriptingChannel* ChannelType;  // 0x8 (0x8)
	struct TArray<struct UMovieSceneScriptingChannel*> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.GetAllChannels
struct FGetAllChannels
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	struct TArray<struct UMovieSceneScriptingChannel*> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneTrackExtensions.GetSections
struct FGetSections
{
	struct UMovieSceneTrack* Track;  // 0x0 (0x0)
	struct TArray<struct UMovieSceneSection*> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrame
struct FGetAutoSizeEndFrame
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrameSeconds
struct FGetAutoSizeEndFrameSeconds
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasEndFrame
struct FGetAutoSizeHasEndFrame
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasStartFrame
struct FGetAutoSizeHasStartFrame
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrame
struct FGetAutoSizeStartFrame
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrameSeconds
struct FGetAutoSizeStartFrameSeconds
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.GetChannels
struct FGetChannels
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	struct TArray<struct UMovieSceneScriptingChannel*> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame
struct FGetEndFrame
{
	struct FSequencerScriptingRange Range;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x14 (0x14)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds
struct FGetEndFrameSeconds
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables
struct FGetSpawnables
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct TArray<struct FMovieSceneBindingProxy> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame
struct FGetParentSequenceFrame
{
	struct UMovieSceneSubSection* Section;  // 0x0 (0x0)
	int32_t InFrame;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct UMovieSceneSequence* ParentSequence;  // 0x10 (0x10)
	int32_t ReturnValue;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame
struct FGetStartFrame
{
	struct FSequencerScriptingRange Range;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x14 (0x14)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene
struct FGetMovieScene
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct UMovieScene* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds
struct FGetStartFrameSeconds
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame
struct FHasEndFrame
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded
struct FSetEndFrameBounded
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bIsBounded : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame
struct FHasStartFrame
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame
struct FSetEndFrame
{
	struct FSequencerScriptingRange Range;  // 0x0 (0x0)
	int32_t End;  // 0x14 (0x14)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.SetRange
struct FSetRange
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	int32_t StartFrame;  // 0x8 (0x8)
	int32_t EndFrame;  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds
struct FSetRangeSeconds
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	float StartTime;  // 0x8 (0x8)
	float EndTime;  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame
struct FSetStartFrame
{
	struct FSequencerScriptingRange Range;  // 0x0 (0x0)
	int32_t Start;  // 0x14 (0x14)


}; 
 
 // Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint
struct FSetColorTint
{
	struct UMovieSceneTrack* Track;  // 0x0 (0x0)
	struct FColor ColorTint;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded
struct FSetStartFrameBounded
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bIsBounded : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds
struct FSetStartFrameSeconds
{
	struct UMovieSceneSection* Section;  // 0x0 (0x0)
	float StartTime;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame
struct FAddMarkedFrame
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct FMovieSceneMarkedFrame InMarkedFrame;  // 0x8 (0x8)
	int32_t ReturnValue;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack
struct FAddMasterTrack
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	UMovieSceneTrack* TrackType;  // 0x8 (0x8)
	struct UMovieSceneTrack* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable
struct FAddPossessable
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct UObject* ObjectToPossess;  // 0x8 (0x8)
	struct FMovieSceneBindingProxy ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence
struct FAddRootFolderToSequence
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct FString NewFolderName;  // 0x8 (0x8)
	struct UMovieSceneFolder* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass
struct FAddSpawnableFromClass
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	UObject* ClassToSpawn;  // 0x8 (0x8)
	struct FMovieSceneBindingProxy ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds
struct FSetPlaybackEndSeconds
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	float EndTime;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance
struct FAddSpawnableFromInstance
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct UObject* ObjectToSpawn;  // 0x8 (0x8)
	struct FMovieSceneBindingProxy ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects
struct FLocateBoundObjects
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct FMovieSceneBindingProxy InBinding;  // 0x8 (0x8)
	struct UObject* Context;  // 0x20 (0x20)
	struct TArray<struct UObject*> ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame
struct FDeleteMarkedFrame
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	int32_t DeleteIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames
struct FDeleteMarkedFrames
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById
struct FFindBindingById
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct FGuid BindingID;  // 0x8 (0x8)
	struct FMovieSceneBindingProxy ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName
struct FFindBindingByName
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct FString Name;  // 0x8 (0x8)
	struct FMovieSceneBindingProxy ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber
struct FFindMarkedFrameByFrameNumber
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct FFrameNumber InFrameNumber;  // 0x8 (0x8)
	int32_t ReturnValue;  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel
struct FFindMarkedFrameByLabel
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct FString InLabel;  // 0x8 (0x8)
	int32_t ReturnValue;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType
struct FFindMasterTracksByExactType
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	UMovieSceneTrack* TrackType;  // 0x8 (0x8)
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType
struct FFindMasterTracksByType
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	UMovieSceneTrack* TrackType;  // 0x8 (0x8)
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame
struct FFindNextMarkedFrame
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct FFrameNumber InFrameNumber;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bForward : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	int32_t ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID
struct FGetBindingID
{
	struct FMovieSceneBindingProxy InBinding;  // 0x0 (0x0)
	struct FMovieSceneObjectBindingID ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart
struct FHasStart
{
	struct FSequencerScriptingRange Range;  // 0x0 (0x0)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings
struct FGetBindings
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct TArray<struct FMovieSceneBindingProxy> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource
struct FGetClockSource
{
	struct UMovieSceneSequence* InSequence;  // 0x0 (0x0)
	uint8_t ReturnValue;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate
struct FGetDisplayRate
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct FFrameRate ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType
struct FGetEvaluationType
{
	struct UMovieSceneSequence* InSequence;  // 0x0 (0x0)
	uint8_t ReturnValue;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks
struct FGetMasterTracks
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd
struct FGetPlaybackEnd
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds
struct FGetPlaybackEndSeconds
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds
struct FGetPlaybackStartSeconds
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange
struct FGetPlaybackRange
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct FSequencerScriptingRange ReturnValue;  // 0x8 (0x8)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart
struct FGetPlaybackStart
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables
struct FGetPossessables
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct TArray<struct FMovieSceneBindingProxy> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence
struct FGetRootFoldersInSequence
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct TArray<struct UMovieSceneFolder*> ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange
struct FMakeRange
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	int32_t StartFrame;  // 0x8 (0x8)
	int32_t Duration;  // 0xC (0xC)
	struct FSequencerScriptingRange ReturnValue;  // 0x10 (0x10)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution
struct FGetTickResolution
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct FFrameRate ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource
struct FGetTimecodeSource
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct FTimecode ReturnValue;  // 0x8 (0x8)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd
struct FGetViewRangeEnd
{
	struct UMovieSceneSequence* InSequence;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart
struct FGetViewRangeStart
{
	struct UMovieSceneSequence* InSequence;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd
struct FGetWorkRangeEnd
{
	struct UMovieSceneSequence* InSequence;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart
struct FGetWorkRangeStart
{
	struct UMovieSceneSequence* InSequence;  // 0x0 (0x0)
	float ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly
struct FIsReadOnly
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID
struct FMakeBindingID
{
	struct UMovieSceneSequence* MasterSequence;  // 0x0 (0x0)
	struct FMovieSceneBindingProxy InBinding;  // 0x8 (0x8)
	uint8_t Space;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	struct FMovieSceneObjectBindingID ReturnValue;  // 0x24 (0x24)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds
struct FMakeRangeSeconds
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	float StartTime;  // 0x8 (0x8)
	float Duration;  // 0xC (0xC)
	struct FSequencerScriptingRange ReturnValue;  // 0x10 (0x10)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack
struct FRemoveMasterTrack
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct UMovieSceneTrack* MasterTrack;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.RemoveRootFolderFromSequence
struct FRemoveRootFolderFromSequence
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct UMovieSceneFolder* Folder;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID
struct FResolveBindingID
{
	struct UMovieSceneSequence* MasterSequence;  // 0x0 (0x0)
	struct FMovieSceneObjectBindingID InObjectBindingID;  // 0x8 (0x8)
	struct FMovieSceneBindingProxy ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource
struct FSetClockSource
{
	struct UMovieSceneSequence* InSequence;  // 0x0 (0x0)
	uint8_t InClockSource;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate
struct FSetDisplayRate
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct FFrameRate DisplayRate;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType
struct FSetEvaluationType
{
	struct UMovieSceneSequence* InSequence;  // 0x0 (0x0)
	uint8_t InEvaluationType;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds
struct FSetPlaybackStartSeconds
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	float StartTime;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd
struct FSetPlaybackEnd
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	int32_t EndFrame;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly
struct FSetReadOnly
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bInReadOnly : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution
struct FSetTickResolution
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct FFrameRate TickResolution;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly
struct FSetTickResolutionDirectly
{
	struct UMovieSceneSequence* Sequence;  // 0x0 (0x0)
	struct FFrameRate TickResolution;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd
struct FSetViewRangeEnd
{
	struct UMovieSceneSequence* InSequence;  // 0x0 (0x0)
	float EndTimeInSeconds;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart
struct FSetViewRangeStart
{
	struct UMovieSceneSequence* InSequence;  // 0x0 (0x0)
	float StartTimeInSeconds;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd
struct FSetWorkRangeEnd
{
	struct UMovieSceneSequence* InSequence;  // 0x0 (0x0)
	float EndTimeInSeconds;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart
struct FSetWorkRangeStart
{
	struct UMovieSceneSequence* InSequence;  // 0x0 (0x0)
	float StartTimeInSeconds;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneTrackExtensions.AddSection
struct FAddSection
{
	struct UMovieSceneTrack* Track;  // 0x0 (0x0)
	struct UMovieSceneSection* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint
struct FGetColorTint
{
	struct UMovieSceneTrack* Track;  // 0x0 (0x0)
	struct FColor ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey
struct FGetSectionToKey
{
	struct UMovieSceneTrack* Track;  // 0x0 (0x0)
	struct UMovieSceneSection* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder
struct FGetSortingOrder
{
	struct UMovieSceneTrack* Track;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName
struct FGetTrackRowDisplayName
{
	struct UMovieSceneTrack* Track;  // 0x0 (0x0)
	int32_t RowIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FText ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection
struct FRemoveSection
{
	struct UMovieSceneTrack* Track;  // 0x0 (0x0)
	struct UMovieSceneSection* Section;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey
struct FSetSectionToKey
{
	struct UMovieSceneTrack* Track;  // 0x0 (0x0)
	struct UMovieSceneSection* Section;  // 0x8 (0x8)


}; 
 
 // Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder
struct FSetSortingOrder
{
	struct UMovieSceneTrack* Track;  // 0x0 (0x0)
	int32_t SortingOrder;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneTrackExtensions.SetTrackRowDisplayName
struct FSetTrackRowDisplayName
{
	struct UMovieSceneTrack* Track;  // 0x0 (0x0)
	struct FText InName;  // 0x8 (0x8)
	int32_t RowIndex;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed
struct FGetNumChannelsUsed
{
	struct UMovieSceneDoubleVectorTrack* Track;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.SetNumChannelsUsed
struct FSetNumChannelsUsed
{
	struct UMovieSceneDoubleVectorTrack* Track;  // 0x0 (0x0)
	int32_t InNumChannelsUsed;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds
struct FGetStartSeconds
{
	struct FSequencerScriptingRange Range;  // 0x0 (0x0)
	float ReturnValue;  // 0x14 (0x14)


}; 
 
 // Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd
struct FHasEnd
{
	struct FSequencerScriptingRange Range;  // 0x0 (0x0)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool ReturnValue : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds
struct FSetEndSeconds
{
	struct FSequencerScriptingRange Range;  // 0x0 (0x0)
	float End;  // 0x14 (0x14)


}; 
 
 // Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds
struct FSetStartSeconds
{
	struct FSequencerScriptingRange Range;  // 0x0 (0x0)
	float Start;  // 0x14 (0x14)


}; 
 
 