#pragma once 
#include <ChaosSolverEngine_Structs.h>
 
 
 
// Class ChaosSolverEngine.ChaosSolver
// Size: 0x28(Inherited: 0x28)
struct UChaosSolver : UObject
{


}; 
 
 


// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0xA8(Inherited: 0xA0)
struct UChaosDebugDrawComponent : UActorComponent
{
	char pad_160[8];  // 0xA0 (0xA0)


}; 
 
 


// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x60(Inherited: 0x38)
struct UChaosSolverSettings : UDeveloperSettings
{
	char pad_56[8];  // 0x38 (0x38)
	struct FSoftClassPath DefaultChaosSolverActorClass;  // 0x40 (0x40)


}; 
 
 


// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x388(Inherited: 0x290)
struct AChaosSolverActor : AActor
{
	struct FChaosSolverConfiguration Properties;  // 0x290 (0x290)
	float TimeStepMultiplier;  // 0x2F8 (0x2F8)
	int32_t CollisionIterations;  // 0x2FC (0x2FC)
	int32_t PushOutIterations;  // 0x300 (0x300)
	int32_t PushOutPairIterations;  // 0x304 (0x304)
	float ClusterConnectionFactor;  // 0x308 (0x308)
	uint8_t ClusterUnionConnectionType;  // 0x30C (0x30C)
	char pad_781_1 : 7;  // 0x30D (0x30D)
	bool DoGenerateCollisionData : 1;  // 0x30D (0x30D)
	char pad_782[2];  // 0x30E (0x30E)
	struct FSolverCollisionFilterSettings CollisionFilterSettings;  // 0x310 (0x310)
	char pad_800_1 : 7;  // 0x320 (0x320)
	bool DoGenerateBreakingData : 1;  // 0x320 (0x320)
	char pad_801[3];  // 0x321 (0x321)
	struct FSolverBreakingFilterSettings BreakingFilterSettings;  // 0x324 (0x324)
	char pad_820_1 : 7;  // 0x334 (0x334)
	bool DoGenerateTrailingData : 1;  // 0x334 (0x334)
	char pad_821[3];  // 0x335 (0x335)
	struct FSolverTrailingFilterSettings TrailingFilterSettings;  // 0x338 (0x338)
	float MassScale;  // 0x348 (0x348)
	char pad_844_1 : 7;  // 0x34C (0x34C)
	bool bHasFloor : 1;  // 0x34C (0x34C)
	char pad_845[3];  // 0x34D (0x34D)
	float FloorHeight;  // 0x350 (0x350)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl;  // 0x354 (0x354)
	char pad_855[1];  // 0x357 (0x357)
	struct UBillboardComponent* SpriteComponent;  // 0x358 (0x358)
	char pad_864[24];  // 0x360 (0x360)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent;  // 0x378 (0x378)
	char pad_896[8];  // 0x380 (0x380)


	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
}; 
 
 


// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0xA8(Inherited: 0xA0)
struct UChaosEventListenerComponent : UActorComponent
{
	char pad_160[8];  // 0xA0 (0xA0)


}; 
 
 


// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x308(Inherited: 0xA8)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent
{
	char pad_168[272];  // 0xA8 (0xA8)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations;  // 0x1B8 (0x1B8)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;  // 0x208 (0x208)
	struct TMap<struct UPrimitiveComponent*, struct FRemovalEventCallbackWrapper> RemovalEventRegistrations;  // 0x258 (0x258)
	struct TMap<struct UPrimitiveComponent*, struct FCrumblingEventCallbackWrapper> CrumblingEventRegistrations;  // 0x2A8 (0x2A8)
	char pad_760[16];  // 0x2F8 (0x2F8)


}; 
 
 


// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x28(Inherited: 0x28)
struct UChaosNotifyHandlerInterface : UInterface
{


}; 
 
 


// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x28(Inherited: 0x28)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary
{


	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo& PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
}; 
 
 


