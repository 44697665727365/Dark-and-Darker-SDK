#pragma once 
#include <MonsterBPLibrary_Structs.h>
 
 
 
// BlueprintGeneratedClass MonsterBPLibrary.MonsterBPLibrary_C
// Size: 0x28(Inherited: 0x28)
struct UMonsterBPLibrary_C : UBlueprintFunctionLibrary
{


	void Set BlackBoard TargetActor To MonsterBase(struct ABP_DCMonsterBaseWithOptions_C* MonsterBaseWithOptions, struct UObject* __WorldContext); // Function MonsterBPLibrary.MonsterBPLibrary_C.Set BlackBoard TargetActor To MonsterBase
	void Kill Actor(struct AActor* Actor, struct UObject* __WorldContext); // Function MonsterBPLibrary.MonsterBPLibrary_C.Kill Actor
	void Get Enemy Direction From Me(double Angle, struct UObject* __WorldContext, enum class E_Direction& Direction); // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Enemy Direction From Me
	void Get Enemies In Range And Angle(struct AActor* Actor, bool Result By TargetActor, double Range, double Direction, double Angle, struct UObject* __WorldContext, bool& Result, struct TArray<struct ADCCharacterBase*>& DCCharacterBase); // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Enemies In Range And Angle
	void Get Direction Vector(struct AActor* Actor, enum class E_Direction Direction, double Distance, struct UObject* __WorldContext, struct FVector& Result Vector); // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Direction Vector
	void Set BB Probability(struct ABP_DCMonsterBaseWithOptions_C* MonsterBase, double Probability, struct UObject* __WorldContext); // Function MonsterBPLibrary.MonsterBPLibrary_C.Set BB Probability
	void Get BB Probability(struct ABP_DCMonsterBaseWithOptions_C* MonsterBase, struct UObject* __WorldContext, double& Probability); // Function MonsterBPLibrary.MonsterBPLibrary_C.Get BB Probability
	void Set BB Phase(struct ABP_DCMonsterBaseWithOptions_C* MonsterBase, int32_t Phase, struct UObject* __WorldContext); // Function MonsterBPLibrary.MonsterBPLibrary_C.Set BB Phase
	void Get BB Phase(struct ABP_DCMonsterBaseWithOptions_C* MonsterBase, struct UObject* __WorldContext, int32_t& Phase); // Function MonsterBPLibrary.MonsterBPLibrary_C.Get BB Phase
	void Remove Timer(struct ADCMonsterBase* DCMonsterBase, int32_t Timer Index, struct UObject* __WorldContext); // Function MonsterBPLibrary.MonsterBPLibrary_C.Remove Timer
	void Change GE Attribute And Apply(struct AActor* SourceActor, struct AActor* Target Actor, struct FPrimaryAssetId Gameplay Effect, struct FGameplayTag Set By Caller Tag, double Value, struct UObject* __WorldContext, struct TArray<struct FActiveGameplayEffectHandle>& Return Value); // Function MonsterBPLibrary.MonsterBPLibrary_C.Change GE Attribute And Apply
	void Set BB HPRatio(struct ABP_DCMonsterBaseWithOptions_C* MonsterBase, double HPRatio, struct UObject* __WorldContext); // Function MonsterBPLibrary.MonsterBPLibrary_C.Set BB HPRatio
	void Get BB HPRatio(struct ABP_DCMonsterBaseWithOptions_C* MonsterBase, struct UObject* __WorldContext, double& HPRatio); // Function MonsterBPLibrary.MonsterBPLibrary_C.Get BB HPRatio
	void Get Instigator From Added Tag(struct FGameplayTag Gameplay Tag, struct FGameplayEffectSpecHandle Spec Handle, struct UObject* __WorldContext, bool& Result, struct AActor*& Instigator); // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Instigator From Added Tag
	void Get Interrupt Montage Immune Tags(struct UObject* __WorldContext, struct TArray<struct FGameplayTag>& Interrupt Action Immune Tags); // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Interrupt Montage Immune Tags
	void Get Debuff Immune Tags(struct UObject* __WorldContext, struct TArray<struct FGameplayTag>& Debuff Immune Tags); // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Debuff Immune Tags
	void Remove Interrtupt Montage Immune(struct AActor* Actor, struct UObject* __WorldContext); // Function MonsterBPLibrary.MonsterBPLibrary_C.Remove Interrtupt Montage Immune
	void Set Interrupt Montage Immune(struct AActor* Actor, struct UObject* __WorldContext); // Function MonsterBPLibrary.MonsterBPLibrary_C.Set Interrupt Montage Immune
	void Remove Debuff Immune(struct AActor* Actor, bool Fear, bool Impact, bool KnockBack, bool Trap, bool UnableMove, struct UObject* __WorldContext); // Function MonsterBPLibrary.MonsterBPLibrary_C.Remove Debuff Immune
	void Set Debuff Immune(struct AActor* Actor, bool Fear, bool Impact, bool KnockBack, bool Trap, bool UnableMove, bool Unhealable, struct UObject* __WorldContext); // Function MonsterBPLibrary.MonsterBPLibrary_C.Set Debuff Immune
	void Launch Enemy(struct FGameplayEventData Event Data, bool Launch Weapon Direction, double XY Value, double Z Value, struct UObject* __WorldContext); // Function MonsterBPLibrary.MonsterBPLibrary_C.Launch Enemy
	void Set Combo Attack(struct UDCGameplayAbilityBase* Gameplay Ability, struct UObject* Caster, double Sphere Overlap Forward Pos, double Sphere Overlap Radius, struct FGameplayTag Event Tag, double Trigger Ratio, struct UObject* __WorldContext, struct ADCCharacterBase*& Target Enemy, struct TArray<struct ADCCharacterBase*>& TargetArray, bool& Combo Triggered); // Function MonsterBPLibrary.MonsterBPLibrary_C.Set Combo Attack
	void Set Projectile Spec and Options(struct UDCGameplayAbilityBase* DCGameplay Ability Base, struct AActor* Spawned Projectile, struct FGameplayTag Gameplay Tag For Spec, double Pierce Count, bool Pierce Obstacle, double Decrease Pierce Obstacle Count, bool Homing, struct ADCCharacterBase* Homing Target, uint8_t Homing Hit Box Type, double Homing Magnitude, struct UObject* __WorldContext, bool& Result, struct AProjectileActor*& Projectile Actor); // Function MonsterBPLibrary.MonsterBPLibrary_C.Set Projectile Spec and Options
	void Get BB Target Actor(struct ABP_DCMonsterBaseWithOptions_C* MonsterBaseWithOptions, struct UObject* __WorldContext, bool& Result, struct ADCCharacterBase*& DCCharacterBase); // Function MonsterBPLibrary.MonsterBPLibrary_C.Get BB Target Actor
	void Get Projectile Relative Spawn Transform(struct ADCCharacterBase* Start Actor, struct FVector Start Location, uint8_t Hit Box Type, struct TArray<struct FVector>& Spawn Location, struct TArray<struct FRotator>& Shooting Direction, struct UObject* __WorldContext, bool& Result, struct TArray<struct FVector>& Spawn Transform Location, struct TArray<struct FRotator>& Spawn Transform Rotation); // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Projectile Relative Spawn Transform
	void Remove Immune To Comeback(struct ABP_DCMonsterBaseWithOptions_C* DCMonsterBase, struct UObject* __WorldContext); // Function MonsterBPLibrary.MonsterBPLibrary_C.Remove Immune To Comeback
	void Set Immune To Comeback For Linked Monsters(struct TArray<struct ABP_DCMonsterBaseWithOptions_C*>& Linked Monster Array, struct UObject* __WorldContext); // Function MonsterBPLibrary.MonsterBPLibrary_C.Set Immune To Comeback For Linked Monsters
	void Set Immune To Comeback(struct ABP_DCMonsterBaseWithOptions_C* DCMonsterBase, struct UObject* __WorldContext); // Function MonsterBPLibrary.MonsterBPLibrary_C.Set Immune To Comeback
	void Get Number Of Active Players In Combat Area(struct TArray<struct ADCCharacterBase*>& Enemies In Combat Area, struct TArray<struct ADCCharacterBase*>& Lost Enemies In Combat Area, struct UObject* __WorldContext, int32_t& Number Of Players); // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Number Of Active Players In Combat Area
	void Get Number Of Active Players In Recognition Area(struct TArray<struct AActor*>& Enemies In Recog Area, struct TArray<struct AActor*>& Lost Enemies In Recog Area, struct UObject* __WorldContext, int32_t& Number Of Players); // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Number Of Active Players In Recognition Area
	void Get And Compare To BlackBoard Mode(struct ABP_DCMonsterBaseWithOptions_C* DCMonsterBase, enum class E_ModeType Mode Type, struct UObject* __WorldContext, bool& Result); // Function MonsterBPLibrary.MonsterBPLibrary_C.Get And Compare To BlackBoard Mode
	void Set BlackBoard Mode For Linked Monsters(struct TArray<struct ABP_DCMonsterBaseWithOptions_C*>& Linked Monster Array, enum class E_ModeType Mode Type, struct UObject* __WorldContext); // Function MonsterBPLibrary.MonsterBPLibrary_C.Set BlackBoard Mode For Linked Monsters
	void Set BlackBoard Mode(struct ABP_DCMonsterBaseWithOptions_C* DCMonsterBase, enum class E_ModeType Mode Type, struct UObject* __WorldContext); // Function MonsterBPLibrary.MonsterBPLibrary_C.Set BlackBoard Mode
	void Check Target Has State Tags To Lose From Array(struct UObject* Target, struct UObject* __WorldContext, bool& Result); // Function MonsterBPLibrary.MonsterBPLibrary_C.Check Target Has State Tags To Lose From Array
	void Add Timer(struct AActor* Actor, int32_t Timer Index, double Second, struct UObject* __WorldContext); // Function MonsterBPLibrary.MonsterBPLibrary_C.Add Timer
	void Get Max Distance From Perception(struct ABP_DCMonsterBaseWithOptions_C* Monster BP, enum class E_DistanceFromVariables Get Distance From, double Default Distance, struct UObject* __WorldContext, bool& Result, double& Return Value); // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Max Distance From Perception
	void Filter Target From CombatArea(struct FVector SpawnLocation, double FilterDistanceFromSpawnLocation, struct TArray<struct ADCCharacterBase*>& TargetArray, struct UObject* __WorldContext, bool& Return Value, struct TArray<struct ADCCharacterBase*>& Result); // Function MonsterBPLibrary.MonsterBPLibrary_C.Filter Target From CombatArea
	void Filter Target From Spawn Location(struct FVector SpawnLocation, double FilterDistanceFromSpawnLocation, struct TArray<struct ADCCharacterBase*>& TargetArray, struct UObject* __WorldContext, bool& Return Value, struct TArray<struct ADCCharacterBase*>& Result); // Function MonsterBPLibrary.MonsterBPLibrary_C.Filter Target From Spawn Location
	void Filter Target Has Aggro(struct ABP_DCMonsterBase_C* MonsterBase, struct TArray<struct ADCCharacterBase*>& Input TargetArray, struct UObject* __WorldContext, bool& Return Value, struct TArray<struct ADCCharacterBase*>& Output TargetArray); // Function MonsterBPLibrary.MonsterBPLibrary_C.Filter Target Has Aggro
	void Get Target Array(struct ADCMonsterBase* DCMonsterBase, enum class E_SensorType Get List From, bool Get From CombatArea, bool Get Target Has Aggro Only, struct UObject* __WorldContext, bool& Return Value, struct TArray<struct ADCCharacterBase*>& TargetArray); // Function MonsterBPLibrary.MonsterBPLibrary_C.Get Target Array
	void Set Target Provider(struct ABP_DCMonsterBaseWithOptions_C* Source Target, struct UDCGameObjectLinkComponent* DCGame Object Link, struct FGameplayTagQuery Provider Object Tag, struct UObject* __WorldContext, bool& Result); // Function MonsterBPLibrary.MonsterBPLibrary_C.Set Target Provider
}; 
 
 


