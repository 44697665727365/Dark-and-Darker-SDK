#pragma once 
#include <ChainPlugin_Structs.h>
 
 
 
// Class ChainPlugin.ChainComponent
// Size: 0x740(Inherited: 0x570)
struct UChainComponent : UMeshComponent
{
	struct FMulticastInlineDelegate onSoundReached;  // 0x570 (0x570)
	struct FMulticastInlineDelegate onCollide;  // 0x580 (0x580)
	struct UStaticMesh* chainMesh;  // 0x590 (0x590)
	struct FVector Scale;  // 0x598 (0x598)
	int32_t Segments;  // 0x5B0 (0x5B0)
	char pad_1460[4];  // 0x5B4 (0x5B4)
	struct FVector additiveRotation;  // 0x5B8 (0x5B8)
	float ChainLength;  // 0x5D0 (0x5D0)
	char pad_1492_1 : 7;  // 0x5D4 (0x5D4)
	bool bIsLocal : 1;  // 0x5D4 (0x5D4)
	char pad_1493[3];  // 0x5D5 (0x5D5)
	struct FVector endPoint;  // 0x5D8 (0x5D8)
	char pad_1520_1 : 7;  // 0x5F0 (0x5F0)
	bool attachStart : 1;  // 0x5F0 (0x5F0)
	char pad_1521[7];  // 0x5F1 (0x5F1)
	struct FComponentReference attachStartTo;  // 0x5F8 (0x5F8)
	struct FName attachStartToSocket;  // 0x620 (0x620)
	char pad_1576_1 : 7;  // 0x628 (0x628)
	bool attachEnd : 1;  // 0x628 (0x628)
	char pad_1577[7];  // 0x629 (0x629)
	struct FComponentReference attachEndTo;  // 0x630 (0x630)
	struct FName attachEndToSocket;  // 0x658 (0x658)
	struct FComponentReference attachComponentToStart;  // 0x660 (0x660)
	char pad_1672_1 : 7;  // 0x688 (0x688)
	bool rotateStartAttachment : 1;  // 0x688 (0x688)
	char pad_1673[7];  // 0x689 (0x689)
	struct FComponentReference attachComponentToEnd;  // 0x690 (0x690)
	char pad_1720_1 : 7;  // 0x6B8 (0x6B8)
	bool rotateEndAttachment : 1;  // 0x6B8 (0x6B8)
	char pad_1721[3];  // 0x6B9 (0x6B9)
	float Gravity;  // 0x6BC (0x6BC)
	int32_t Stiffness;  // 0x6C0 (0x6C0)
	float Friction;  // 0x6C4 (0x6C4)
	float chainWidth;  // 0x6C8 (0x6C8)
	char pad_1740_1 : 7;  // 0x6CC (0x6CC)
	bool selfCollision : 1;  // 0x6CC (0x6CC)
	char pad_1741[3];  // 0x6CD (0x6CD)
	float selfCollisionWidth;  // 0x6D0 (0x6D0)
	float selfCollisionThreshold;  // 0x6D4 (0x6D4)
	int32_t Skip;  // 0x6D8 (0x6D8)
	char pad_1756_1 : 7;  // 0x6DC (0x6DC)
	bool drawDebugger : 1;  // 0x6DC (0x6DC)
	char pad_1757[3];  // 0x6DD (0x6DD)
	struct UInstancedStaticMeshComponent* instanceComponent;  // 0x6E0 (0x6E0)
	float soundThreshold;  // 0x6E8 (0x6E8)
	int32_t soundSkip;  // 0x6EC (0x6EC)
	char pad_1776[80];  // 0x6F0 (0x6F0)


	struct FVector getChainPoint(int32_t Index); // Function ChainPlugin.ChainComponent.getChainPoint
	struct TArray<int32_t> ApplyForce(struct FVector InPosition, float InRadius, struct FVector InForce); // Function ChainPlugin.ChainComponent.ApplyForce
}; 
 
 


// Class ChainPlugin.SplineChainComponent
// Size: 0x7D0(Inherited: 0x740)
struct USplineChainComponent : UChainComponent
{
	struct FRuntimeFloatCurve SplineFollowWeight;  // 0x738 (0x738)
	struct USplineComponent* SplineComponent;  // 0x7C0 (0x7C0)


}; 
 
 


