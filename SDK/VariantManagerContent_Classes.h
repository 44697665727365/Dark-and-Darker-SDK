#pragma once 
#include <VariantManagerContent_Structs.h>
 
 
 
// Class VariantManagerContent.LevelVariantSets
// Size: 0x90(Inherited: 0x28)
struct ULevelVariantSets : UObject
{
	 DirectorClass;  // 0x28 (0x28)
	struct TArray<struct UVariantSet*> VariantSets;  // 0x30 (0x30)
	char pad_64[80];  // 0x40 (0x40)


	struct UVariantSet* GetVariantSetByName(struct FString VariantSetName); // Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
	struct UVariantSet* GetVariantSet(int32_t VariantSetIndex); // Function VariantManagerContent.LevelVariantSets.GetVariantSet
	int32_t GetNumVariantSets(); // Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
}; 
 
 


// Class VariantManagerContent.LevelVariantSetsActor
// Size: 0x300(Inherited: 0x290)
struct ALevelVariantSetsActor : AActor
{
	struct FSoftObjectPath LevelVariantSets;  // 0x290 (0x290)
	struct TMap<, struct ULevelVariantSetsFunctionDirector*> DirectorInstances;  // 0x2B0 (0x2B0)


	bool SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	void SetLevelVariantSets(struct ULevelVariantSets* InVariantSets); // Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	struct ULevelVariantSets* GetLevelVariantSets(bool bLoad); // Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
}; 
 
 


// Class VariantManagerContent.PropertyValueMaterial
// Size: 0x1C0(Inherited: 0x1C0)
struct UPropertyValueMaterial : UPropertyValue
{


}; 
 
 


// Class VariantManagerContent.PropertyValue
// Size: 0x1C0(Inherited: 0x28)
struct UPropertyValue : UObject
{
	char pad_40[96];  // 0x28 (0x28)
	struct TArray<struct TFieldPath<FNone>> Properties;  // 0x88 (0x88)
	struct TArray<int32_t> PropertyIndices;  // 0x98 (0x98)
	struct TArray<struct FCapturedPropSegment> CapturedPropSegments;  // 0xA8 (0xA8)
	struct FString FullDisplayString;  // 0xB8 (0xB8)
	struct FName PropertySetterName;  // 0xC8 (0xC8)
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults;  // 0xD0 (0xD0)
	char pad_288_1 : 7;  // 0x120 (0x120)
	bool bHasRecordedData : 1;  // 0x120 (0x120)
	char pad_289[7];  // 0x121 (0x121)
	 LeafPropertyClass;  // 0x128 (0x128)
	char pad_304[8];  // 0x130 (0x130)
	struct TArray<char> ValueBytes;  // 0x138 (0x138)
	uint8_t PropCategory;  // 0x148 (0x148)
	char pad_329[119];  // 0x149 (0x149)


	bool HasRecordedData(); // Function VariantManagerContent.PropertyValue.HasRecordedData
	struct FText GetPropertyTooltip(); // Function VariantManagerContent.PropertyValue.GetPropertyTooltip
	struct FString GetFullDisplayString(); // Function VariantManagerContent.PropertyValue.GetFullDisplayString
}; 
 
 


// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// Size: 0x40(Inherited: 0x28)
struct ULevelVariantSetsFunctionDirector : UObject
{
	char pad_40[24];  // 0x28 (0x28)


}; 
 
 


// Class VariantManagerContent.PropertyValueVisibility
// Size: 0x1C0(Inherited: 0x1C0)
struct UPropertyValueVisibility : UPropertyValue
{


}; 
 
 


// Class VariantManagerContent.PropertyValueTransform
// Size: 0x1C0(Inherited: 0x1C0)
struct UPropertyValueTransform : UPropertyValue
{


}; 
 
 


// Class VariantManagerContent.PropertyValueColor
// Size: 0x1C0(Inherited: 0x1C0)
struct UPropertyValueColor : UPropertyValue
{


}; 
 
 


// Class VariantManagerContent.PropertyValueOption
// Size: 0x1C0(Inherited: 0x1C0)
struct UPropertyValueOption : UPropertyValue
{


}; 
 
 


// Class VariantManagerContent.PropertyValueSoftObject
// Size: 0x1C0(Inherited: 0x1C0)
struct UPropertyValueSoftObject : UPropertyValue
{


}; 
 
 


// Class VariantManagerContent.SwitchActor
// Size: 0x2B8(Inherited: 0x290)
struct ASwitchActor : AActor
{
	char pad_656[24];  // 0x290 (0x290)
	struct USceneComponent* SceneComponent;  // 0x2A8 (0x2A8)
	int32_t LastSelectedOption;  // 0x2B0 (0x2B0)
	char pad_692[4];  // 0x2B4 (0x2B4)


	void SelectOption(int32_t OptionIndex); // Function VariantManagerContent.SwitchActor.SelectOption
	int32_t GetSelectedOption(); // Function VariantManagerContent.SwitchActor.GetSelectedOption
	struct TArray<struct AActor*> GetOptions(); // Function VariantManagerContent.SwitchActor.GetOptions
}; 
 
 


