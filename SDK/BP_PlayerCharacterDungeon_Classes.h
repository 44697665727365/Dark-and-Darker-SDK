#pragma once 
#include <BP_PlayerCharacterDungeon_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_PlayerCharacterDungeon.BP_PlayerCharacterDungeon_C
// Size: 0xAF9(Inherited: 0xAE8)
struct ABP_PlayerCharacterDungeon_C : ABP_PlayerCharacter_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xAE8 (0xAE8)
	struct UDesignDataAssetItem* SoulHeart;  // 0xAF0 (0xAF0)
	uint8_t SoulHeartSlotIndex;  // 0xAF8 (0xAF8)


	void ReceiveBeginPlay(); // Function BP_PlayerCharacterDungeon.BP_PlayerCharacterDungeon_C.ReceiveBeginPlay
	void OnUpdateTeammateState(bool bIsTeammateWithLocalPlayer); // Function BP_PlayerCharacterDungeon.BP_PlayerCharacterDungeon_C.OnUpdateTeammateState
	void OnFMsgGASActorDieNotifyBlueprint(struct FMsgGASActorDieNotify& InMsg); // Function BP_PlayerCharacterDungeon.BP_PlayerCharacterDungeon_C.OnFMsgGASActorDieNotifyBlueprint
	void ExecuteUbergraph_BP_PlayerCharacterDungeon(int32_t EntryPoint); // Function BP_PlayerCharacterDungeon.BP_PlayerCharacterDungeon_C.ExecuteUbergraph_BP_PlayerCharacterDungeon
}; 
 
 


