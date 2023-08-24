#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function ChainPlugin.ChainComponent.getChainPoint
struct FgetChainPoint
{
	int32_t Index;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector ReturnValue;  // 0x8 (0x8)


}; 
 
 // DelegateFunction ChainPlugin.OnChainCollide__DelegateSignature
struct FOnChainCollide__DelegateSignature
{
	struct TArray<struct FHitResult> hits;  // 0x0 (0x0)


}; 
 
 // DelegateFunction ChainPlugin.OnSoundReached__DelegateSignature
struct FOnSoundReached__DelegateSignature
{
	struct FVector Velocity;  // 0x0 (0x0)


}; 
 
 // Function ChainPlugin.ChainComponent.ApplyForce
struct FApplyForce
{
	struct FVector InPosition;  // 0x0 (0x0)
	float InRadius;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FVector InForce;  // 0x20 (0x20)
	struct TArray<int32_t> ReturnValue;  // 0x38 (0x38)


}; 
 
 