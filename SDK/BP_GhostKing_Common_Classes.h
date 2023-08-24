#pragma once 
#include <BP_GhostKing_Common_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_GhostKing_Common.BP_GhostKing_Common_C
// Size: 0x1310(Inherited: 0x11B8)
struct ABP_GhostKing_Common_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UNiagaraComponent* FXS_GhostKing_DarkFog_Local;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox2;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox1;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x11D8 (0x11D8)
	float CurseOfChiling Apply Cycle;  // 0x11E0 (0x11E0)
	char pad_4580[4];  // 0x11E4 (0x11E4)
	double Earthquake Timer;  // 0x11E8 (0x11E8)
	double Earthquake Jump Height;  // 0x11F0 (0x11F0)
	struct AActor* EatingPlayer;  // 0x11F8 (0x11F8)
	double Earthquake Launch XY;  // 0x1200 (0x1200)
	double Earthquake Launch Z;  // 0x1208 (0x1208)
	double Earthquake Damage Ratio Stack;  // 0x1210 (0x1210)
	double Earthquake Damage Base;  // 0x1218 (0x1218)
	int32_t Earthquake Summonee Count;  // 0x1220 (0x1220)
	char pad_4644[4];  // 0x1224 (0x1224)
	double Eating Acceptance Radius;  // 0x1228 (0x1228)
	double Eating Chase Time;  // 0x1230 (0x1230)
	double Teleport Launch XY;  // 0x1238 (0x1238)
	double Teleport Launch Z;  // 0x1240 (0x1240)
	double Teleport Attack Radius;  // 0x1248 (0x1248)
	double Teleport Acceptance Radius;  // 0x1250 (0x1250)
	double Teleport Invisible Time;  // 0x1258 (0x1258)
	double Teleport Subtract Ratio Per Success;  // 0x1260 (0x1260)
	double Teleport Damage Ratio Stack;  // 0x1268 (0x1268)
	double Teleport Damage Base;  // 0x1270 (0x1270)
	double Scream HPRatio Cycle;  // 0x1278 (0x1278)
	double Scream Damage Ratio Stack;  // 0x1280 (0x1280)
	double Scream Damage Base;  // 0x1288 (0x1288)
	char pad_4752_1 : 7;  // 0x1290 (0x1290)
	bool Teleport Used For Earthquake : 1;  // 0x1290 (0x1290)
	char pad_4753[7];  // 0x1291 (0x1291)
	struct TArray<struct AActor*> Cursed Players;  // 0x1298 (0x1298)
	char pad_4776_1 : 7;  // 0x12A8 (0x12A8)
	bool Set First Timer : 1;  // 0x12A8 (0x12A8)
	char pad_4777[7];  // 0x12A9 (0x12A9)
	struct TArray<struct ADCMonsterBase*> Summonee;  // 0x12B0 (0x12B0)
	enum class E_MonsterGrade Summone Grade;  // 0x12C0 (0x12C0)
	char pad_4801[7];  // 0x12C1 (0x12C1)
	struct UMaterialInstance* MI_Hide;  // 0x12C8 (0x12C8)
	struct UMaterialInstance* MI_Emerge;  // 0x12D0 (0x12D0)
	struct UMaterialInstance* MI_Hide_Crown;  // 0x12D8 (0x12D8)
	struct UMaterialInstance* MI_Emerge_Crown;  // 0x12E0 (0x12E0)
	struct ABP_GameSpawner_C* Spawner;  // 0x12E8 (0x12E8)
	struct FPrimaryAssetId In Monster Id;  // 0x12F0 (0x12F0)
	int32_t Summonee Count;  // 0x1300 (0x1300)
	char pad_4868_1 : 7;  // 0x1304 (0x1304)
	bool Vanishing Form : 1;  // 0x1304 (0x1304)
	char pad_4869[3];  // 0x1305 (0x1305)
	double Summon HP Ratio;  // 0x1308 (0x1308)


	void Add Soulstolen Tag After Comeback(); // Function BP_GhostKing_Common.BP_GhostKing_Common_C.Add Soulstolen Tag After Comeback
	void Check Combat To Comeback(); // Function BP_GhostKing_Common.BP_GhostKing_Common_C.Check Combat To Comeback
	void Remove Curse(); // Function BP_GhostKing_Common.BP_GhostKing_Common_C.Remove Curse
	void Reset Variables(); // Function BP_GhostKing_Common.BP_GhostKing_Common_C.Reset Variables
	void OnMessageReceived_75F8964240716405A440888646BEC122(struct UMsgBaseNode* ProxyObject); // Function BP_GhostKing_Common.BP_GhostKing_Common_C.OnMessageReceived_75F8964240716405A440888646BEC122
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_GhostKing_Common.BP_GhostKing_Common_C.GameplayTagUpdated
	void OnSetAI(); // Function BP_GhostKing_Common.BP_GhostKing_Common_C.OnSetAI
	void Comeback Event End(); // Function BP_GhostKing_Common.BP_GhostKing_Common_C.Comeback Event End
	void BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature(struct FObjectLinkRequestEvent& RecvEvent, struct UObjectLinkMetaDataBlueprint* SendEventParam); // Function BP_GhostKing_Common.BP_GhostKing_Common_C.BndEvt__BP_Lich_DCGameObjectLink_K2Node_ComponentBoundEvent_3_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
	void Combat Activated(); // Function BP_GhostKing_Common.BP_GhostKing_Common_C.Combat Activated
	void Comeback Activated(); // Function BP_GhostKing_Common.BP_GhostKing_Common_C.Comeback Activated
	void Summon SmallGhost(); // Function BP_GhostKing_Common.BP_GhostKing_Common_C.Summon SmallGhost
	void Summonee All Dead(); // Function BP_GhostKing_Common.BP_GhostKing_Common_C.Summonee All Dead
	void ExecuteUbergraph_BP_GhostKing_Common(int32_t EntryPoint); // Function BP_GhostKing_Common.BP_GhostKing_Common_C.ExecuteUbergraph_BP_GhostKing_Common
}; 
 
 


