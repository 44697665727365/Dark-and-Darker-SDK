#pragma once 
#include <WwiseFileHandler_Structs.h>
 
 
 
// Class WwiseFileHandler.WwiseExternalSourceStatics
// Size: 0x28(Inherited: 0x28)
struct UWwiseExternalSourceStatics : UBlueprintFunctionLibrary
{


	void SetExternalSourceMediaWithIds(struct FAkUniqueID ExternalSourceCookie, int32_t MediaId); // Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaWithIds
	void SetExternalSourceMediaByName(struct FString ExternalSourceName, struct FString MediaName); // Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaByName
	void SetExternalSourceMediaById(struct FString ExternalSourceName, int32_t MediaId); // Function WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaById
}; 
 
 


