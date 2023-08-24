#include "pch.h"
#include "SDK.h"

struct UVariantSet* ULevelVariantSets::GetVariantSetByName(struct FString VariantSetName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetVariantSetByName");

	FGetVariantSetByName parms{};	
	parms.VariantSetName = VariantSetName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UVariantSet* ULevelVariantSets::GetVariantSet(int32_t VariantSetIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetVariantSet");

	FGetVariantSet parms{};	
	parms.VariantSetIndex = VariantSetIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t ULevelVariantSets::GetNumVariantSets(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetNumVariantSets");

	FGetNumVariantSets parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ALevelVariantSetsActor::SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName");

	FSwitchOnVariantByName parms{};	
	parms.VariantSetName = VariantSetName;
	parms.VariantName = VariantName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ALevelVariantSetsActor::SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex");

	FSwitchOnVariantByIndex parms{};	
	parms.VariantSetIndex = VariantSetIndex;
	parms.VariantIndex = VariantIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ALevelVariantSetsActor::SetLevelVariantSets(struct ULevelVariantSets* InVariantSets){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets");

	FSetLevelVariantSets parms{};	
	parms.InVariantSets = InVariantSets;

	ProcessEvent(fn, &parms);
}

struct ULevelVariantSets* ALevelVariantSetsActor::GetLevelVariantSets(bool bLoad){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets");

	FGetLevelVariantSets parms{};	
	parms.bLoad = bLoad;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPropertyValue::HasRecordedData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.HasRecordedData");

	FHasRecordedData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UPropertyValue::GetPropertyTooltip(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.GetPropertyTooltip");

	FGetPropertyTooltip parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UPropertyValue::GetFullDisplayString(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.PropertyValue.GetFullDisplayString");

	FGetFullDisplayString parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ASwitchActor::SelectOption(int32_t OptionIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.SelectOption");

	FSelectOption parms{};	
	parms.OptionIndex = OptionIndex;

	ProcessEvent(fn, &parms);
}

int32_t ASwitchActor::GetSelectedOption(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.GetSelectedOption");

	FGetSelectedOption parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct AActor*> ASwitchActor::GetOptions(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.SwitchActor.GetOptions");

	FGetOptions parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UVariant::SwitchOn(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SwitchOn");

	FSwitchOn parms{};	

	ProcessEvent(fn, &parms);
}

void UVariant::SetThumbnailFromTexture(struct UTexture2D* NewThumbnail){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetThumbnailFromTexture");

	FSetThumbnailFromTexture parms{};	
	parms.NewThumbnail = NewThumbnail;

	ProcessEvent(fn, &parms);
}

void UVariant::SetThumbnailFromFile(struct FString FilePath){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetThumbnailFromFile");

	FSetThumbnailFromFile parms{};	
	parms.FilePath = FilePath;

	ProcessEvent(fn, &parms);
}

void UVariant::SetThumbnailFromEditorViewport(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetThumbnailFromEditorViewport");

	FSetThumbnailFromEditorViewport parms{};	

	ProcessEvent(fn, &parms);
}

void UVariant::SetThumbnailFromCamera(struct UObject* WorldContextObject, struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetThumbnailFromCamera");

	FSetThumbnailFromCamera parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.CameraTransform = CameraTransform;
	parms.FOVDegrees = FOVDegrees;
	parms.MinZ = MinZ;
	parms.Gamma = Gamma;

	ProcessEvent(fn, &parms);
}

void UVariant::SetDisplayText(struct FText& NewDisplayText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetDisplayText");

	FSetDisplayText parms{};	
	parms.NewDisplayText = NewDisplayText;

	ProcessEvent(fn, &parms);
}

void UVariant::SetDependency(int32_t Index, struct FVariantDependency& Dependency){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetDependency");

	FSetDependency parms{};	
	parms.Index = Index;
	parms.Dependency = Dependency;

	ProcessEvent(fn, &parms);
}

bool UVariant::IsActive(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.IsActive");

	FIsActive parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UTexture2D* UVariant::GetThumbnail(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetThumbnail");

	FGetThumbnail parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UVariantSet* UVariant::GetParent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetParent");

	FGetParent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UVariant::GetNumDependencies(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetNumDependencies");

	FGetNumDependencies parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UVariant::GetNumActors(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetNumActors");

	FGetNumActors parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UVariant::GetDisplayText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetDisplayText");

	FGetDisplayText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct UVariant*> UVariant::GetDependents(struct ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetDependents");

	FGetDependents parms{};	
	parms.LevelVariantSets = LevelVariantSets;
	parms.bOnlyEnabledDependencies = bOnlyEnabledDependencies;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVariantDependency UVariant::GetDependency(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetDependency");

	FGetDependency parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct AActor* UVariant::GetActor(int32_t ActorIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetActor");

	FGetActor parms{};	
	parms.ActorIndex = ActorIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UVariant::DeleteDependency(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.DeleteDependency");

	FDeleteDependency parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);
}

int32_t UVariant::AddDependency(struct FVariantDependency& Dependency){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.AddDependency");

	FAddDependency parms{};	
	parms.Dependency = Dependency;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UVariantSet::SetThumbnailFromTexture(struct UTexture2D* NewThumbnail){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.SetThumbnailFromTexture");

	FSetThumbnailFromTexture parms{};	
	parms.NewThumbnail = NewThumbnail;

	ProcessEvent(fn, &parms);
}

void UVariantSet::SetThumbnailFromFile(struct FString FilePath){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.SetThumbnailFromFile");

	FSetThumbnailFromFile parms{};	
	parms.FilePath = FilePath;

	ProcessEvent(fn, &parms);
}

void UVariantSet::SetThumbnailFromEditorViewport(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport");

	FSetThumbnailFromEditorViewport parms{};	

	ProcessEvent(fn, &parms);
}

void UVariantSet::SetThumbnailFromCamera(struct UObject* WorldContextObject, struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.SetThumbnailFromCamera");

	FSetThumbnailFromCamera parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.CameraTransform = CameraTransform;
	parms.FOVDegrees = FOVDegrees;
	parms.MinZ = MinZ;
	parms.Gamma = Gamma;

	ProcessEvent(fn, &parms);
}

void UVariantSet::SetDisplayText(struct FText& NewDisplayText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.SetDisplayText");

	FSetDisplayText parms{};	
	parms.NewDisplayText = NewDisplayText;

	ProcessEvent(fn, &parms);
}

struct UVariant* UVariantSet::GetVariantByName(struct FString VariantName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetVariantByName");

	FGetVariantByName parms{};	
	parms.VariantName = VariantName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UVariant* UVariantSet::GetVariant(int32_t VariantIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetVariant");

	FGetVariant parms{};	
	parms.VariantIndex = VariantIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UTexture2D* UVariantSet::GetThumbnail(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetThumbnail");

	FGetThumbnail parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct ULevelVariantSets* UVariantSet::GetParent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetParent");

	FGetParent parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UVariantSet::GetNumVariants(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetNumVariants");

	FGetNumVariants parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FText UVariantSet::GetDisplayText(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetDisplayText");

	FGetDisplayText parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

