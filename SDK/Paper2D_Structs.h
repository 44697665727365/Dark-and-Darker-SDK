#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct Paper2D.IntMargin
struct FIntMargin
{
	int32_t Left;  // 0x0 (0x0)
	int32_t Top;  // 0x4 (0x4)
	int32_t Right;  // 0x8 (0x8)
	int32_t Bottom;  // 0xC (0xC)


}; 
 
 // ScriptStruct Paper2D.SpriteGeometryCollection
struct FSpriteGeometryCollection
{
	struct TArray<struct FSpriteGeometryShape> Shapes;  // 0x0 (0x0)
	enum class ESpritePolygonMode GeometryType;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	int32_t PixelsPerSubdivisionX;  // 0x14 (0x14)
	int32_t PixelsPerSubdivisionY;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bAvoidVertexMerging : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	float AlphaThreshold;  // 0x20 (0x20)
	float DetailAmount;  // 0x24 (0x24)
	float SimplifyEpsilon;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // ScriptStruct Paper2D.SpriteInstanceData
struct FSpriteInstanceData
{
	struct FMatrix Transform;  // 0x0 (0x0)
	struct UPaperSprite* SourceSprite;  // 0x80 (0x80)
	struct FColor VertexColor;  // 0x88 (0x88)
	int32_t MaterialIndex;  // 0x8C (0x8C)


}; 
 
 // ScriptStruct Paper2D.PaperFlipbookKeyFrame
struct FPaperFlipbookKeyFrame
{
	struct UPaperSprite* Sprite;  // 0x0 (0x0)
	int32_t FrameRun;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
struct FOnRep_SourceFlipbook
{
	struct UPaperFlipbook* OldFlipbook;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperTileMapComponent.SetTile
struct FSetTile
{
	int32_t X;  // 0x0 (0x0)
	int32_t Y;  // 0x4 (0x4)
	int32_t Layer;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FPaperTileInfo NewValue;  // 0x10 (0x10)


}; 
 
 // Function Paper2D.PaperTileMapComponent.GetLayerColor
struct FGetLayerColor
{
	int32_t Layer;  // 0x0 (0x0)
	struct FLinearColor ReturnValue;  // 0x4 (0x4)


}; 
 
 // Function Paper2D.PaperFlipbookComponent.GetPlayRate
struct FGetPlayRate
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Paper2D.SpriteDrawCallRecord
struct FSpriteDrawCallRecord
{
	struct FVector Destination;  // 0x0 (0x0)
	struct UTexture* BaseTexture;  // 0x18 (0x18)
	char pad_32[48];  // 0x20 (0x20)
	struct FColor Color;  // 0x50 (0x50)
	char pad_84[236];  // 0x54 (0x54)


}; 
 
 // ScriptStruct Paper2D.PaperSpriteSocket
struct FPaperSpriteSocket
{
	struct FTransform LocalTransform;  // 0x0 (0x0)
	struct FName SocketName;  // 0x60 (0x60)
	char pad_104[8];  // 0x68 (0x68)


}; 
 
 // Function Paper2D.PaperFlipbookComponent.GetSpriteColor
struct FGetSpriteColor
{
	struct FLinearColor ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Paper2D.PaperTerrainMaterialRule
struct FPaperTerrainMaterialRule
{
	struct UPaperSprite* StartCap;  // 0x0 (0x0)
	struct TArray<struct UPaperSprite*> Body;  // 0x8 (0x8)
	struct UPaperSprite* EndCap;  // 0x18 (0x18)
	float MinimumAngle;  // 0x20 (0x20)
	float MaximumAngle;  // 0x24 (0x24)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bEnableCollision : 1;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	float CollisionOffset;  // 0x2C (0x2C)
	int32_t DrawOrder;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // ScriptStruct Paper2D.SpriteGeometryShape
struct FSpriteGeometryShape
{
	uint8_t ShapeType;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct TArray<struct FVector2D> Vertices;  // 0x8 (0x8)
	struct FVector2D BoxSize;  // 0x18 (0x18)
	struct FVector2D BoxPosition;  // 0x28 (0x28)
	float Rotation;  // 0x38 (0x38)
	char pad_60_1 : 7;  // 0x3C (0x3C)
	bool bNegativeWinding : 1;  // 0x3C (0x3C)
	char pad_61[3];  // 0x3D (0x3D)


}; 
 
 // ScriptStruct Paper2D.SpriteAssetInitParameters
struct FSpriteAssetInitParameters
{
	char pad_0[64];  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
struct FSetDefaultCollisionThickness
{
	float Thickness;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bRebuildCollision : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function Paper2D.PaperSpriteComponent.GetSprite
struct FGetSprite
{
	struct UPaperSprite* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperTileMapComponent.GetTilePolygon
struct FGetTilePolygon
{
	int32_t TileX;  // 0x0 (0x0)
	int32_t TileY;  // 0x4 (0x4)
	struct TArray<struct FVector> Points;  // 0x8 (0x8)
	int32_t LayerIndex;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool bWorldSpace : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)


}; 
 
