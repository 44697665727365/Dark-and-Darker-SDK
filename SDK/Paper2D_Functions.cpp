#include "pch.h"
#include "SDK.h"

void UPaperFlipbookComponent::Stop(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Stop");

	FStop parms{};	

	ProcessEvent(fn, &parms);
}

void UPaperFlipbookComponent::SetSpriteColor(struct FLinearColor NewColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetSpriteColor");

	FSetSpriteColor parms{};	
	parms.NewColor = NewColor;

	ProcessEvent(fn, &parms);
}

void UPaperFlipbookComponent::SetPlayRate(float NewRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlayRate");

	FSetPlayRate parms{};	
	parms.NewRate = NewRate;

	ProcessEvent(fn, &parms);
}

void UPaperFlipbookComponent::SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames");

	FSetPlaybackPositionInFrames parms{};	
	parms.NewFramePosition = NewFramePosition;
	parms.bFireEvents = bFireEvents;

	ProcessEvent(fn, &parms);
}

void UPaperFlipbookComponent::SetPlaybackPosition(float NewPosition, bool bFireEvents){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition");

	FSetPlaybackPosition parms{};	
	parms.NewPosition = NewPosition;
	parms.bFireEvents = bFireEvents;

	ProcessEvent(fn, &parms);
}

void UPaperFlipbookComponent::SetNewTime(float NewTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetNewTime");

	FSetNewTime parms{};	
	parms.NewTime = NewTime;

	ProcessEvent(fn, &parms);
}

void UPaperFlipbookComponent::SetLooping(bool bNewLooping){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetLooping");

	FSetLooping parms{};	
	parms.bNewLooping = bNewLooping;

	ProcessEvent(fn, &parms);
}

