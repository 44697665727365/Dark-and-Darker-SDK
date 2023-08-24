#include "pch.h"
#include "SDK.h"

void UMonsterBPLibrary_C::Set BlackBoard TargetActor To MonsterBase(struct ABP_DCMonsterBaseWithOptions_C* MonsterBaseWithOptions, struct UObject* __WorldContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set BlackBoard TargetActor To MonsterBase");

	FSet BlackBoard TargetActor To MonsterBase parms{};	
	parms.MonsterBaseWithOptions = MonsterBaseWithOptions;
	parms.__WorldContext = __WorldContext;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Kill Actor(struct AActor* Actor, struct UObject* __WorldContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Kill Actor");

	FKill Actor parms{};	
	parms.Actor = Actor;
	parms.__WorldContext = __WorldContext;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Get Enemy Direction From Me(double Angle, struct UObject* __WorldContext, enum class E_Direction& Direction){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Enemy Direction From Me");

	FGet Enemy Direction From Me parms{};	
	parms.Angle = Angle;
	parms.__WorldContext = __WorldContext;
	parms.Direction = Direction;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Get Enemies In Range And Angle(struct AActor* Actor, bool Result By TargetActor, double Range, double Direction, double Angle, struct UObject* __WorldContext, bool& Result, struct TArray<struct ADCCharacterBase*>& DCCharacterBase){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Enemies In Range And Angle");

	FGet Enemies In Range And Angle parms{};	
	parms.Actor = Actor;
	parms.Result By TargetActor = Result By TargetActor;
	parms.Range = Range;
	parms.Direction = Direction;
	parms.Angle = Angle;
	parms.__WorldContext = __WorldContext;
	parms.Result = Result;
	parms.DCCharacterBase = DCCharacterBase;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Get Direction Vector(struct AActor* Actor, enum class E_Direction Direction, double Distance, struct UObject* __WorldContext, struct FVector& Result Vector){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Direction Vector");

	FGet Direction Vector parms{};	
	parms.Actor = Actor;
	parms.Direction = Direction;
	parms.Distance = Distance;
	parms.__WorldContext = __WorldContext;
	parms.Result Vector = Result Vector;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Set BB Probability(struct ABP_DCMonsterBaseWithOptions_C* MonsterBase, double Probability, struct UObject* __WorldContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set BB Probability");

	FSet BB Probability parms{};	
	parms.MonsterBase = MonsterBase;
	parms.Probability = Probability;
	parms.__WorldContext = __WorldContext;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Get BB Probability(struct ABP_DCMonsterBaseWithOptions_C* MonsterBase, struct UObject* __WorldContext, double& Probability){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get BB Probability");

	FGet BB Probability parms{};	
	parms.MonsterBase = MonsterBase;
	parms.__WorldContext = __WorldContext;
	parms.Probability = Probability;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Set BB Phase(struct ABP_DCMonsterBaseWithOptions_C* MonsterBase, int32_t Phase, struct UObject* __WorldContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set BB Phase");

	FSet BB Phase parms{};	
	parms.MonsterBase = MonsterBase;
	parms.Phase = Phase;
	parms.__WorldContext = __WorldContext;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Get BB Phase(struct ABP_DCMonsterBaseWithOptions_C* MonsterBase, struct UObject* __WorldContext, int32_t& Phase){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get BB Phase");

	FGet BB Phase parms{};	
	parms.MonsterBase = MonsterBase;
	parms.__WorldContext = __WorldContext;
	parms.Phase = Phase;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Remove Timer(struct ADCMonsterBase* DCMonsterBase, int32_t Timer Index, struct UObject* __WorldContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Remove Timer");

	FRemove Timer parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.Timer Index = Timer Index;
	parms.__WorldContext = __WorldContext;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Change GE Attribute And Apply(struct AActor* SourceActor, struct AActor* Target Actor, struct FPrimaryAssetId Gameplay Effect, struct FGameplayTag Set By Caller Tag, double Value, struct UObject* __WorldContext, struct TArray<struct FActiveGameplayEffectHandle>& Return Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Change GE Attribute And Apply");

	FChange GE Attribute And Apply parms{};	
	parms.SourceActor = SourceActor;
	parms.Target Actor = Target Actor;
	parms.Gameplay Effect = Gameplay Effect;
	parms.Set By Caller Tag = Set By Caller Tag;
	parms.Value = Value;
	parms.__WorldContext = __WorldContext;
	parms.Return Value = Return Value;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Set BB HPRatio(struct ABP_DCMonsterBaseWithOptions_C* MonsterBase, double HPRatio, struct UObject* __WorldContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set BB HPRatio");

	FSet BB HPRatio parms{};	
	parms.MonsterBase = MonsterBase;
	parms.HPRatio = HPRatio;
	parms.__WorldContext = __WorldContext;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Get BB HPRatio(struct ABP_DCMonsterBaseWithOptions_C* MonsterBase, struct UObject* __WorldContext, double& HPRatio){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get BB HPRatio");

	FGet BB HPRatio parms{};	
	parms.MonsterBase = MonsterBase;
	parms.__WorldContext = __WorldContext;
	parms.HPRatio = HPRatio;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Get Instigator From Added Tag(struct FGameplayTag Gameplay Tag, struct FGameplayEffectSpecHandle Spec Handle, struct UObject* __WorldContext, bool& Result, struct AActor*& Instigator){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Instigator From Added Tag");

	FGet Instigator From Added Tag parms{};	
	parms.Gameplay Tag = Gameplay Tag;
	parms.Spec Handle = Spec Handle;
	parms.__WorldContext = __WorldContext;
	parms.Result = Result;
	parms.Instigator = Instigator;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Get Interrupt Montage Immune Tags(struct UObject* __WorldContext, struct TArray<struct FGameplayTag>& Interrupt Action Immune Tags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Interrupt Montage Immune Tags");

	FGet Interrupt Montage Immune Tags parms{};	
	parms.__WorldContext = __WorldContext;
	parms.Interrupt Action Immune Tags = Interrupt Action Immune Tags;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Get Debuff Immune Tags(struct UObject* __WorldContext, struct TArray<struct FGameplayTag>& Debuff Immune Tags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Debuff Immune Tags");

	FGet Debuff Immune Tags parms{};	
	parms.__WorldContext = __WorldContext;
	parms.Debuff Immune Tags = Debuff Immune Tags;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Remove Interrtupt Montage Immune(struct AActor* Actor, struct UObject* __WorldContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Remove Interrtupt Montage Immune");

	FRemove Interrtupt Montage Immune parms{};	
	parms.Actor = Actor;
	parms.__WorldContext = __WorldContext;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Set Interrupt Montage Immune(struct AActor* Actor, struct UObject* __WorldContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set Interrupt Montage Immune");

	FSet Interrupt Montage Immune parms{};	
	parms.Actor = Actor;
	parms.__WorldContext = __WorldContext;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Remove Debuff Immune(struct AActor* Actor, bool Fear, bool Impact, bool KnockBack, bool Trap, bool UnableMove, struct UObject* __WorldContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Remove Debuff Immune");

	FRemove Debuff Immune parms{};	
	parms.Actor = Actor;
	parms.Fear = Fear;
	parms.Impact = Impact;
	parms.KnockBack = KnockBack;
	parms.Trap = Trap;
	parms.UnableMove = UnableMove;
	parms.__WorldContext = __WorldContext;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Set Debuff Immune(struct AActor* Actor, bool Fear, bool Impact, bool KnockBack, bool Trap, bool UnableMove, bool Unhealable, struct UObject* __WorldContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set Debuff Immune");

	FSet Debuff Immune parms{};	
	parms.Actor = Actor;
	parms.Fear = Fear;
	parms.Impact = Impact;
	parms.KnockBack = KnockBack;
	parms.Trap = Trap;
	parms.UnableMove = UnableMove;
	parms.Unhealable = Unhealable;
	parms.__WorldContext = __WorldContext;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Launch Enemy(struct FGameplayEventData Event Data, bool Launch Weapon Direction, double XY Value, double Z Value, struct UObject* __WorldContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Launch Enemy");

	FLaunch Enemy parms{};	
	parms.Event Data = Event Data;
	parms.Launch Weapon Direction = Launch Weapon Direction;
	parms.XY Value = XY Value;
	parms.Z Value = Z Value;
	parms.__WorldContext = __WorldContext;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Set Combo Attack(struct UDCGameplayAbilityBase* Gameplay Ability, struct UObject* Caster, double Sphere Overlap Forward Pos, double Sphere Overlap Radius, struct FGameplayTag Event Tag, double Trigger Ratio, struct UObject* __WorldContext, struct ADCCharacterBase*& Target Enemy, struct TArray<struct ADCCharacterBase*>& TargetArray, bool& Combo Triggered){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set Combo Attack");

	FSet Combo Attack parms{};	
	parms.Gameplay Ability = Gameplay Ability;
	parms.Caster = Caster;
	parms.Sphere Overlap Forward Pos = Sphere Overlap Forward Pos;
	parms.Sphere Overlap Radius = Sphere Overlap Radius;
	parms.Event Tag = Event Tag;
	parms.Trigger Ratio = Trigger Ratio;
	parms.__WorldContext = __WorldContext;
	parms.Target Enemy = Target Enemy;
	parms.TargetArray = TargetArray;
	parms.Combo Triggered = Combo Triggered;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Set Projectile Spec and Options(struct UDCGameplayAbilityBase* DCGameplay Ability Base, struct AActor* Spawned Projectile, struct FGameplayTag Gameplay Tag For Spec, double Pierce Count, bool Pierce Obstacle, double Decrease Pierce Obstacle Count, bool Homing, struct ADCCharacterBase* Homing Target, uint8_t Homing Hit Box Type, double Homing Magnitude, struct UObject* __WorldContext, bool& Result, struct AProjectileActor*& Projectile Actor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set Projectile Spec and Options");

	FSet Projectile Spec and Options parms{};	
	parms.DCGameplay Ability Base = DCGameplay Ability Base;
	parms.Spawned Projectile = Spawned Projectile;
	parms.Gameplay Tag For Spec = Gameplay Tag For Spec;
	parms.Pierce Count = Pierce Count;
	parms.Pierce Obstacle = Pierce Obstacle;
	parms.Decrease Pierce Obstacle Count = Decrease Pierce Obstacle Count;
	parms.Homing = Homing;
	parms.Homing Target = Homing Target;
	parms.Homing Hit Box Type = Homing Hit Box Type;
	parms.Homing Magnitude = Homing Magnitude;
	parms.__WorldContext = __WorldContext;
	parms.Result = Result;
	parms.Projectile Actor = Projectile Actor;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Get BB Target Actor(struct ABP_DCMonsterBaseWithOptions_C* MonsterBaseWithOptions, struct UObject* __WorldContext, bool& Result, struct ADCCharacterBase*& DCCharacterBase){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get BB Target Actor");

	FGet BB Target Actor parms{};	
	parms.MonsterBaseWithOptions = MonsterBaseWithOptions;
	parms.__WorldContext = __WorldContext;
	parms.Result = Result;
	parms.DCCharacterBase = DCCharacterBase;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Get Projectile Relative Spawn Transform(struct ADCCharacterBase* Start Actor, struct FVector Start Location, uint8_t Hit Box Type, struct TArray<struct FVector>& Spawn Location, struct TArray<struct FRotator>& Shooting Direction, struct UObject* __WorldContext, bool& Result, struct TArray<struct FVector>& Spawn Transform Location, struct TArray<struct FRotator>& Spawn Transform Rotation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Projectile Relative Spawn Transform");

	FGet Projectile Relative Spawn Transform parms{};	
	parms.Start Actor = Start Actor;
	parms.Start Location = Start Location;
	parms.Hit Box Type = Hit Box Type;
	parms.Spawn Location = Spawn Location;
	parms.Shooting Direction = Shooting Direction;
	parms.__WorldContext = __WorldContext;
	parms.Result = Result;
	parms.Spawn Transform Location = Spawn Transform Location;
	parms.Spawn Transform Rotation = Spawn Transform Rotation;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Remove Immune To Comeback(struct ABP_DCMonsterBaseWithOptions_C* DCMonsterBase, struct UObject* __WorldContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Remove Immune To Comeback");

	FRemove Immune To Comeback parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.__WorldContext = __WorldContext;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Set Immune To Comeback For Linked Monsters(struct TArray<struct ABP_DCMonsterBaseWithOptions_C*>& Linked Monster Array, struct UObject* __WorldContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set Immune To Comeback For Linked Monsters");

	FSet Immune To Comeback For Linked Monsters parms{};	
	parms.Linked Monster Array = Linked Monster Array;
	parms.__WorldContext = __WorldContext;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Set Immune To Comeback(struct ABP_DCMonsterBaseWithOptions_C* DCMonsterBase, struct UObject* __WorldContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set Immune To Comeback");

	FSet Immune To Comeback parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.__WorldContext = __WorldContext;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Get Number Of Active Players In Combat Area(struct TArray<struct ADCCharacterBase*>& Enemies In Combat Area, struct TArray<struct ADCCharacterBase*>& Lost Enemies In Combat Area, struct UObject* __WorldContext, int32_t& Number Of Players){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Number Of Active Players In Combat Area");

	FGet Number Of Active Players In Combat Area parms{};	
	parms.Enemies In Combat Area = Enemies In Combat Area;
	parms.Lost Enemies In Combat Area = Lost Enemies In Combat Area;
	parms.__WorldContext = __WorldContext;
	parms.Number Of Players = Number Of Players;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Get Number Of Active Players In Recognition Area(struct TArray<struct AActor*>& Enemies In Recog Area, struct TArray<struct AActor*>& Lost Enemies In Recog Area, struct UObject* __WorldContext, int32_t& Number Of Players){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Number Of Active Players In Recognition Area");

	FGet Number Of Active Players In Recognition Area parms{};	
	parms.Enemies In Recog Area = Enemies In Recog Area;
	parms.Lost Enemies In Recog Area = Lost Enemies In Recog Area;
	parms.__WorldContext = __WorldContext;
	parms.Number Of Players = Number Of Players;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Get And Compare To BlackBoard Mode(struct ABP_DCMonsterBaseWithOptions_C* DCMonsterBase, enum class E_ModeType Mode Type, struct UObject* __WorldContext, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get And Compare To BlackBoard Mode");

	FGet And Compare To BlackBoard Mode parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.Mode Type = Mode Type;
	parms.__WorldContext = __WorldContext;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Set BlackBoard Mode For Linked Monsters(struct TArray<struct ABP_DCMonsterBaseWithOptions_C*>& Linked Monster Array, enum class E_ModeType Mode Type, struct UObject* __WorldContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set BlackBoard Mode For Linked Monsters");

	FSet BlackBoard Mode For Linked Monsters parms{};	
	parms.Linked Monster Array = Linked Monster Array;
	parms.Mode Type = Mode Type;
	parms.__WorldContext = __WorldContext;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Set BlackBoard Mode(struct ABP_DCMonsterBaseWithOptions_C* DCMonsterBase, enum class E_ModeType Mode Type, struct UObject* __WorldContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set BlackBoard Mode");

	FSet BlackBoard Mode parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.Mode Type = Mode Type;
	parms.__WorldContext = __WorldContext;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Check Target Has State Tags To Lose From Array(struct UObject* Target, struct UObject* __WorldContext, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Check Target Has State Tags To Lose From Array");

	FCheck Target Has State Tags To Lose From Array parms{};	
	parms.Target = Target;
	parms.__WorldContext = __WorldContext;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Add Timer(struct AActor* Actor, int32_t Timer Index, double Second, struct UObject* __WorldContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Add Timer");

	FAdd Timer parms{};	
	parms.Actor = Actor;
	parms.Timer Index = Timer Index;
	parms.Second = Second;
	parms.__WorldContext = __WorldContext;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Get Max Distance From Perception(struct ABP_DCMonsterBaseWithOptions_C* Monster BP, enum class E_DistanceFromVariables Get Distance From, double Default Distance, struct UObject* __WorldContext, bool& Result, double& Return Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Max Distance From Perception");

	FGet Max Distance From Perception parms{};	
	parms.Monster BP = Monster BP;
	parms.Get Distance From = Get Distance From;
	parms.Default Distance = Default Distance;
	parms.__WorldContext = __WorldContext;
	parms.Result = Result;
	parms.Return Value = Return Value;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Filter Target From CombatArea(struct FVector SpawnLocation, double FilterDistanceFromSpawnLocation, struct TArray<struct ADCCharacterBase*>& TargetArray, struct UObject* __WorldContext, bool& Return Value, struct TArray<struct ADCCharacterBase*>& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Filter Target From CombatArea");

	FFilter Target From CombatArea parms{};	
	parms.SpawnLocation = SpawnLocation;
	parms.FilterDistanceFromSpawnLocation = FilterDistanceFromSpawnLocation;
	parms.TargetArray = TargetArray;
	parms.__WorldContext = __WorldContext;
	parms.Return Value = Return Value;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Filter Target From Spawn Location(struct FVector SpawnLocation, double FilterDistanceFromSpawnLocation, struct TArray<struct ADCCharacterBase*>& TargetArray, struct UObject* __WorldContext, bool& Return Value, struct TArray<struct ADCCharacterBase*>& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Filter Target From Spawn Location");

	FFilter Target From Spawn Location parms{};	
	parms.SpawnLocation = SpawnLocation;
	parms.FilterDistanceFromSpawnLocation = FilterDistanceFromSpawnLocation;
	parms.TargetArray = TargetArray;
	parms.__WorldContext = __WorldContext;
	parms.Return Value = Return Value;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Filter Target Has Aggro(struct ABP_DCMonsterBase_C* MonsterBase, struct TArray<struct ADCCharacterBase*>& Input TargetArray, struct UObject* __WorldContext, bool& Return Value, struct TArray<struct ADCCharacterBase*>& Output TargetArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Filter Target Has Aggro");

	FFilter Target Has Aggro parms{};	
	parms.MonsterBase = MonsterBase;
	parms.Input TargetArray = Input TargetArray;
	parms.__WorldContext = __WorldContext;
	parms.Return Value = Return Value;
	parms.Output TargetArray = Output TargetArray;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Get Target Array(struct ADCMonsterBase* DCMonsterBase, enum class E_SensorType Get List From, bool Get From CombatArea, bool Get Target Has Aggro Only, struct UObject* __WorldContext, bool& Return Value, struct TArray<struct ADCCharacterBase*>& TargetArray){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Get Target Array");

	FGet Target Array parms{};	
	parms.DCMonsterBase = DCMonsterBase;
	parms.Get List From = Get List From;
	parms.Get From CombatArea = Get From CombatArea;
	parms.Get Target Has Aggro Only = Get Target Has Aggro Only;
	parms.__WorldContext = __WorldContext;
	parms.Return Value = Return Value;
	parms.TargetArray = TargetArray;

	ProcessEvent(fn, &parms);
}

void UMonsterBPLibrary_C::Set Target Provider(struct ABP_DCMonsterBaseWithOptions_C* Source Target, struct UDCGameObjectLinkComponent* DCGame Object Link, struct FGameplayTagQuery Provider Object Tag, struct UObject* __WorldContext, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MonsterBPLibrary.MonsterBPLibrary_C.Set Target Provider");

	FSet Target Provider parms{};	
	parms.Source Target = Source Target;
	parms.DCGame Object Link = DCGame Object Link;
	parms.Provider Object Tag = Provider Object Tag;
	parms.__WorldContext = __WorldContext;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

