#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_PlayerCharacterDungeon.BP_PlayerCharacterDungeon_C.ExecuteUbergraph_BP_PlayerCharacterDungeon
struct FExecuteUbergraph_BP_PlayerCharacterDungeon
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FMsgGASActorDieNotify K2Node_Event_InMsg;  // 0x8 (0x8)
	int64_t CallFunc_MakeUniqueId_ReturnValue;  // 0x208 (0x208)
	struct FString CallFunc_GetAccountId_ReturnValue;  // 0x210 (0x210)
	struct FString CallFunc_GetPartyId_ReturnValue;  // 0x220 (0x220)
	char pad_560_1 : 7;  // 0x230 (0x230)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x230 (0x230)
	char pad_561_1 : 7;  // 0x231 (0x231)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x231 (0x231)
	char CallFunc_MakeLiteralByte_ReturnValue;  // 0x232 (0x232)
	char pad_563[1];  // 0x233 (0x233)
	int32_t CallFunc_Conv_ByteToInt_ReturnValue;  // 0x234 (0x234)
	struct FPrimaryAssetId K2Node_MakeStruct_PrimaryAssetId;  // 0x238 (0x238)
	struct FDesignDataPropsInteract CallFunc_GetDesignDataPropsInteract_ReturnValue;  // 0x248 (0x248)
	char pad_744_1 : 7;  // 0x2E8 (0x2E8)
	bool K2Node_Event_bIsTeammateWithLocalPlayer : 1;  // 0x2E8 (0x2E8)
	char pad_745_1 : 7;  // 0x2E9 (0x2E9)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x2E9 (0x2E9)
	char pad_746_1 : 7;  // 0x2EA (0x2EA)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue_2 : 1;  // 0x2EA (0x2EA)
	char pad_747[5];  // 0x2EB (0x2EB)
	struct FNickname CallFunc_GetNickNameCached_ReturnValue;  // 0x2F0 (0x2F0)
	struct FItemDataMeta K2Node_MakeStruct_ItemDataMeta;  // 0x318 (0x318)
	int32_t CallFunc_Conv_ByteToInt_ReturnValue_2;  // 0x368 (0x368)
	char pad_876[4];  // 0x36C (0x36C)
	struct FItemData K2Node_MakeStruct_ItemData;  // 0x370 (0x370)
	struct FMsgAddContainingItemRequest K2Node_MakeStruct_MsgAddContainingItemRequest;  // 0x410 (0x410)


}; 
 
 // Function BP_PlayerCharacterDungeon.BP_PlayerCharacterDungeon_C.OnUpdateTeammateState
// Size: 0x1(Inherited: 0x1)
struct FOnUpdateTeammateState : FOnUpdateTeammateState
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bIsTeammateWithLocalPlayer : 1;  // 0x0 (0x0)


}; 
 
 // Function BP_PlayerCharacterDungeon.BP_PlayerCharacterDungeon_C.OnFMsgGASActorDieNotifyBlueprint
// Size: 0x200(Inherited: 0x200)
struct FOnFMsgGASActorDieNotifyBlueprint : FOnFMsgGASActorDieNotifyBlueprint
{
	struct FMsgGASActorDieNotify InMsg;  // 0x0 (0x0)


}; 
 
 