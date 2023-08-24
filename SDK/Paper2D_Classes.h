#pragma once 
#include <Paper2D_Structs.h>
 
 
 
// Class Paper2D.PaperCharacter
// Size: 0x620(Inherited: 0x620)
struct APaperCharacter : ACharacter
{
	struct UPaperFlipbookComponent* Sprite;  // 0x618 (0x618)


}; 
 
 


// Class Paper2D.PaperFlipbookComponent
// Size: 0x5C0(Inherited: 0x570)
struct UPaperFlipbookComponent : UMeshComponent
{
	struct UPaperFlipbook* SourceFlipbook;  // 0x570 (0x570)
	struct UMaterialInterface* Material;  // 0x578 (0x578)
	float PlayRate;  // 0x580 (0x580)
	char bLooping : 1;  // 0x584 (0x584)
	char bReversePlayback : 1;  // 0x584 (0x584)
	char bPlaying : 1;  // 0x584 (0x584)
	char pad_1412_1 : 5;  // 0x584 (0x584)
	char pad_1413[4];  // 0x585 (0x585)
	float AccumulatedTime;  // 0x588 (0x588)
	int32_t CachedFrameIndex;  // 0x58C (0x58C)
	struct FLinearColor SpriteColor;  // 0x590 (0x590)
	struct UBodySetup* CachedBodySetup;  // [x5A0 ([x5A0)
	struct FMulticastInlineDelegate OnFinishedPlaying;  // 0x5A8 (0x5A8)
	char pad_1464[8];  // 0x5B8 (0x5B8)


	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop
	void SetSpriteColor(struct FLinearColor NewColor); // Function Paper2D.PaperFlipbookComponent.SetSpriteColor
	void SetPlayRate(float NewRate); // Function Paper2D.PaperFlipbookComponent.SetPlayRate
	void SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
	void SetPlaybackPosition(float NewPosition, bool bFireEvents); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
	void SetNewTime(float NewTime); // Function Paper2D.PaperFlipbookComponent.SetNewTime
	void SetLooping(bool bNewLooping); // Function Paper2D.PaperFlipbookComponent.SetLooping
	bool SetFlipbook(struct UPaperFlipbook* NewFlipbook); // Function Paper2D.PaperFlipbookComponent.SetFlipbook
	void ReverseFromEnd(); // Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
	void Reverse(); // Function Paper2D.PaperFlipbookComponent.Reverse
	void PlayFromStart(); // Function Paper2D.PaperFlipbookComponent.PlayFromStart
	void Play(); // Function Paper2D.PaperFlipbookComponent.Play
	void OnRep_SourceFlipbook(struct UPaperFlipbook* OldFlipbook); // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
	bool IsReversing(); // Function Paper2D.PaperFlipbookComponent.IsReversing
	bool IsPlaying(); // Function Paper2D.PaperFlipbookComponent.IsPlaying
	bool IsLooping(); // Function Paper2D.PaperFlipbookComponent.IsLooping
	struct FLinearColor GetSpriteColor(); // Function Paper2D.PaperFlipbookComponent.GetSpriteColor
	float GetPlayRate(); // Function Paper2D.PaperFlipbookComponent.GetPlayRate
	int32_t GetPlaybackPositionInFrames(); // Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
	float GetPlaybackPosition(); // Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
	int32_t GetFlipbookLengthInFrames(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
	float GetFlipbookLength(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
	float GetFlipbookFramerate(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
	struct UPaperFlipbook* GetFlipbook(); // Function Paper2D.PaperFlipbookComponent.GetFlipbook
}; 
 
 


// Class Paper2D.PaperFlipbook
// Size: 0x50(Inherited: 0x28)
struct UPaperFlipbook : UObject
{
	float FramesPerSecond;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct TArray<struct FPaperFlipbookKeyFrame> KeyFrames;  // 0x30 (0x30)
	struct UMaterialInterface* DefaultMaterial;  // 0x40 (0x40)
	enum class EFlipbookCollisionMode CollisionSource;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)


	bool IsValidKeyFrameIndex(int32_t Index); // Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
	float GetTotalDuration(); // Function Paper2D.PaperFlipbook.GetTotalDuration
	struct UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds); // Function Paper2D.PaperFlipbook.GetSpriteAtTime
	struct UPaperSprite* GetSpriteAtFrame(int32_t FrameIndex); // Function Paper2D.PaperFlipbook.GetSpriteAtFrame
	int32_t GetNumKeyFrames(); // Function Paper2D.PaperFlipbook.GetNumKeyFrames
	int32_t GetNumFrames(); // Function Paper2D.PaperFlipbook.GetNumFrames
	int32_t GetKeyFrameIndexAtTime(float Time, bool bClampToEnds); // Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
}; 
 
 


// Class Paper2D.PaperSprite
// Size: 0xB8(Inherited: 0x28)
struct UPaperSprite : UObject
{
	char pad_40[16];  // 0x28 (0x28)
	struct TArray<struct UTexture*> AdditionalSourceTextures;  // 0x38 (0x38)
	struct FVector2D BakedSourceUV;  // 0x48 (0x48)
	struct FVector2D BakedSourceDimension;  // 0x58 (0x58)
	struct UTexture2D* BakedSourceTexture;  // 0x68 (0x68)
	struct UMaterialInterface* DefaultMaterial;  // 0x70 (0x70)
	struct UMaterialInterface* AlternateMaterial;  // 0x78 (0x78)
	struct TArray<struct FPaperSpriteSocket> Sockets;  // 0x80 (0x80)
	enum class ESpriteCollisionMode SpriteCollisionDomain;  // 0x90 (0x90)
	char pad_145[3];  // 0x91 (0x91)
	float PixelsPerUnrealUnit;  // 0x94 (0x94)
	struct UBodySetup* BodySetup;  // 0x98 (0x98)
	int32_t AlternateMaterialSplitIndex;  // 0xA0 (0xA0)
	char pad_164[4];  // 0xA4 (0xA4)
	struct TArray<struct FVector4> BakedRenderData;  // 0xA8 (0xA8)


}; 
 
 


// Class Paper2D.PaperFlipbookActor
// Size: 0x298(Inherited: 0x290)
struct APaperFlipbookActor : AActor
{
	struct UPaperFlipbookComponent* RenderComponent;  // 0x290 (0x290)


}; 
 
 


// Class Paper2D.PaperTerrainSplineComponent
// Size: 0x650(Inherited: 0x640)
struct UPaperTerrainSplineComponent : USplineComponent
{
	char pad_1600[16];  // 0x640 (0x640)


}; 
 
 


// Class Paper2D.PaperGroupedSpriteActor
// Size: 0x298(Inherited: 0x290)
struct APaperGroupedSpriteActor : AActor
{
	struct UPaperGroupedSpriteComponent* RenderComponent;  // 0x290 (0x290)


}; 
 
 


// Class Paper2D.PaperTerrainComponent
// Size: 0x590(Inherited: 0x540)
struct UPaperTerrainComponent : UPrimitiveComponent
{
	struct UPaperTerrainMaterial* TerrainMaterial;  // 0x538 (0x538)
	char pad_1352_1 : 7;  // 0x548 (0x548)
	bool bClosedSpline : 1;  // 0x540 (0x540)
	char pad_1353_1 : 7;  // 0x549 (0x549)
	bool bFilledSpline : 1;  // 0x541 (0x541)
	struct UPaperTerrainSplineComponent* AssociatedSpline;  // 0x548 (0x548)
	int32_t RandomSeed;  // 0x550 (0x550)
	float SegmentOverlapAmount;  // 0x554 (0x554)
	struct FLinearColor TerrainColor;  // 0x558 (0x558)
	int32_t ReparamStepsPerSegment;  // 0x568 (0x568)
	enum class ESpriteCollisionMode SpriteCollisionDomain;  // 0x56C (0x56C)
	char pad_1391[1];  // 0x56F (0x56F)
	float CollisionThickness;  // 0x570 (0x570)
	char pad_1396[4];  // 0x574 (0x574)
	struct UBodySetup* CachedBodySetup;  // 0x578 (0x578)
	char pad_1408[16];  // 0x580 (0x580)


