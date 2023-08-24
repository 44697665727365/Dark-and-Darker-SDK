#pragma once 
#include <WB_LoadingScreen_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_LoadingScreen.WB_LoadingScreen_C
// Size: 0x2B8(Inherited: 0x280)
struct UWB_LoadingScreen_C : UDCLoadingScreenWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x280 (0x280)
	struct UImage* LoadingImage;  // 0x288 (0x288)
	struct UTextBlock* LoadingTipsText;  // 0x290 (0x290)
	struct TArray<struct FText> LoadingTipArray;  // 0x298 (0x298)
	struct TArray<struct UTexture2D*> LoadingTextureArray;  // 0x2A8 (0x2A8)


	void UpdateImage(); // Function WB_LoadingScreen.WB_LoadingScreen_C.UpdateImage
	void UpdateDesc(); // Function WB_LoadingScreen.WB_LoadingScreen_C.UpdateDesc
	int32_t GetNumImages(); // Function WB_LoadingScreen.WB_LoadingScreen_C.GetNumImages
	int32_t GetNumDescs(); // Function WB_LoadingScreen.WB_LoadingScreen_C.GetNumDescs
	void OnUpdated(); // Function WB_LoadingScreen.WB_LoadingScreen_C.OnUpdated
	void ExecuteUbergraph_WB_LoadingScreen(int32_t EntryPoint); // Function WB_LoadingScreen.WB_LoadingScreen_C.ExecuteUbergraph_WB_LoadingScreen
}; 
 
 


