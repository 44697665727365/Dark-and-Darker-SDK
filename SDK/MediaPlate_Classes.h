#pragma once 
#include <MediaPlate_Structs.h>
 
 
 
// Class MediaPlate.MediaPlateAssetUserData
// Size: 0x38(Inherited: 0x28)
struct UMediaPlateAssetUserData : UAssetUserData
{
	char pad_40[16];  // 0x28 (0x28)


}; 
 
 


// Class MediaPlate.MediaPlateComponent
// Size: 0x148(Inherited: 0xA0)
struct UMediaPlateComponent : UActorComponent
{
	char pad_160[8];  // 0xA0 (0xA0)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool bPlayOnOpen : 1;  // 0xA8 (0xA8)
	char pad_169_1 : 7;  // 0xA9 (0xA9)
	bool bAutoPlay : 1;  // 0xA9 (0xA9)
	char pad_170_1 : 7;  // 0xAA (0xAA)
	bool bEnableAudio : 1;  // 0xAA (0xAA)
	char pad_171[1];  // 0xAB (0xAB)
	float StartTime;  // 0xAC (0xAC)
	char pad_176_1 : 7;  // 0xB0 (0xB0)
	bool bIsAspectRatioAuto : 1;  // 0xB0 (0xB0)
	char pad_177[7];  // 0xB1 (0xB1)
	struct UMediaSoundComponent* SoundComponent;  // 0xB8 (0xB8)
	struct UStaticMeshComponent* StaticMeshComponent;  // 0xC0 (0xC0)
	struct TArray<struct UStaticMeshComponent*> Letterboxes;  // 0xC8 (0xC8)
	struct UMediaPlaylist* MediaPlaylist;  // 0xD8 (0xD8)
	int32_t PlaylistIndex;  // 0xE0 (0xE0)
	struct FMediaSourceCacheSettings CacheSettings;  // 0xE4 (0xE4)
	char pad_236_1 : 7;  // 0xEC (0xEC)
	bool bIsMediaPlatePlaying : 1;  // 0xEC (0xEC)
	char pad_237[7];  // 0xED (0xED)
	char pad_244_1 : 7;  // 0xF4 (0xF4)
	bool bPlayOnlyWhenVisible : 1;  // 0xF4 (0xF4)
	char pad_245_1 : 7;  // 0xF5 (0xF5)
	bool bLoop : 1;  // 0xF5 (0xF5)
	uint8_t VisibleMipsTilesCalculations;  // 0xF6 (0xF6)
	char pad_247[1];  // 0xF7 (0xF7)
	float MipMapBias;  // 0xF8 (0xF8)
	float LetterboxAspectRatio;  // 0xFC (0xFC)
	struct FVector2D MeshRange;  // 0x100 (0x100)
	struct UMediaTexture* MediaTexture;  // 0x110 (0x110)
	struct UMediaPlayer* MediaPlayer;  // 0x118 (0x118)
	char pad_288[40];  // 0x120 (0x120)


	void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible); // Function MediaPlate.MediaPlateComponent.SetPlayOnlyWhenVisible
	void SetMeshRange(struct FVector2D InMeshRange); // Function MediaPlate.MediaPlateComponent.SetMeshRange
	void SetLoop(bool bInLoop); // Function MediaPlate.MediaPlateComponent.SetLoop
	void SetLetterboxAspectRatio(float AspectRatio); // Function MediaPlate.MediaPlateComponent.SetLetterboxAspectRatio
	bool Seek(struct FTimespan& Time); // Function MediaPlate.MediaPlateComponent.Seek
	bool Rewind(); // Function MediaPlate.MediaPlateComponent.Rewind
	void Play(); // Function MediaPlate.MediaPlateComponent.Play
	void Pause(); // Function MediaPlate.MediaPlateComponent.Pause
	void Open(); // Function MediaPlate.MediaPlateComponent.Open
	void OnMediaOpened(struct FString DeviceUrl); // Function MediaPlate.MediaPlateComponent.OnMediaOpened
	void OnMediaEnd(); // Function MediaPlate.MediaPlateComponent.OnMediaEnd
	bool IsMediaPlatePlaying(); // Function MediaPlate.MediaPlateComponent.IsMediaPlatePlaying
	struct FVector2D GetMeshRange(); // Function MediaPlate.MediaPlateComponent.GetMeshRange
	struct UMediaTexture* GetMediaTexture(); // Function MediaPlate.MediaPlateComponent.GetMediaTexture
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaPlate.MediaPlateComponent.GetMediaPlayer
	bool GetLoop(); // Function MediaPlate.MediaPlateComponent.GetLoop
	float GetLetterboxAspectRatio(); // Function MediaPlate.MediaPlateComponent.GetLetterboxAspectRatio
	void Close(); // Function MediaPlate.MediaPlateComponent.Close
}; 
 
 


// Class MediaPlate.MediaPlate
// Size: 0x2A0(Inherited: 0x290)
struct AMediaPlate : AActor
{
	struct UMediaPlateComponent* MediaPlateComponent;  // 0x290 (0x290)
	struct UStaticMeshComponent* StaticMeshComponent;  // 0x298 (0x298)


}; 
 
 