	void SetTerrainColor(struct FLinearColor NewColor); // Function Paper2D.PaperTerrainComponent.SetTerrainColor
}; 
 
 


// Class Paper2D.MaterialExpressionSpriteTextureSampler
// Size: 0x260(Inherited: 0x240)
struct UMaterialExpressionSpriteTextureSampler : UMaterialExpressionTextureSampleParameter2D
{
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool bSampleAdditionalTextures : 1;  // 0x240 (0x240)
	char pad_577[3];  // 0x241 (0x241)
	int32_t AdditionalSlotIndex;  // 0x244 (0x244)
	struct FText SlotDisplayName;  // 0x248 (0x248)


}; 
 
 


// Class Paper2D.PaperGroupedSpriteComponent
// Size: 0x5A0(Inherited: 0x570)
struct UPaperGroupedSpriteComponent : UMeshComponent
{
	struct TArray<struct UMaterialInterface*> InstanceMaterials;  // 0x570 (0x570)
	struct TArray<struct FSpriteInstanceData> PerInstanceSpriteData;  // 0x580 (0x580)
	char pad_1424[16];  // 0x590 (0x590)


	bool UpdateInstanceTransform(int32_t InstanceIndex, struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
	bool UpdateInstanceColor(int32_t InstanceIndex, struct FLinearColor NewInstanceColor, bool bMarkRenderStateDirty); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
	void SortInstancesAlongAxis(struct FVector WorldSpaceSortAxis); // Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
	bool RemoveInstance(int32_t InstanceIndex); // Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
	bool GetInstanceTransform(int32_t InstanceIndex, struct FTransform& OutInstanceTransform, bool bWorldSpace); // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
	int32_t GetInstanceCount(); // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
	void ClearInstances(); // Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
	int32_t AddInstance(struct FTransform& Transform, struct UPaperSprite* Sprite, bool bWorldSpace, struct FLinearColor Color); // Function Paper2D.PaperGroupedSpriteComponent.AddInstance
}; 
 
 


// Class Paper2D.PaperRuntimeSettings
// Size: 0x30(Inherited: 0x28)
struct UPaperRuntimeSettings : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bEnableSpriteAtlasGroups : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool bEnableTerrainSplineEditing : 1;  // 0x29 (0x29)
	char pad_42_1 : 7;  // 0x2A (0x2A)
	bool bResizeSpriteDataToMatchTextures : 1;  // 0x2A (0x2A)
	char pad_43[5];  // 0x2B (0x2B)


}; 
 
 


// Class Paper2D.PaperSpriteActor
// Size: 0x298(Inherited: 0x290)
struct APaperSpriteActor : AActor
{
	struct UPaperSpriteComponent* RenderComponent;  // 0x290 (0x290)


}; 
 
 


// Class Paper2D.PaperSpriteAtlas
// Size: 0x28(Inherited: 0x28)
struct UPaperSpriteAtlas : UObject
{


}; 
 
 


// Class Paper2D.PaperSpriteBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct UPaperSpriteBlueprintLibrary : UBlueprintFunctionLibrary
{


	struct FSlateBrush MakeBrushFromSprite(struct UPaperSprite* Sprite, int32_t Width, int32_t Height); // Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
}; 
 
 


// Class Paper2D.PaperSpriteComponent
// Size: 0x590(Inherited: 0x570)
struct UPaperSpriteComponent : UMeshComponent
{
	struct UPaperSprite* SourceSprite;  // 0x570 (0x570)
	struct UMaterialInterface* MaterialOverride;  // 0x578 (0x578)
	struct FLinearColor SpriteColor;  // 0x580 (0x580)