// Class VariantManagerContent.Variant
// Size: 0x80(Inherited: 0x28)
struct UVariant : UObject
{
	struct TArray<struct FVariantDependency> Dependencies;  // 0x28 (0x28)
	struct FText DisplayText;  // 0x38 (0x38)
	char pad_80[24];  // 0x50 (0x50)
	struct TArray<struct UVariantObjectBinding*> ObjectBindings;  // 0x68 (0x68)
	struct UTexture2D* Thumbnail;  // 0x78 (0x78)


	void SwitchOn(); // Function VariantManagerContent.Variant.SwitchOn
	void SetThumbnailFromTexture(struct UTexture2D* NewThumbnail); // Function VariantManagerContent.Variant.SetThumbnailFromTexture
	void SetThumbnailFromFile(struct FString FilePath); // Function VariantManagerContent.Variant.SetThumbnailFromFile
	void SetThumbnailFromEditorViewport(); // Function VariantManagerContent.Variant.SetThumbnailFromEditorViewport
	void SetThumbnailFromCamera(struct UObject* WorldContextObject, struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // Function VariantManagerContent.Variant.SetThumbnailFromCamera
	void SetDisplayText(struct FText& NewDisplayText); // Function VariantManagerContent.Variant.SetDisplayText
	void SetDependency(int32_t Index, struct FVariantDependency& Dependency); // Function VariantManagerContent.Variant.SetDependency
	bool IsActive(); // Function VariantManagerContent.Variant.IsActive
	struct UTexture2D* GetThumbnail(); // Function VariantManagerContent.Variant.GetThumbnail
	struct UVariantSet* GetParent(); // Function VariantManagerContent.Variant.GetParent
	int32_t GetNumDependencies(); // Function VariantManagerContent.Variant.GetNumDependencies
	int32_t GetNumActors(); // Function VariantManagerContent.Variant.GetNumActors
	struct FText GetDisplayText(); // Function VariantManagerContent.Variant.GetDisplayText
	struct TArray<struct UVariant*> GetDependents(struct ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies); // Function VariantManagerContent.Variant.GetDependents
	struct FVariantDependency GetDependency(int32_t Index); // Function VariantManagerContent.Variant.GetDependency
	struct AActor* GetActor(int32_t ActorIndex); // Function VariantManagerContent.Variant.GetActor
	void DeleteDependency(int32_t Index); // Function VariantManagerContent.Variant.DeleteDependency
	int32_t AddDependency(struct FVariantDependency& Dependency); // Function VariantManagerContent.Variant.AddDependency
}; 
 
 


// Class VariantManagerContent.VariantObjectBinding
// Size: 0x98(Inherited: 0x28)
struct UVariantObjectBinding : UObject
{
	struct FString CachedActorLabel;  // 0x28 (0x28)
	struct FSoftObjectPath ObjectPtr;  // 0x38 (0x38)
	 LazyObjectPtr;  // 0x58 (0x58)
	char pad_116[4];  // 0x74 (0x74)
	struct TArray<struct UPropertyValue*> CapturedProperties;  // 0x78 (0x78)
	struct TArray<struct FFunctionCaller> FunctionCallers;  // 0x88 (0x88)


}; 
 
 


// Class VariantManagerContent.VariantSet
// Size: 0x78(Inherited: 0x28)
struct UVariantSet : UObject
{
	struct FText DisplayText;  // 0x28 (0x28)
	char pad_64[24];  // 0x40 (0x40)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool bExpanded : 1;  // 0x58 (0x58)
	char pad_89[7];  // 0x59 (0x59)
	struct TArray<struct UVariant*> Variants;  // 0x60 (0x60)
	struct UTexture2D* Thumbnail;  // 0x70 (0x70)


	void SetThumbnailFromTexture(struct UTexture2D* NewThumbnail); // Function VariantManagerContent.VariantSet.SetThumbnailFromTexture
	void SetThumbnailFromFile(struct FString FilePath); // Function VariantManagerContent.VariantSet.SetThumbnailFromFile
	void SetThumbnailFromEditorViewport(); // Function VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
	void SetThumbnailFromCamera(struct UObject* WorldContextObject, struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // Function VariantManagerContent.VariantSet.SetThumbnailFromCamera
	void SetDisplayText(struct FText& NewDisplayText); // Function VariantManagerContent.VariantSet.SetDisplayText
	struct UVariant* GetVariantByName(struct FString VariantName); // Function VariantManagerContent.VariantSet.GetVariantByName
	struct UVariant* GetVariant(int32_t VariantIndex); // Function VariantManagerContent.VariantSet.GetVariant
	struct UTexture2D* GetThumbnail(); // Function VariantManagerContent.VariantSet.GetThumbnail
	struct ULevelVariantSets* GetParent(); // Function VariantManagerContent.VariantSet.GetParent
	int32_t GetNumVariants(); // Function VariantManagerContent.VariantSet.GetNumVariants
	struct FText GetDisplayText(); // Function VariantManagerContent.VariantSet.GetDisplayText
}; 
 
 


