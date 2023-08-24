#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
struct FMakeLiteralGameplayTag
{
	struct FGameplayTag Value;  // 0x0 (0x0)
	struct FGameplayTag ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct GameplayTags.GameplayTagContainer
struct FGameplayTagContainer
{
	struct TArray<struct FGameplayTag> GameplayTags;  // 0x0 (0x0)
	struct TArray<struct FGameplayTag> ParentTags;  // 0x10 (0x10)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
struct FRemoveGameplayTag
{
	struct FGameplayTagContainer TagContainer;  // 0x0 (0x0)
	struct FGameplayTag Tag;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // ScriptStruct GameplayTags.GameplayTagContainerNetSerializerSerializationHelper
struct FGameplayTagContainerNetSerializerSerializationHelper
{
	struct TArray<struct FGameplayTag> GameplayTags;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayTags.GameplayTagNode
struct FGameplayTagNode
{
	char pad_0[80];  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayTags.GameplayTag
struct FGameplayTag
{
	struct FName TagName;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayTags.GameplayTagQuery
struct FGameplayTagQuery
{
	int32_t TokenStreamVersion;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FGameplayTag> TagDictionary;  // 0x8 (0x8)
	struct TArray<char> QueryTokenStream;  // 0x18 (0x18)
	struct FString UserDescription;  // 0x28 (0x28)
	struct FString AutoDescription;  // 0x38 (0x38)


}; 
 
 // ScriptStruct GameplayTags.GameplayTagContainerNetSerializerConfig
// Size: 0x1(Inherited: 0x1)
struct FGameplayTagContainerNetSerializerConfig : FNetSerializerConfig
{


}; 
 
 // Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
struct FGetOwnedGameplayTags
{
	struct FGameplayTagContainer TagContainer;  // 0x0 (0x0)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
struct FMakeLiteralGameplayTagContainer
{
	struct FGameplayTagContainer Value;  // 0x0 (0x0)
	struct FGameplayTagContainer ReturnValue;  // 0x20 (0x20)


}; 
 
 // ScriptStruct GameplayTags.GameplayTagNetSerializerConfig
// Size: 0x1(Inherited: 0x1)
struct FGameplayTagNetSerializerConfig : FNetSerializerConfig
{


}; 
 
 // ScriptStruct GameplayTags.GameplayTagReferenceHelper
struct FGameplayTagReferenceHelper
{
	char pad_0[16];  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayTags.RestrictedConfigInfo
struct FRestrictedConfigInfo
{
	struct FString RestrictedConfigName;  // 0x0 (0x0)
	struct TArray<struct FString> Owners;  // 0x10 (0x10)


}; 
 
 // ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
struct FGameplayTagCreationWidgetHelper
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // ScriptStruct GameplayTags.GameplayTagRedirect
struct FGameplayTagRedirect
{
	struct FName OldTagName;  // 0x0 (0x0)
	struct FName NewTagName;  // 0x8 (0x8)


}; 
 
 // ScriptStruct GameplayTags.GameplayTagTableRow
// Size: 0x20(Inherited: 0x8)
struct FGameplayTagTableRow : FTableRowBase
{
	struct FName Tag;  // 0x8 (0x8)
	struct FString DevComment;  // 0x10 (0x10)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
struct FGetDebugStringFromGameplayTagContainer
{
	struct FGameplayTagContainer TagContainer;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
struct FGetAllActorsOfClassMatchingTagQuery
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	AActor* ActorClass;  // 0x8 (0x8)
	struct FGameplayTagQuery GameplayTagQuery;  // 0x10 (0x10)
	struct TArray<struct AActor*> OutActors;  // 0x58 (0x58)


}; 
 
 // ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
// Size: 0x28(Inherited: 0x20)
struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow
{
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bAllowNonRestrictedChildren : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // ScriptStruct GameplayTags.GameplayTagSource
struct FGameplayTagSource
{
	struct FName SourceName;  // 0x0 (0x0)
	uint8_t SourceType;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct UGameplayTagsList* SourceTagList;  // 0x10 (0x10)
	struct URestrictedGameplayTagsList* SourceRestrictedTagList;  // 0x18 (0x18)


}; 
 
 // ScriptStruct GameplayTags.GameplayTagCategoryRemap
struct FGameplayTagCategoryRemap
{
	struct FString BaseCategory;  // 0x0 (0x0)
	struct TArray<struct FString> RemapCategories;  // 0x10 (0x10)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
struct FAddGameplayTag
{
	struct FGameplayTagContainer TagContainer;  // 0x0 (0x0)
	struct FGameplayTag Tag;  // 0x20 (0x20)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
struct FBreakGameplayTagContainer
{
	struct FGameplayTagContainer GameplayTagContainer;  // 0x0 (0x0)
	struct TArray<struct FGameplayTag> GameplayTags;  // 0x20 (0x20)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
struct FAppendGameplayTagContainers
{
	struct FGameplayTagContainer InOutTagContainer;  // 0x0 (0x0)
	struct FGameplayTagContainer InTagContainer;  // 0x20 (0x20)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
struct FDoesContainerMatchTagQuery
{
	struct FGameplayTagContainer TagContainer;  // 0x0 (0x0)
	struct FGameplayTagQuery TagQuery;  // 0x20 (0x20)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool ReturnValue : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
struct FDoesTagAssetInterfaceHaveTag
{
	struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface;  // 0x0 (0x0)
	struct FGameplayTag Tag;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
struct FMatchesTag
{
	struct FGameplayTag TagOne;  // 0x0 (0x0)
	struct FGameplayTag TagTwo;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bExactMatch : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool ReturnValue : 1;  // 0x11 (0x11)
	char pad_18[2];  // 0x12 (0x12)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
struct FEqualEqual_GameplayTag
{
	struct FGameplayTag A;  // 0x0 (0x0)
	struct FGameplayTag B;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
struct FNotEqual_GameplayTag
{
	struct FGameplayTag A;  // 0x0 (0x0)
	struct FGameplayTag B;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
struct FEqualEqual_GameplayTagContainer
{
	struct FGameplayTagContainer A;  // 0x0 (0x0)
	struct FGameplayTagContainer B;  // 0x20 (0x20)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool ReturnValue : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
struct FGetDebugStringFromGameplayTag
{
	struct FGameplayTag GameplayTag;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
struct FGetNumGameplayTagsInContainer
{
	struct FGameplayTagContainer TagContainer;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
struct FHasAnyTags
{
	struct FGameplayTagContainer TagContainer;  // 0x0 (0x0)
	struct FGameplayTagContainer OtherContainer;  // 0x20 (0x20)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool bExactMatch : 1;  // 0x40 (0x40)
	char pad_65_1 : 7;  // 0x41 (0x41)
	bool ReturnValue : 1;  // 0x41 (0x41)
	char pad_66[6];  // 0x42 (0x42)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
struct FGetTagName
{
	struct FGameplayTag GameplayTag;  // 0x0 (0x0)
	struct FName ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
struct FHasAllMatchingGameplayTags
{
	struct FGameplayTagContainer TagContainer;  // 0x0 (0x0)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
struct FHasAllTags
{
	struct FGameplayTagContainer TagContainer;  // 0x0 (0x0)
	struct FGameplayTagContainer OtherContainer;  // 0x20 (0x20)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool bExactMatch : 1;  // 0x40 (0x40)
	char pad_65_1 : 7;  // 0x41 (0x41)
	bool ReturnValue : 1;  // 0x41 (0x41)
	char pad_66[6];  // 0x42 (0x42)


}; 
 
 // Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
struct FHasAnyMatchingGameplayTags
{
	struct FGameplayTagContainer TagContainer;  // 0x0 (0x0)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
struct FHasTag
{
	struct FGameplayTagContainer TagContainer;  // 0x0 (0x0)
	struct FGameplayTag Tag;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bExactMatch : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool ReturnValue : 1;  // 0x29 (0x29)
	char pad_42[6];  // 0x2A (0x2A)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
struct FMakeGameplayTagQuery
{
	struct FGameplayTagQuery TagQuery;  // 0x0 (0x0)
	struct FGameplayTagQuery ReturnValue;  // 0x48 (0x48)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
struct FIsGameplayTagValid
{
	struct FGameplayTag GameplayTag;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
struct FIsTagQueryEmpty
{
	struct FGameplayTagQuery TagQuery;  // 0x0 (0x0)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool ReturnValue : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
struct FMakeGameplayTagContainerFromArray
{
	struct TArray<struct FGameplayTag> GameplayTags;  // 0x0 (0x0)
	struct FGameplayTagContainer ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
struct FMakeGameplayTagContainerFromTag
{
	struct FGameplayTag SingleTag;  // 0x0 (0x0)
	struct FGameplayTagContainer ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
struct FMatchesAnyTags
{
	struct FGameplayTag TagOne;  // 0x0 (0x0)
	struct FGameplayTagContainer OtherContainer;  // 0x8 (0x8)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bExactMatch : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool ReturnValue : 1;  // 0x29 (0x29)
	char pad_42[6];  // 0x2A (0x2A)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
struct FNotEqual_GameplayTagContainer
{
	struct FGameplayTagContainer A;  // 0x0 (0x0)
	struct FGameplayTagContainer B;  // 0x20 (0x20)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool ReturnValue : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
struct FNotEqual_TagContainerTagContainer
{
	struct FGameplayTagContainer A;  // 0x0 (0x0)
	struct FString B;  // 0x20 (0x20)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool ReturnValue : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
struct FNotEqual_TagTag
{
	struct FGameplayTag A;  // 0x0 (0x0)
	struct FString B;  // 0x8 (0x8)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
struct FHasMatchingGameplayTag
{
	struct FGameplayTag TagToCheck;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 