	void SetSpriteColor(struct FLinearColor NewColor); // Function Paper2D.PaperSpriteComponent.SetSpriteColor
	bool SetSprite(struct UPaperSprite* NewSprite); // Function Paper2D.PaperSpriteComponent.SetSprite
	struct UPaperSprite* GetSprite(); // Function Paper2D.PaperSpriteComponent.GetSprite
}; 
 
 


// Class Paper2D.PaperTileLayer
// Size: 0x98(Inherited: 0x28)
struct UPaperTileLayer : UObject
{
	struct FText LayerName;  // 0x28 (0x28)
	int32_t LayerWidth;  // 0x40 (0x40)
	int32_t LayerHeight;  // 0x44 (0x44)
	char bHiddenInGame : 1;  // 0x48 (0x48)
	char bLayerCollides : 1;  // 0x48 (0x48)
	char bOverrideCollisionThickness : 1;  // 0x48 (0x48)
	char bOverrideCollisionOffset : 1;  // 0x48 (0x48)
	char pad_72_1 : 4;  // 0x48 (0x48)
	char pad_73[4];  // 0x49 (0x49)
	float CollisionThicknessOverride;  // 0x4C (0x4C)
	float CollisionOffsetOverride;  // 0x50 (0x50)
	struct FLinearColor LayerColor;  // 0x54 (0x54)
	int32_t AllocatedWidth;  // 0x64 (0x64)
	int32_t AllocatedHeight;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)
	struct TArray<struct FPaperTileInfo> AllocatedCells;  // 0x70 (0x70)
	struct UPaperTileSet* TileSet;  // 0x80 (0x80)
	struct TArray<int32_t> AllocatedGrid;  // 0x88 (0x88)


}; 
 
 


