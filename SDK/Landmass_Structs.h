#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct Landmass.BrushEffectBlurring
struct FBrushEffectBlurring
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bBlurShape : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t Radius;  // 0x4 (0x4)


}; 
 
 // ScriptStruct Landmass.BrushEffectCurlNoise
struct FBrushEffectCurlNoise
{
	float Curl1Amount;  // 0x0 (0x0)
	float Curl2Amount;  // 0x4 (0x4)
	float Curl1Tiling;  // 0x8 (0x8)
	float Curl2Tiling;  // 0xC (0xC)


}; 
 
 // ScriptStruct Landmass.LandmassBrushEffectsList
struct FLandmassBrushEffectsList
{
	struct FBrushEffectBlurring Blurring;  // 0x0 (0x0)
	struct FBrushEffectCurlNoise CurlNoise;  // 0x8 (0x8)
	struct FBrushEffectDisplacement Displacement;  // 0x18 (0x18)
	struct FBrushEffectSmoothBlending SmoothBlending;  // 0x40 (0x40)
	struct FBrushEffectTerracing Terracing;  // 0x48 (0x48)
	char pad_92[4];  // 0x5C (0x5C)


}; 
 
 // ScriptStruct Landmass.BrushEffectCurves
struct FBrushEffectCurves
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bUseCurveChannel : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UCurveFloat* ElevationCurveAsset;  // 0x8 (0x8)
	float ChannelEdgeOffset;  // 0x10 (0x10)
	float ChannelDepth;  // 0x14 (0x14)
	float CurveRampWidth;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct Landmass.BrushEffectSmoothBlending
struct FBrushEffectSmoothBlending
{
	float InnerSmoothDistance;  // 0x0 (0x0)
	float OuterSmoothDistance;  // 0x4 (0x4)


}; 
 
 // ScriptStruct Landmass.BrushEffectDisplacement
struct FBrushEffectDisplacement
{
	float DisplacementHeight;  // 0x0 (0x0)
	float DisplacementTiling;  // 0x4 (0x4)
	struct UTexture2D* Texture;  // 0x8 (0x8)
	float Midpoint;  // 0x10 (0x10)
	struct FLinearColor Channel;  // 0x14 (0x14)
	float WeightmapInfluence;  // 0x24 (0x24)


}; 
 
 // ScriptStruct Landmass.LandmassFalloffSettings
struct FLandmassFalloffSettings
{
	uint8_t FalloffMode;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float FalloffAngle;  // 0x4 (0x4)
	float FalloffWidth;  // 0x8 (0x8)
	float EdgeOffset;  // 0xC (0xC)
	float ZOffset;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Landmass.BrushEffectTerracing
struct FBrushEffectTerracing
{
	float TerraceAlpha;  // 0x0 (0x0)
	float TerraceSpacing;  // 0x4 (0x4)
	float TerraceSmoothness;  // 0x8 (0x8)
	float MaskLength;  // 0xC (0xC)
	float MaskStartOffset;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Landmass.LandmassTerrainCarvingSettings
struct FLandmassTerrainCarvingSettings
{
	uint8_t BlendMode;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bInvertShape : 1;  // 0x1 (0x1)
	char pad_2[2];  // 0x2 (0x2)
	struct FLandmassFalloffSettings FalloffSettings;  // 0x4 (0x4)
	struct FLandmassBrushEffectsList Effects;  // 0x18 (0x18)
	int32_t Priority;  // 0x78 (0x78)
	char pad_124[4];  // 0x7C (0x7C)


}; 
 
 