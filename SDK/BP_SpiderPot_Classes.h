#pragma once 
#include <BP_SpiderPot_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_SpiderPot.BP_SpiderPot_C
// Size: 0x548(Inherited: 0x4D0)
struct ABP_SpiderPot_C : ABP_SimpleDestructableActorBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4D0 (0x4D0)
	struct UNavModifierComponent* NavModifier;  // 0x4D8 (0x4D8)
	struct UDCGeometryCollectionComponent* GC_SpiderPot_Default;  // 0x4E0 (0x4E0)
	struct UStaticMeshComponent* StaticMesh;  // 0x4E8 (0x4E8)
	struct TArray<enum class EObjectTypeQuery> Object Types;  // 0x4F0 (0x4F0)
	char pad_1280_1 : 7;  // 0x500 (0x500)
	bool IsDead : 1;  // 0x500 (0x500)
	char pad_1281[7];  // 0x501 (0x501)
	struct FTimerHandle SpawnTimerHandle;  // 0x508 (0x508)
	int32_t MaxSpiderSpawnCount;  // 0x510 (0x510)
	int32_t CurrentSpiderCount;  // 0x514 (0x514)
	float Spawn Interval;  // 0x518 (0x518)
	char pad_1308[4];  // 0x51C (0x51C)
	double Spawn Interval Random Duration;  // 0x520 (0x520)
	struct FPrimaryAssetId In Monster Id;  // 0x528 (0x528)
	struct ABP_GameSpawner_C* Spawner;  // 0x538 (0x538)
	struct ADCMonsterBase* Monster;  // 0x540 (0x540)


	void OnMessageReceived_72CC1EC34A59F6F630B6F4A7FF85942F(struct UMsgBaseNode* ProxyObject); // Function BP_SpiderPot.BP_SpiderPot_C.OnMessageReceived_72CC1EC34A59F6F630B6F4A7FF85942F
	void ReceiveBeginPlay(); // Function BP_SpiderPot.BP_SpiderPot_C.ReceiveBeginPlay
	void Spawn(); // Function BP_SpiderPot.BP_SpiderPot_C.Spawn
	void OnImpactEnduranceExhausted(float ExhaustedTime, UGameplayEffect* GameplayEffectClass, struct FDCGameplayEffectContext EffectContext); // Function BP_SpiderPot.BP_SpiderPot_C.OnImpactEnduranceExhausted
	void ExecuteUbergraph_BP_SpiderPot(int32_t EntryPoint); // Function BP_SpiderPot.BP_SpiderPot_C.ExecuteUbergraph_BP_SpiderPot
}; 
 
 