// Class Paper2D.PaperTerrainActor
// Size: 0x2A8(Inherited: 0x290)
struct APaperTerrainActor : AActor
{
	struct USceneComponent* DummyRoot;  // 0x290 (0x290)
	struct UPaperTerrainSplineComponent* SplineComponent;  // 0x298 (0x298)
	struct UPaperTerrainComponent* RenderComponent;  // 0x2A0 (0x2A0)


}; 
 
 


// Class Paper2D.PaperTileMapComponent
// Size: 0x5C0(Inherited: 0x570)
struct UPaperTileMapComponent : UMeshComponent
{
	int32_t MapWidth;  // 0x570 (0x570)
	int32_t MapHeight;  // 0x574 (0x574)
	int32_t TileWidth;  // 0x578 (0x578)
	int32_t TileHeight;  // 0x57C (0x57C)
	struct UPaperTileSet* DefaultLayerTileSet;  // 0x580 (0x580)
	struct UMaterialInterface* Material;  // 0x588 (0x588)
	struct TArray<struct UPaperTileLayer*> TileLayers;  // 0x590 (0x590)
	struct FLinearColor TileMapColor;  // 0x5A0 (0x5A0)
	int32_t UseSingleLayerIndex;  // 0x5B0 (0x5B0)
	char pad_1460_1 : 7;  // 0x5B4 (0x5B4)
	bool bUseSingleLayer : 1;  // 0x5B4 (0x5B4)
	char pad_1461[3];  // 0x5B5 (0x5B5)
	struct UPaperTileMap* TileMap;  // 0x5B8 (0x5B8)


	void SetTileMapColor(struct FLinearColor NewColor); // Function Paper2D.PaperTileMapComponent.SetTileMapColor
	bool SetTileMap(struct UPaperTileMap* NewTileMap); // Function Paper2D.PaperTileMapComponent.SetTileMap
	void SetTile(int32_t X, int32_t Y, int32_t Layer, struct FPaperTileInfo NewValue); // Function Paper2D.PaperTileMapComponent.SetTile
	void SetLayerColor(struct FLinearColor NewColor, int32_t Layer); // Function Paper2D.PaperTileMapComponent.SetLayerColor
	void SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision); // Function Paper2D.PaperTileMapComponent.SetLayerCollision
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision); // Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
	void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles); // Function Paper2D.PaperTileMapComponent.ResizeMap
	void RebuildCollision(); // Function Paper2D.PaperTileMapComponent.RebuildCollision
	bool OwnsTileMap(); // Function Paper2D.PaperTileMapComponent.OwnsTileMap
	void MakeTileMapEditable(); // Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
	void GetTilePolygon(int32_t TileX, int32_t TileY, struct TArray<struct FVector>& Points, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTilePolygon
	struct FLinearColor GetTileMapColor(); // Function Paper2D.PaperTileMapComponent.GetTileMapColor
	struct FVector GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
	struct FVector GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
	struct FPaperTileInfo GetTile(int32_t X, int32_t Y, int32_t Layer); // Function Paper2D.PaperTileMapComponent.GetTile
	void GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers); // Function Paper2D.PaperTileMapComponent.GetMapSize
	struct FLinearColor GetLayerColor(int32_t Layer); // Function Paper2D.PaperTileMapComponent.GetLayerColor
	void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer); // Function Paper2D.PaperTileMapComponent.CreateNewTileMap
	struct UPaperTileLayer* AddNewLayer(); // Function Paper2D.PaperTileMapComponent.AddNewLayer
}; 
 
 