 // Function Paper2D.PaperFlipbookComponent.SetPlayRate
struct FSetPlayRate
{
	float NewRate;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperTerrainComponent.SetTerrainColor
struct FSetTerrainColor
{
	struct FLinearColor NewColor;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Paper2D.PaperSpriteAtlasSlot
struct FPaperSpriteAtlasSlot
{
	struct TSoftObjectPtr<UPaperSprite> SpriteRef;  // 0x0 (0x0)
	int32_t AtlasIndex;  // 0x30 (0x30)
	int32_t X;  // 0x34 (0x34)
	int32_t Y;  // 0x38 (0x38)
	int32_t Width;  // 0x3C (0x3C)
	int32_t Height;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)


}; 
 
 // ScriptStruct Paper2D.PaperTileInfo
struct FPaperTileInfo
{
	struct UPaperTileSet* TileSet;  // 0x0 (0x0)
	int32_t PackedTileIndex;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)


}; 
 
 // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
struct FGetInstanceTransform
{
	int32_t InstanceIndex;  // 0x0 (0x0)
	char pad_4[12];  // 0x4 (0x4)
	struct FTransform OutInstanceTransform;  // 0x10 (0x10)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bWorldSpace : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool ReturnValue : 1;  // 0x71 (0x71)
	char pad_114[14];  // 0x72 (0x72)


}; 
 
 // ScriptStruct Paper2D.PaperTileMetadata
struct FPaperTileMetadata
{
	struct FName UserDataName;  // 0x0 (0x0)
	struct FSpriteGeometryCollection CollisionData;  // 0x8 (0x8)
	char TerrainMembership[4];  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 // Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
struct FMakeBrushFromSprite
{
	struct UPaperSprite* Sprite;  // 0x0 (0x0)
	int32_t Width;  // 0x8 (0x8)
	int32_t Height;  // 0xC (0xC)
	struct FSlateBrush ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Paper2D.PaperTileSetTerrain
struct FPaperTileSetTerrain
{
	struct FString TerrainName;  // 0x0 (0x0)
	int32_t CenterTileIndex;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
struct FGetKeyFrameIndexAtTime
{
	float Time;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bClampToEnds : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	int32_t ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function Paper2D.PaperFlipbook.GetNumFrames
struct FGetNumFrames
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperGroupedSpriteComponent.AddInstance
struct FAddInstance
{
	struct FTransform Transform;  // 0x0 (0x0)
	struct UPaperSprite* Sprite;  // 0x60 (0x60)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool bWorldSpace : 1;  // 0x68 (0x68)
	char pad_105[3];  // 0x69 (0x69)
	struct FLinearColor Color;  // 0x6C (0x6C)
	int32_t ReturnValue;  // 0x7C (0x7C)


}; 
 
 // Function Paper2D.PaperFlipbookComponent.SetLooping
struct FSetLooping
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bNewLooping : 1;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperFlipbook.GetNumKeyFrames
struct FGetNumKeyFrames
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperFlipbook.GetSpriteAtFrame
struct FGetSpriteAtFrame
{
	int32_t FrameIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UPaperSprite* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function Paper2D.PaperFlipbook.GetSpriteAtTime
struct FGetSpriteAtTime
{
	float Time;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bClampToEnds : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct UPaperSprite* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
struct FIsValidKeyFrameIndex
{
	int32_t Index;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function Paper2D.PaperFlipbook.GetTotalDuration
struct FGetTotalDuration
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
struct FGetFlipbookLength
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperFlipbookComponent.GetFlipbook
struct FGetFlipbook
{
	struct UPaperFlipbook* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
struct FGetFlipbookLengthInFrames
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
struct FGetFlipbookFramerate
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
struct FGetPlaybackPosition
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
struct FGetPlaybackPositionInFrames
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperTileMapComponent.ResizeMap
struct FResizeMap
{
	int32_t NewWidthInTiles;  // 0x0 (0x0)
	int32_t NewHeightInTiles;  // 0x4 (0x4)


}; 
 
 // Function Paper2D.PaperFlipbookComponent.IsLooping
struct FIsLooping
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperSpriteComponent.SetSpriteColor
struct FSetSpriteColor
{
	struct FLinearColor NewColor;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperFlipbookComponent.IsPlaying
struct FIsPlaying
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
struct FUpdateInstanceColor
{
	int32_t InstanceIndex;  // 0x0 (0x0)
	struct FLinearColor NewInstanceColor;  // 0x4 (0x4)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bMarkRenderStateDirty : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool ReturnValue : 1;  // 0x15 (0x15)
	char pad_22[2];  // 0x16 (0x16)


}; 
 
