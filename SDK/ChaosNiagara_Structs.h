#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ChaosNiagara.ChaosDestructionEvent
struct FChaosDestructionEvent
{
	struct FVector Position;  // 0x0 (0x0)
	struct FVector Normal;  // 0x18 (0x18)
	struct FVector Velocity;  // 0x30 (0x30)
	struct FVector AngularVelocity;  // 0x48 (0x48)
	float ExtentMin;  // 0x60 (0x60)
	float ExtentMax;  // 0x64 (0x64)
	int32_t ParticleID;  // 0x68 (0x68)
	float Time;  // 0x6C (0x6C)
	int32_t Type;  // 0x70 (0x70)
	char pad_116[4];  // 0x74 (0x74)


}; 
 
 