#pragma once 
#include <CableComponent_Structs.h>
 
 
 
// Class CableComponent.CableActor
// Size: 0x298(Inherited: 0x290)
struct ACableActor : AActor
{
	struct UCableComponent* CableComponent;  // 0x290 (0x290)


}; 
 
 


// Class CableComponent.CableComponent
// Size: 0x620(Inherited: 0x570)
struct UCableComponent : UMeshComponent
{
	char pad_1392_1 : 7;  // 0x570 (0x570)
	bool bAttachStart : 1;  // 0x570 (0x570)
	char pad_1393_1 : 7;  // 0x571 (0x571)
	bool bAttachEnd : 1;  // 0x571 (0x571)
	char pad_1394[6];  // 0x572 (0x572)
	struct FComponentReference attachEndTo;  // 0x578 (0x578)
	struct FName AttachEndToSocketName;  // 0x5A0 (0x5A0)
	struct FVector EndLocation;  // 0x5A8 (0x5A8)
	float CableLength;  // 0x5C0 (0x5C0)
	int32_t NumSegments;  // 0x5C4 (0x5C4)
	float SubstepTime;  // 0x5C8 (0x5C8)
	int32_t SolverIterations;  // 0x5CC (0x5CC)
	char pad_1488_1 : 7;  // 0x5D0 (0x5D0)
	bool bEnableStiffness : 1;  // 0x5D0 (0x5D0)
	char pad_1489_1 : 7;  // 0x5D1 (0x5D1)
	bool bUseSubstepping : 1;  // 0x5D1 (0x5D1)
	char pad_1490_1 : 7;  // 0x5D2 (0x5D2)
	bool bSkipCableUpdateWhenNotVisible : 1;  // 0x5D2 (0x5D2)
	char pad_1491_1 : 7;  // 0x5D3 (0x5D3)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered : 1;  // 0x5D3 (0x5D3)
	char pad_1492_1 : 7;  // 0x5D4 (0x5D4)
	bool bEnableCollision : 1;  // 0x5D4 (0x5D4)
	char pad_1493[3];  // 0x5D5 (0x5D5)
	float CollisionFriction;  // 0x5D8 (0x5D8)
	char pad_1500[4];  // 0x5DC (0x5DC)
	struct FVector CableForce;  // 0x5E0 (0x5E0)
	float CableGravityScale;  // 0x5F8 (0x5F8)
	float CableWidth;  // 0x5FC (0x5FC)
	int32_t NumSides;  // 0x600 (0x600)
	float TileMaterial;  // 0x604 (0x604)
	char pad_1544[24];  // 0x608 (0x608)


	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations); // Function CableComponent.CableComponent.GetCableParticleLocations
	struct USceneComponent* GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent
	struct AActor* GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor
}; 
 
 