 // Function Paper2D.PaperFlipbookComponent.IsReversing
struct FIsReversing
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperFlipbookComponent.SetFlipbook
struct FSetFlipbook
{
	struct UPaperFlipbook* NewFlipbook;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function Paper2D.PaperTileMapComponent.GetTileMapColor
struct FGetTileMapColor
{
	struct FLinearColor ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperFlipbookComponent.SetNewTime
struct FSetNewTime
{
	float NewTime;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperTileMapComponent.CreateNewTileMap
struct FCreateNewTileMap
{
	int32_t MapWidth;  // 0x0 (0x0)
	int32_t MapHeight;  // 0x4 (0x4)
	int32_t TileWidth;  // 0x8 (0x8)
	int32_t TileHeight;  // 0xC (0xC)
	float PixelsPerUnrealUnit;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bCreateLayer : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
struct FSetPlaybackPosition
{
	float NewPosition;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bFireEvents : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
struct FUpdateInstanceTransform
{
	int32_t InstanceIndex;  // 0x0 (0x0)
	char pad_4[12];  // 0x4 (0x4)
	struct FTransform NewInstanceTransform;  // 0x10 (0x10)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bWorldSpace : 1;  // 0x70 (0x70)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool bMarkRenderStateDirty : 1;  // 0x71 (0x71)
	char pad_114_1 : 7;  // 0x72 (0x72)
	bool bTeleport : 1;  // 0x72 (0x72)
	char pad_115_1 : 7;  // 0x73 (0x73)
	bool ReturnValue : 1;  // 0x73 (0x73)
	char pad_116[12];  // 0x74 (0x74)


}; 
 
 // Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
struct FSetPlaybackPositionInFrames
{
	int32_t NewFramePosition;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bFireEvents : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
struct FGetInstanceCount
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
struct FRemoveInstance
{
	int32_t InstanceIndex;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)


}; 
 
 // Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
struct FSortInstancesAlongAxis
{
	struct FVector WorldSpaceSortAxis;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
struct FGetTileCornerPosition
{
	int32_t TileX;  // 0x0 (0x0)
	int32_t TileY;  // 0x4 (0x4)
	int32_t LayerIndex;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bWorldSpace : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct FVector ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Paper2D.PaperSpriteComponent.SetSprite
struct FSetSprite
{
	struct UPaperSprite* NewSprite;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function Paper2D.PaperTileMapComponent.AddNewLayer
struct FAddNewLayer
{
	struct UPaperTileLayer* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperTileMapComponent.GetMapSize
struct FGetMapSize
{
	int32_t MapWidth;  // 0x0 (0x0)
	int32_t MapHeight;  // 0x4 (0x4)
	int32_t NumLayers;  // 0x8 (0x8)


}; 
 
 // Function Paper2D.PaperTileMapComponent.GetTile
struct FGetTile
{
	int32_t X;  // 0x0 (0x0)
	int32_t Y;  // 0x4 (0x4)
	int32_t Layer;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FPaperTileInfo ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
struct FGetTileCenterPosition
{
	int32_t TileX;  // 0x0 (0x0)
	int32_t TileY;  // 0x4 (0x4)
	int32_t LayerIndex;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bWorldSpace : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct FVector ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Paper2D.PaperTileMapComponent.OwnsTileMap
struct FOwnsTileMap
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.PaperTileMapComponent.SetLayerCollision
struct FSetLayerCollision
{
	int32_t Layer;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bHasCollision : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool bOverrideThickness : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)
	float CustomThickness;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bOverrideOffset : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	float CustomOffset;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bRebuildCollision : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function Paper2D.PaperTileMapComponent.SetLayerColor
struct FSetLayerColor
{
	struct FLinearColor NewColor;  // 0x0 (0x0)
	int32_t Layer;  // 0x10 (0x10)


}; 
 
 // Function Paper2D.PaperTileMapComponent.SetTileMap
struct FSetTileMap
{
	struct UPaperTileMap* NewTileMap;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function Paper2D.PaperTileMapComponent.SetTileMapColor
struct FSetTileMapColor
{
	struct FLinearColor NewColor;  // 0x0 (0x0)


}; 
 
 // Function Paper2D.TileMapBlueprintLibrary.BreakTile
struct FBreakTile
{
	struct FPaperTileInfo Tile;  // 0x0 (0x0)
	int32_t TileIndex;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct UPaperTileSet* TileSet;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bFlipH : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool bFlipV : 1;  // 0x21 (0x21)
	char pad_34_1 : 7;  // 0x22 (0x22)
	bool bFlipD : 1;  // 0x22 (0x22)
	char pad_35[5];  // 0x23 (0x23)


}; 
 
 // Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
struct FGetTileTransform
{
	struct FPaperTileInfo Tile;  // 0x0 (0x0)
	struct FTransform ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
struct FGetTileUserData
{
	struct FPaperTileInfo Tile;  // 0x0 (0x0)
	struct FName ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Paper2D.TileMapBlueprintLibrary.MakeTile
struct FMakeTile
{
	int32_t TileIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct UPaperTileSet* TileSet;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bFlipH : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool bFlipV : 1;  // 0x11 (0x11)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool bFlipD : 1;  // 0x12 (0x12)
	char pad_19[5];  // 0x13 (0x13)
	struct FPaperTileInfo ReturnValue;  // 0x18 (0x18)


}; 
 
 