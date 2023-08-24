#include "pch.h"
#include "SDK.h"

bool UBlueprintGameplayTagLibrary::RemoveGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag");

	FRemoveGameplayTag parms{};	
	parms.TagContainer = TagContainer;
	parms.Tag = Tag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBlueprintGameplayTagLibrary::NotEqual_TagTag(struct FGameplayTag A, struct FString B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag");

	FNotEqual_TagTag parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBlueprintGameplayTagLibrary::NotEqual_TagContainerTagContainer(struct FGameplayTagContainer A, struct FString B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer");

	FNotEqual_TagContainerTagContainer parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBlueprintGameplayTagLibrary::NotEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer");

	FNotEqual_GameplayTagContainer parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBlueprintGameplayTagLibrary::NotEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag");

	FNotEqual_GameplayTag parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBlueprintGameplayTagLibrary::MatchesTag(struct FGameplayTag TagOne, struct FGameplayTag TagTwo, bool bExactMatch){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag");

	FMatchesTag parms{};	
	parms.TagOne = TagOne;
	parms.TagTwo = TagTwo;
	parms.bExactMatch = bExactMatch;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBlueprintGameplayTagLibrary::MatchesAnyTags(struct FGameplayTag TagOne, struct FGameplayTagContainer& OtherContainer, bool bExactMatch){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags");

	FMatchesAnyTags parms{};	
	parms.TagOne = TagOne;
	parms.OtherContainer = OtherContainer;
	parms.bExactMatch = bExactMatch;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeLiteralGameplayTagContainer(struct FGameplayTagContainer Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer");

	FMakeLiteralGameplayTagContainer parms{};	
	parms.Value = Value;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayTag UBlueprintGameplayTagLibrary::MakeLiteralGameplayTag(struct FGameplayTag Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag");

	FMakeLiteralGameplayTag parms{};	
	parms.Value = Value;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayTagQuery UBlueprintGameplayTagLibrary::MakeGameplayTagQuery(struct FGameplayTagQuery TagQuery){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery");

	FMakeGameplayTagQuery parms{};	
	parms.TagQuery = TagQuery;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromTag(struct FGameplayTag SingleTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag");

	FMakeGameplayTagContainerFromTag parms{};	
	parms.SingleTag = SingleTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromArray(struct TArray<struct FGameplayTag>& GameplayTags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray");

	FMakeGameplayTagContainerFromArray parms{};	
	parms.GameplayTags = GameplayTags;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBlueprintGameplayTagLibrary::IsTagQueryEmpty(struct FGameplayTagQuery& TagQuery){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty");

	FIsTagQueryEmpty parms{};	
	parms.TagQuery = TagQuery;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBlueprintGameplayTagLibrary::IsGameplayTagValid(struct FGameplayTag GameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid");

	FIsGameplayTagValid parms{};	
	parms.GameplayTag = GameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBlueprintGameplayTagLibrary::HasTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag, bool bExactMatch){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasTag");

	FHasTag parms{};	
	parms.TagContainer = TagContainer;
	parms.Tag = Tag;
	parms.bExactMatch = bExactMatch;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBlueprintGameplayTagLibrary::HasAnyTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags");

	FHasAnyTags parms{};	
	parms.TagContainer = TagContainer;
	parms.OtherContainer = OtherContainer;
	parms.bExactMatch = bExactMatch;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBlueprintGameplayTagLibrary::HasAllTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags");

	FHasAllTags parms{};	
	parms.TagContainer = TagContainer;
	parms.OtherContainer = OtherContainer;
	parms.bExactMatch = bExactMatch;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBlueprintGameplayTagLibrary::HasAllMatchingGameplayTags(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTagContainer& OtherContainer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags");

	FHasAllMatchingGameplayTags parms{};	
	parms.TagContainerInterface = TagContainerInterface;
	parms.OtherContainer = OtherContainer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName UBlueprintGameplayTagLibrary::GetTagName(struct FGameplayTag& GameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName");

	FGetTagName parms{};	
	parms.GameplayTag = GameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UBlueprintGameplayTagLibrary::GetNumGameplayTagsInContainer(struct FGameplayTagContainer& TagContainer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer");

	FGetNumGameplayTagsInContainer parms{};	
	parms.TagContainer = TagContainer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTagContainer(struct FGameplayTagContainer& TagContainer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer");

	FGetDebugStringFromGameplayTagContainer parms{};	
	parms.TagContainer = TagContainer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTag(struct FGameplayTag GameplayTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag");

	FGetDebugStringFromGameplayTag parms{};	
	parms.GameplayTag = GameplayTag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UBlueprintGameplayTagLibrary::GetAllActorsOfClassMatchingTagQuery(struct UObject* WorldContextObject, AActor* ActorClass, struct FGameplayTagQuery& GameplayTagQuery, struct TArray<struct AActor*>& OutActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery");

	FGetAllActorsOfClassMatchingTagQuery parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.ActorClass = ActorClass;
	parms.GameplayTagQuery = GameplayTagQuery;
	parms.OutActors = OutActors;

	ProcessEvent(fn, &parms);
}

bool UBlueprintGameplayTagLibrary::EqualEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer");

	FEqualEqual_GameplayTagContainer parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBlueprintGameplayTagLibrary::EqualEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag");

	FEqualEqual_GameplayTag parms{};	
	parms.A = A;
	parms.B = B;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBlueprintGameplayTagLibrary::DoesTagAssetInterfaceHaveTag(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTag Tag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag");

	FDoesTagAssetInterfaceHaveTag parms{};	
	parms.TagContainerInterface = TagContainerInterface;
	parms.Tag = Tag;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBlueprintGameplayTagLibrary::DoesContainerMatchTagQuery(struct FGameplayTagContainer& TagContainer, struct FGameplayTagQuery& TagQuery){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery");

	FDoesContainerMatchTagQuery parms{};	
	parms.TagContainer = TagContainer;
	parms.TagQuery = TagQuery;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(struct FGameplayTagContainer& GameplayTagContainer, struct TArray<struct FGameplayTag>& GameplayTags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer");

	FBreakGameplayTagContainer parms{};	
	parms.GameplayTagContainer = GameplayTagContainer;
	parms.GameplayTags = GameplayTags;

	ProcessEvent(fn, &parms);
}

void UBlueprintGameplayTagLibrary::AppendGameplayTagContainers(struct FGameplayTagContainer& InOutTagContainer, struct FGameplayTagContainer& InTagContainer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers");

	FAppendGameplayTagContainers parms{};	
	parms.InOutTagContainer = InOutTagContainer;
	parms.InTagContainer = InTagContainer;

	ProcessEvent(fn, &parms);
}

void UBlueprintGameplayTagLibrary::AddGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag");

	FAddGameplayTag parms{};	
	parms.TagContainer = TagContainer;
	parms.Tag = Tag;

	ProcessEvent(fn, &parms);
}

bool UGameplayTagAssetInterface::HasMatchingGameplayTag(struct FGameplayTag TagToCheck){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag");

	FHasMatchingGameplayTag parms{};	
	parms.TagToCheck = TagToCheck;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UGameplayTagAssetInterface::HasAnyMatchingGameplayTags(struct FGameplayTagContainer& TagContainer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags");

	FHasAnyMatchingGameplayTags parms{};	
	parms.TagContainer = TagContainer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UGameplayTagAssetInterface::HasAllMatchingGameplayTags(struct FGameplayTagContainer& TagContainer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags");

	FHasAllMatchingGameplayTags parms{};	
	parms.TagContainer = TagContainer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UGameplayTagAssetInterface::GetOwnedGameplayTags(struct FGameplayTagContainer& TagContainer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags");

	FGetOwnedGameplayTags parms{};	
	parms.TagContainer = TagContainer;

	ProcessEvent(fn, &parms);
}

