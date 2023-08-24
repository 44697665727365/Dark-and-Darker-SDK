#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// DelegateFunction ChaosSolverEngine.OnChaosPhysicsCollision__DelegateSignature
struct FOnChaosPhysicsCollision__DelegateSignature
{
	struct FChaosPhysicsCollisionInfo CollisionInfo;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
struct FChaosPhysicsCollisionInfo
{
	struct UPrimitiveComponent* Component;  // 0x0 (0x0)
	struct UPrimitiveComponent* OtherComponent;  // 0x8 (0x8)
	struct FVector Location;  // 0x10 (0x10)
	struct FVector Normal;  // 0x28 (0x28)
	struct FVector AccumulatedImpulse;  // 0x40 (0x40)
	struct FVector Velocity;  // 0x58 (0x58)
	struct FVector OtherVelocity;  // 0x70 (0x70)
	struct FVector AngularVelocity;  // 0x88 (0x88)
	struct FVector OtherAngularVelocity;  // 0xA0 (0xA0)
	float Mass;  // 0xB8 (0xB8)
	float OtherMass;  // 0xBC (0xBC)


}; 
 
 // ScriptStruct ChaosSolverEngine.ChaosCrumblingEvent
struct FChaosCrumblingEvent
{
	struct UPrimitiveComponent* Component;  // 0x0 (0x0)
	struct FVector Location;  // 0x8 (0x8)
	struct FQuat Orientation;  // 0x20 (0x20)
	struct FVector LinearVelocity;  // 0x40 (0x40)
	struct FVector AngularVelocity;  // 0x58 (0x58)
	float Mass;  // 0x70 (0x70)
	char pad_116[4];  // 0x74 (0x74)
	struct FBox LocalBounds;  // 0x78 (0x78)
	struct TArray<int32_t> Children;  // 0xB0 (0xB0)


}; 
 
 // ScriptStruct ChaosSolverEngine.ChaosBreakEvent
struct FChaosBreakEvent
{
	struct UPrimitiveComponent* Component;  // 0x0 (0x0)
	struct FVector Location;  // 0x8 (0x8)
	struct FVector Velocity;  // 0x20 (0x20)
	struct FVector AngularVelocity;  // 0x38 (0x38)
	float Mass;  // 0x50 (0x50)
	int32_t Index;  // 0x54 (0x54)


}; 
 
 // ScriptStruct ChaosSolverEngine.ChaosRemovalEvent
struct FChaosRemovalEvent
{
	struct UPrimitiveComponent* Component;  // 0x0 (0x0)
	struct FVector Location;  // 0x8 (0x8)
	float Mass;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // ScriptStruct ChaosSolverEngine.CrumblingEventCallbackWrapper
struct FCrumblingEventCallbackWrapper
{
	char pad_0[64];  // 0x0 (0x0)


}; 
 
 // ScriptStruct ChaosSolverEngine.BreakEventCallbackWrapper
struct FBreakEventCallbackWrapper
{
	char pad_0[64];  // 0x0 (0x0)


}; 
 
 // ScriptStruct ChaosSolverEngine.RemovalEventCallbackWrapper
struct FRemovalEventCallbackWrapper
{
	char pad_0[64];  // 0x0 (0x0)


}; 
 
 // ScriptStruct ChaosSolverEngine.ChaosHandlerSet
struct FChaosHandlerSet
{
	char pad_0[8];  // 0x0 (0x0)
	struct TSet<struct UObject*> ChaosHandlers;  // 0x8 (0x8)


}; 
 
 // ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
struct FChaosDebugSubstepControl
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bPause : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bSubstep : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool bStep : 1;  // 0x2 (0x2)


}; 
 
 // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
struct FConvertPhysicsCollisionToHitResult
{
	struct FChaosPhysicsCollisionInfo PhysicsCollision;  // 0x0 (0x0)
	struct FHitResult ReturnValue;  // 0xC0 (0xC0)


}; 
 
 // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
struct FSetSolverActive
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bActive : 1;  // 0x0 (0x0)


}; 
 
 