bool UPaperFlipbookComponent::SetFlipbook(struct UPaperFlipbook* NewFlipbook){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetFlipbook");

	FSetFlipbook parms{};	
	parms.NewFlipbook = NewFlipbook;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UPaperFlipbookComponent::ReverseFromEnd(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.ReverseFromEnd");

	FReverseFromEnd parms{};	

	ProcessEvent(fn, &parms);
}

void UPaperFlipbookComponent::Reverse(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Reverse");

	FReverse parms{};	

	ProcessEvent(fn, &parms);
}

void UPaperFlipbookComponent::PlayFromStart(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.PlayFromStart");

	FPlayFromStart parms{};	

	ProcessEvent(fn, &parms);
}

void UPaperFlipbookComponent::Play(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Play");

	FPlay parms{};	

	ProcessEvent(fn, &parms);
}

void UPaperFlipbookComponent::OnRep_SourceFlipbook(struct UPaperFlipbook* OldFlipbook){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook");

	FOnRep_SourceFlipbook parms{};	
	parms.OldFlipbook = OldFlipbook;

	ProcessEvent(fn, &parms);
}

bool UPaperFlipbookComponent::IsReversing(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsReversing");

	FIsReversing parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPaperFlipbookComponent::IsPlaying(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsPlaying");

	FIsPlaying parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPaperFlipbookComponent::IsLooping(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsLooping");

	FIsLooping parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FLinearColor UPaperFlipbookComponent::GetSpriteColor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetSpriteColor");

	FGetSpriteColor parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UPaperFlipbookComponent::GetPlayRate(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlayRate");

	FGetPlayRate parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UPaperFlipbookComponent::GetPlaybackPositionInFrames(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames");

	FGetPlaybackPositionInFrames parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UPaperFlipbookComponent::GetPlaybackPosition(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition");

	FGetPlaybackPosition parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UPaperFlipbookComponent::GetFlipbookLengthInFrames(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames");

	FGetFlipbookLengthInFrames parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UPaperFlipbookComponent::GetFlipbookLength(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookLength");

	FGetFlipbookLength parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UPaperFlipbookComponent::GetFlipbookFramerate(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate");

	FGetFlipbookFramerate parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UPaperFlipbook* UPaperFlipbookComponent::GetFlipbook(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbook");

	FGetFlipbook parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPaperFlipbook::IsValidKeyFrameIndex(int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex");

	FIsValidKeyFrameIndex parms{};	
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UPaperFlipbook::GetTotalDuration(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetTotalDuration");

	FGetTotalDuration parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UPaperSprite* UPaperFlipbook::GetSpriteAtTime(float Time, bool bClampToEnds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetSpriteAtTime");

	FGetSpriteAtTime parms{};	
	parms.Time = Time;
	parms.bClampToEnds = bClampToEnds;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UPaperSprite* UPaperFlipbook::GetSpriteAtFrame(int32_t FrameIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetSpriteAtFrame");

	FGetSpriteAtFrame parms{};	
	parms.FrameIndex = FrameIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UPaperFlipbook::GetNumKeyFrames(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetNumKeyFrames");

	FGetNumKeyFrames parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UPaperFlipbook::GetNumFrames(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetNumFrames");

	FGetNumFrames parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UPaperFlipbook::GetKeyFrameIndexAtTime(float Time, bool bClampToEnds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime");

	FGetKeyFrameIndexAtTime parms{};	
	parms.Time = Time;
	parms.bClampToEnds = bClampToEnds;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UPaperTerrainComponent::SetTerrainColor(struct FLinearColor NewColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperTerrainComponent.SetTerrainColor");

	FSetTerrainColor parms{};	
	parms.NewColor = NewColor;

	ProcessEvent(fn, &parms);
}

bool UPaperGroupedSpriteComponent::UpdateInstanceTransform(int32_t InstanceIndex, struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform");

	FUpdateInstanceTransform parms{};	
	parms.InstanceIndex = InstanceIndex;
	parms.NewInstanceTransform = NewInstanceTransform;
	parms.bWorldSpace = bWorldSpace;
	parms.bMarkRenderStateDirty = bMarkRenderStateDirty;
	parms.bTeleport = bTeleport;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPaperGroupedSpriteComponent::UpdateInstanceColor(int32_t InstanceIndex, struct FLinearColor NewInstanceColor, bool bMarkRenderStateDirty){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor");

	FUpdateInstanceColor parms{};	
	parms.InstanceIndex = InstanceIndex;
	parms.NewInstanceColor = NewInstanceColor;
	parms.bMarkRenderStateDirty = bMarkRenderStateDirty;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UPaperGroupedSpriteComponent::SortInstancesAlongAxis(struct FVector WorldSpaceSortAxis){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis");

	FSortInstancesAlongAxis parms{};	
	parms.WorldSpaceSortAxis = WorldSpaceSortAxis;

	ProcessEvent(fn, &parms);
}

bool UPaperGroupedSpriteComponent::RemoveInstance(int32_t InstanceIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance");

	FRemoveInstance parms{};	
	parms.InstanceIndex = InstanceIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UPaperGroupedSpriteComponent::GetInstanceTransform(int32_t InstanceIndex, struct FTransform& OutInstanceTransform, bool bWorldSpace){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform");

	FGetInstanceTransform parms{};	
	parms.InstanceIndex = InstanceIndex;
	parms.OutInstanceTransform = OutInstanceTransform;
	parms.bWorldSpace = bWorldSpace;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UPaperGroupedSpriteComponent::GetInstanceCount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount");

	FGetInstanceCount parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UPaperGroupedSpriteComponent::ClearInstances(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.ClearInstances");

	FClearInstances parms{};	

	ProcessEvent(fn, &parms);
}

int32_t UPaperGroupedSpriteComponent::AddInstance(struct FTransform& Transform, struct UPaperSprite* Sprite, bool bWorldSpace, struct FLinearColor Color){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.AddInstance");

	FAddInstance parms{};	
	parms.Transform = Transform;
	parms.Sprite = Sprite;
	parms.bWorldSpace = bWorldSpace;
	parms.Color = Color;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSlateBrush UPaperSpriteBlueprintLibrary::MakeBrushFromSprite(struct UPaperSprite* Sprite, int32_t Width, int32_t Height){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite");

	FMakeBrushFromSprite parms{};	
	parms.Sprite = Sprite;
	parms.Width = Width;
	parms.Height = Height;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UPaperSpriteComponent::SetSpriteColor(struct FLinearColor NewColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.SetSpriteColor");

	FSetSpriteColor parms{};	
	parms.NewColor = NewColor;

	ProcessEvent(fn, &parms);
}

bool UPaperSpriteComponent::SetSprite(struct UPaperSprite* NewSprite){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.SetSprite");

	FSetSprite parms{};	
	parms.NewSprite = NewSprite;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UPaperSprite* UPaperSpriteComponent::GetSprite(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.GetSprite");

	FGetSprite parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UPaperTileMapComponent::SetTileMapColor(struct FLinearColor NewColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTileMapColor");

	FSetTileMapColor parms{};	
	parms.NewColor = NewColor;

	ProcessEvent(fn, &parms);
}

bool UPaperTileMapComponent::SetTileMap(struct UPaperTileMap* NewTileMap){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTileMap");

	FSetTileMap parms{};	
	parms.NewTileMap = NewTileMap;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UPaperTileMapComponent::SetTile(int32_t X, int32_t Y, int32_t Layer, struct FPaperTileInfo NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTile");

	FSetTile parms{};	
	parms.X = X;
	parms.Y = Y;
	parms.Layer = Layer;
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UPaperTileMapComponent::SetLayerColor(struct FLinearColor NewColor, int32_t Layer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetLayerColor");

	FSetLayerColor parms{};	
	parms.NewColor = NewColor;
	parms.Layer = Layer;

	ProcessEvent(fn, &parms);
}

void UPaperTileMapComponent::SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetLayerCollision");

	FSetLayerCollision parms{};	
	parms.Layer = Layer;
	parms.bHasCollision = bHasCollision;
	parms.bOverrideThickness = bOverrideThickness;
	parms.CustomThickness = CustomThickness;
	parms.bOverrideOffset = bOverrideOffset;
	parms.CustomOffset = CustomOffset;
	parms.bRebuildCollision = bRebuildCollision;

	ProcessEvent(fn, &parms);
}

void UPaperTileMapComponent::SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness");

	FSetDefaultCollisionThickness parms{};	
	parms.Thickness = Thickness;
	parms.bRebuildCollision = bRebuildCollision;

	ProcessEvent(fn, &parms);
}

void UPaperTileMapComponent::ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.ResizeMap");

	FResizeMap parms{};	
	parms.NewWidthInTiles = NewWidthInTiles;
	parms.NewHeightInTiles = NewHeightInTiles;

	ProcessEvent(fn, &parms);
}

void UPaperTileMapComponent::RebuildCollision(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.RebuildCollision");

	FRebuildCollision parms{};	

	ProcessEvent(fn, &parms);
}

bool UPaperTileMapComponent::OwnsTileMap(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.OwnsTileMap");

	FOwnsTileMap parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UPaperTileMapComponent::MakeTileMapEditable(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.MakeTileMapEditable");

	FMakeTileMapEditable parms{};	

	ProcessEvent(fn, &parms);
}

void UPaperTileMapComponent::GetTilePolygon(int32_t TileX, int32_t TileY, struct TArray<struct FVector>& Points, int32_t LayerIndex, bool bWorldSpace){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTilePolygon");

	FGetTilePolygon parms{};	
	parms.TileX = TileX;
	parms.TileY = TileY;
	parms.Points = Points;
	parms.LayerIndex = LayerIndex;
	parms.bWorldSpace = bWorldSpace;

	ProcessEvent(fn, &parms);
}

struct FLinearColor UPaperTileMapComponent::GetTileMapColor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileMapColor");

	FGetTileMapColor parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector UPaperTileMapComponent::GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileCornerPosition");

	FGetTileCornerPosition parms{};	
	parms.TileX = TileX;
	parms.TileY = TileY;
	parms.LayerIndex = LayerIndex;
	parms.bWorldSpace = bWorldSpace;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector UPaperTileMapComponent::GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileCenterPosition");

	FGetTileCenterPosition parms{};	
	parms.TileX = TileX;
	parms.TileY = TileY;
	parms.LayerIndex = LayerIndex;
	parms.bWorldSpace = bWorldSpace;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FPaperTileInfo UPaperTileMapComponent::GetTile(int32_t X, int32_t Y, int32_t Layer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTile");

	FGetTile parms{};	
	parms.X = X;
	parms.Y = Y;
	parms.Layer = Layer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UPaperTileMapComponent::GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetMapSize");

	FGetMapSize parms{};	
	parms.MapWidth = MapWidth;
	parms.MapHeight = MapHeight;
	parms.NumLayers = NumLayers;

	ProcessEvent(fn, &parms);
}

struct FLinearColor UPaperTileMapComponent::GetLayerColor(int32_t Layer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetLayerColor");

	FGetLayerColor parms{};	
	parms.Layer = Layer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UPaperTileMapComponent::CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.CreateNewTileMap");

	FCreateNewTileMap parms{};	
	parms.MapWidth = MapWidth;
	parms.MapHeight = MapHeight;
	parms.TileWidth = TileWidth;
	parms.TileHeight = TileHeight;
	parms.PixelsPerUnrealUnit = PixelsPerUnrealUnit;
	parms.bCreateLayer = bCreateLayer;

	ProcessEvent(fn, &parms);
}

struct UPaperTileLayer* UPaperTileMapComponent::AddNewLayer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.AddNewLayer");

	FAddNewLayer parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FPaperTileInfo UTileMapBlueprintLibrary::MakeTile(int32_t TileIndex, struct UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.MakeTile");

	FMakeTile parms{};	
	parms.TileIndex = TileIndex;
	parms.TileSet = TileSet;
	parms.bFlipH = bFlipH;
	parms.bFlipV = bFlipV;
	parms.bFlipD = bFlipD;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName UTileMapBlueprintLibrary::GetTileUserData(struct FPaperTileInfo Tile){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.GetTileUserData");

	FGetTileUserData parms{};	
	parms.Tile = Tile;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UTileMapBlueprintLibrary::GetTileTransform(struct FPaperTileInfo Tile){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.GetTileTransform");

	FGetTileTransform parms{};	
	parms.Tile = Tile;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UTileMapBlueprintLibrary::BreakTile(struct FPaperTileInfo Tile, int32_t& TileIndex, struct UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.BreakTile");

	FBreakTile parms{};	
	parms.Tile = Tile;
	parms.TileIndex = TileIndex;
	parms.TileSet = TileSet;
	parms.bFlipH = bFlipH;
	parms.bFlipV = bFlipV;
	parms.bFlipD = bFlipD;

	ProcessEvent(fn, &parms);
}

