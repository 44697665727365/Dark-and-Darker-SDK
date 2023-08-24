#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct WaveTable.WaveTableBankEntry
struct FWaveTableBankEntry
{
	struct FWaveTableTransform Transform;  // 0x0 (0x0)


}; 
 
 // ScriptStruct WaveTable.WaveTableTransform
struct FWaveTableTransform
{
	uint8_t Curve;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float Scalar;  // 0x4 (0x4)
	struct FRichCurve CurveCustom;  // 0x8 (0x8)
	struct UCurveFloat* CurveShared;  // 0x88 (0x88)
	struct TArray<float> WaveTable;  // 0x90 (0x90)


}; 
 
 // ScriptStruct WaveTable.WaveTableSettings
struct FWaveTableSettings
{
	struct FFilePath FilePath;  // 0x0 (0x0)
	int32_t ChannelIndex;  // 0x10 (0x10)
	float Phase;  // 0x14 (0x14)
	float Top;  // 0x18 (0x18)
	float Tail;  // 0x1C (0x1C)
	float FadeIn;  // 0x20 (0x20)
	float FadeOut;  // 0x24 (0x24)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bNormalize : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool bRemoveOffset : 1;  // 0x29 (0x29)
	char pad_42[6];  // 0x2A (0x2A)
	struct TArray<float> SourcePCMData;  // 0x30 (0x30)


}; 
 
 