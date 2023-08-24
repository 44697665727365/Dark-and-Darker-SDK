#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
struct FGetVariantSetByName
{
	struct FString VariantSetName;  // 0x0 (0x0)
	struct UVariantSet* ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct VariantManagerContent.FunctionCaller
struct FFunctionCaller
{
	struct FName FunctionName;  // 0x0 (0x0)


}; 
 
 // Function VariantManagerContent.SwitchActor.GetOptions
struct FGetOptions
{
	struct TArray<struct AActor*> ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct VariantManagerContent.VariantDependency
struct FVariantDependency
{
	struct TSoftObjectPtr<UVariantSet> VariantSet;  // 0x0 (0x0)
	struct TSoftObjectPtr<UVariant> Variant;  // 0x30 (0x30)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool bEnabled : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)


}; 
 
 // ScriptStruct VariantManagerContent.CapturedPropSegment
struct FCapturedPropSegment
{
	struct FString PropertyName;  // 0x0 (0x0)
	int32_t PropertyIndex;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FString ComponentName;  // 0x18 (0x18)


}; 
 
 // Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
struct FGetNumVariantSets
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function VariantManagerContent.LevelVariantSets.GetVariantSet
struct FGetVariantSet
{
	int32_t VariantSetIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UVariantSet* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
struct FGetLevelVariantSets
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bLoad : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct ULevelVariantSets* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function VariantManagerContent.PropertyValue.GetPropertyTooltip
struct FGetPropertyTooltip
{
	struct FText ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
struct FSetLevelVariantSets
{
	struct ULevelVariantSets* InVariantSets;  // 0x0 (0x0)


}; 
 
 // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
struct FSwitchOnVariantByIndex
{
	int32_t VariantSetIndex;  // 0x0 (0x0)
	int32_t VariantIndex;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)


}; 
 
 // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
struct FSwitchOnVariantByName
{
	struct FString VariantSetName;  // 0x0 (0x0)
	struct FString VariantName;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function VariantManagerContent.PropertyValue.GetFullDisplayString
struct FGetFullDisplayString
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function VariantManagerContent.Variant.GetNumActors
struct FGetNumActors
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function VariantManagerContent.PropertyValue.HasRecordedData
struct FHasRecordedData
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function VariantManagerContent.SwitchActor.GetSelectedOption
struct FGetSelectedOption
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function VariantManagerContent.SwitchActor.SelectOption
struct FSelectOption
{
	int32_t OptionIndex;  // 0x0 (0x0)


}; 
 
 // Function VariantManagerContent.Variant.AddDependency
struct FAddDependency
{
	struct FVariantDependency Dependency;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)


}; 
 
 // Function VariantManagerContent.Variant.DeleteDependency
struct FDeleteDependency
{
	int32_t Index;  // 0x0 (0x0)


}; 
 
 // Function VariantManagerContent.VariantSet.SetDisplayText
struct FSetDisplayText
{
	struct FText NewDisplayText;  // 0x0 (0x0)


}; 
 
 // Function VariantManagerContent.Variant.GetActor
struct FGetActor
{
	int32_t ActorIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function VariantManagerContent.Variant.GetDependency
struct FGetDependency
{
	int32_t Index;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVariantDependency ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function VariantManagerContent.VariantSet.SetThumbnailFromFile
struct FSetThumbnailFromFile
{
	struct FString FilePath;  // 0x0 (0x0)


}; 
 
 // Function VariantManagerContent.Variant.GetDependents
struct FGetDependents
{
	struct ULevelVariantSets* LevelVariantSets;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bOnlyEnabledDependencies : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct TArray<struct UVariant*> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function VariantManagerContent.VariantSet.GetVariant
struct FGetVariant
{
	int32_t VariantIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UVariant* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function VariantManagerContent.VariantSet.GetDisplayText
struct FGetDisplayText
{
	struct FText ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function VariantManagerContent.Variant.GetNumDependencies
struct FGetNumDependencies
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function VariantManagerContent.VariantSet.GetParent
struct FGetParent
{
	struct ULevelVariantSets* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function VariantManagerContent.VariantSet.GetThumbnail
struct FGetThumbnail
{
	struct UTexture2D* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function VariantManagerContent.Variant.IsActive
struct FIsActive
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function VariantManagerContent.Variant.SetDependency
struct FSetDependency
{
	int32_t Index;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVariantDependency Dependency;  // 0x8 (0x8)


}; 
 
 // Function VariantManagerContent.VariantSet.SetThumbnailFromCamera
struct FSetThumbnailFromCamera
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform CameraTransform;  // 0x10 (0x10)
	float FOVDegrees;  // 0x70 (0x70)
	float MinZ;  // 0x74 (0x74)
	float Gamma;  // 0x78 (0x78)
	char pad_124[4];  // 0x7C (0x7C)


}; 
 
 // Function VariantManagerContent.VariantSet.SetThumbnailFromTexture
struct FSetThumbnailFromTexture
{
	struct UTexture2D* NewThumbnail;  // 0x0 (0x0)


}; 
 
 // Function VariantManagerContent.VariantSet.GetNumVariants
struct FGetNumVariants
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function VariantManagerContent.VariantSet.GetVariantByName
struct FGetVariantByName
{
	struct FString VariantName;  // 0x0 (0x0)
	struct UVariant* ReturnValue;  // 0x10 (0x10)


}; 
 
 