#pragma once 
#include <BP_SkeletonWarlord_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_SkeletonWarlord.BP_SkeletonWarlord_C
// Size: 0x13C0(Inherited: 0x11B8)
struct ABP_SkeletonWarlord_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UBP_DCHitBox_C* BP_DCHitBox9;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox8;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox7;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox6;  // 0x11D8 (0x11D8)
	struct UBP_DCHitBox_C* BP_DCHitBox5;  // 0x11E0 (0x11E0)
	struct UBP_DCHitBox_C* BP_DCHitBox4;  // 0x11E8 (0x11E8)
	struct UBP_DCHitBox_C* BP_DCHitBox3;  // 0x11F0 (0x11F0)
	struct UBP_DCHitBox_C* BP_DCHitBox2;  // 0x11F8 (0x11F8)
	struct UBP_DCHitBox_C* BP_DCHitBox1;  // 0x1200 (0x1200)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x1208 (0x1208)
	struct FMulticastInlineDelegate Spawn RoyalGuard;  // 0x1210 (0x1210)
	struct FMulticastInlineDelegate Position Change;  // 0x1220 (0x1220)
	struct FMulticastInlineDelegate Call BackStep;  // 0x1230 (0x1230)
	struct FMulticastInlineDelegate Call Bombing;  // 0x1240 (0x1240)
	struct TArray<struct ADCMonsterBase*> Monster;  // 0x1250 (0x1250)
	int32_t Max Spawn Count;  // 0x1260 (0x1260)
	int32_t RoyalGuard Count;  // 0x1264 (0x1264)
	int32_t Temp Spawn Count;  // 0x1268 (0x1268)
	char pad_4716[4];  // 0x126C (0x126C)
	struct ABP_GameSpawner_C* Spawner;  // 0x1270 (0x1270)
	struct FPrimaryAssetId In Monster Id;  // 0x1278 (0x1278)
	char pad_4744_1 : 7;  // 0x1288 (0x1288)
	bool RoyalGuard Spawned : 1;  // 0x1288 (0x1288)
	char pad_4745[7];  // 0x1289 (0x1289)
	struct TArray<struct ADCMonsterBase*> Position Change Temp Targets;  // 0x1290 (0x1290)
	struct ADCMonsterBase* Position Change Target;  // 0x12A0 (0x12A0)
	struct FVector Position Change Target Location;  // 0x12A8 (0x12A8)
	struct FMulticastInlineDelegate Call ThrowingKnives;  // 0x12C0 (0x12C0)
	struct FMulticastInlineDelegate Position Change To Center;  // 0x12D0 (0x12D0)
	struct TArray<struct ADCMonsterBase*> Temp Monster;  // 0x12E0 (0x12E0)
	int32_t Position Change Enemy Direction;  // 0x12F0 (0x12F0)
	int32_t Position Change My  Direction;  // 0x12F4 (0x12F4)
	double Position Change Distance;  // 0x12F8 (0x12F8)
	enum class E_Direction Position Change E_Direction;  // 0x1300 (0x1300)
	char pad_4865[7];  // 0x1301 (0x1301)
	struct TArray<struct FGameplayTag> Gameplay Tag Lv Apply;  // 0x1308 (0x1308)
	struct FGameplayTag Gameplay Cue Tag Lv Apply;  // 0x1318 (0x1318)
	int32_t Max Soul Count;  // 0x1320 (0x1320)
	int32_t Lv Effect Count;  // 0x1324 (0x1324)
	int32_t Sword Length per Lv Effect Count;  // 0x1328 (0x1328)
	char pad_4908[4];  // 0x132C (0x132C)
	struct UAbilityAsync_WaitGameplayEffectApplied* Wait Lv Effect Async Action;  // 0x1330 (0x1330)
	struct TArray<struct AActor*> Dominated Players;  // 0x1338 (0x1338)
	struct TArray<struct ADCMonsterBase*> BonePrison;  // 0x1348 (0x1348)
	double Combo Reach Coefficient;  // 0x1358 (0x1358)
	double Combo Reach Base;  // 0x1360 (0x1360)
	char pad_4968_1 : 7;  // 0x1368 (0x1368)
	bool Five Triggered : 1;  // 0x1368 (0x1368)
	char pad_4969[7];  // 0x1369 (0x1369)
	struct TMap<struct ADCCharacterBase*, int32_t> Enemies On Aoe;  // 0x1370 (0x1370)


	void Set Lv Gameplay Effect(); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Set Lv Gameplay Effect
	void Combo Reach Calculation(double& Return); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Combo Reach Calculation
	void Start Combat(); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Start Combat
	void End Combat(); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.End Combat
	void OnApplied_B30537AB4260FD37F0444CBA03F1D53F(struct AActor* Source, struct FGameplayEffectSpecHandle SpecHandle, struct FActiveGameplayEffectHandle ActiveHandle); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.OnApplied_B30537AB4260FD37F0444CBA03F1D53F
	void ReceiveBeginPlay(); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.ReceiveBeginPlay
	void Spawn RoyalGuard_Event(); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Spawn RoyalGuard_Event
	void Call BackStep_Event(); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Call BackStep_Event
	void Position Change_Event(); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Position Change_Event
	void Call Bombing_Event(); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Call Bombing_Event
	void Position Change To Center_Event(); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Position Change To Center_Event
	void Comeback Event Start(); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Comeback Event Start
	void GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.GameplayTagUpdated
	void Combat Activated(); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Combat Activated
	void Call ThrowingKnives_Event(); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Call ThrowingKnives_Event
	void OnSetAI(); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.OnSetAI
	void ExecuteUbergraph_BP_SkeletonWarlord(int32_t EntryPoint); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.ExecuteUbergraph_BP_SkeletonWarlord
	void Call ThrowingKnives__DelegateSignature(); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Call ThrowingKnives__DelegateSignature
	void Position Change To Center__DelegateSignature(); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Position Change To Center__DelegateSignature
	void Call Bombing__DelegateSignature(); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Call Bombing__DelegateSignature
	void Position Change__DelegateSignature(); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Position Change__DelegateSignature
	void Call BackStep__DelegateSignature(); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Call BackStep__DelegateSignature
	void Spawn RoyalGuard__DelegateSignature(); // Function BP_SkeletonWarlord.BP_SkeletonWarlord_C.Spawn RoyalGuard__DelegateSignature
}; 
 
 