// Class Paper2D.PaperTileMap
// Size: 0xB0(Inherited: 0x28)
struct UPaperTileMap : UObject
{
	int32_t MapWidth;  // 0x28 (0x28)
	int32_t MapHeight;  // 0x2C (0x2C)
	int32_t TileWidth;  // 0x30 (0x30)
	int32_t TileHeight;  // 0x34 (0x34)
	float PixelsPerUnrealUnit;  // 0x38 (0x38)
	float SeparationPerTileX;  // 0x3C (0x3C)
	float SeparationPerTileY;  // 0x40 (0x40)
	float SeparationPerLayer;  // 0x44 (0x44)
	struct TSoftObjectPtr<UPaperTileSet> SelectedTileSet;  // 0x48 (0x48)
	struct UMaterialInterface* Material;  // 0x78 (0x78)
	struct TArray<struct UPaperTileLayer*> TileLayers;  // 0x80 (0x80)
	float CollisionThickness;  // 0x90 (0x90)
	enum class ESpriteCollisionMode SpriteCollisionDomain;  // 0x94 (0x94)
	enum class ETileMapProjectionMode ProjectionMode;  // 0x95 (0x95)
	char pad_150[2];  // 0x96 (0x96)
	int32_t HexSideLength;  // 0x98 (0x98)
	char pad_156[4];  // 0x9C (0x9C)
	struct UBodySetup* BodySetup;  // 0xA0 (0xA0)
	int32_t LayerNameIndex;  // 0xA8 (0xA8)
	char pad_172[4];  // 0xAC (0xAC)


}; 
 
 


// Class Paper2D.PaperTileMapActor
// Size: 0x298(Inherited: 0x290)
struct APaperTileMapActor : AActor
{
	struct UPaperTileMapComponent* RenderComponent;  // 0x290 (0x290)


}; 
 
 


// Class Paper2D.PaperTileSet
// Size: 0xA8(Inherited: 0x28)
struct UPaperTileSet : UObject
{
	struct FIntPoint TileSize;  // 0x28 (0x28)
	struct UTexture2D* TileSheet;  // 0x30 (0x30)
	struct TArray<struct UTexture*> AdditionalSourceTextures;  // 0x38 (0x38)
	struct FIntMargin BorderMargin;  // 0x48 (0x48)
	struct FIntPoint PerTileSpacing;  // 0x58 (0x58)
	struct FIntPoint DrawingOffset;  // 0x60 (0x60)
	int32_t WidthInTiles;  // 0x68 (0x68)
	int32_t HeightInTiles;  // 0x6C (0x6C)
	int32_t AllocatedWidth;  // 0x70 (0x70)
	int32_t AllocatedHeight;  // 0x74 (0x74)
	struct TArray<struct FPaperTileMetadata> PerTileData;  // 0x78 (0x78)
	struct TArray<struct FPaperTileSetTerrain> Terrains;  // 0x88 (0x88)
	int32_t TileWidth;  // 0x98 (0x98)
	int32_t TileHeight;  // 0x9C (0x9C)
	int32_t Margin;  // 0xA0 (0xA0)
	int32_t Spacing;  // 0xA4 (0xA4)


}; 
 
 


// Class Paper2D.PaperTerrainMaterial
// Size: 0x48(Inherited: 0x30)
struct UPaperTerrainMaterial : UDataAsset
{
	struct TArray<struct FPaperTerrainMaterialRule> Rules;  // 0x30 (0x30)
	struct UPaperSprite* InteriorFill;  // 0x40 (0x40)


}; 
 
 


// Class Paper2D.TileMapBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct UTileMapBlueprintLibrary : UBlueprintFunctionLibrary
{


	struct FPaperTileInfo MakeTile(int32_t TileIndex, struct UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD); // Function Paper2D.TileMapBlueprintLibrary.MakeTile
	struct FName GetTileUserData(struct FPaperTileInfo Tile); // Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
	struct FTransform GetTileTransform(struct FPaperTileInfo Tile); // Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
	void BreakTile(struct FPaperTileInfo Tile, int32_t& TileIndex, struct UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD); // Function Paper2D.TileMapBlueprintLibrary.BreakTile
}; 
 
 


