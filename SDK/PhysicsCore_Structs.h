#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct PhysicsCore.BodyInstanceCore
struct FBodyInstanceCore
{
	char pad_0[16];  // 0x0 (0x0)
	char bSimulatePhysics : 1;  // 0x10 (0x10)
	char bOverrideMass : 1;  // 0x10 (0x10)
	char bEnableGravity : 1;  // 0x10 (0x10)
	char bAutoWeld : 1;  // 0x10 (0x10)
	char bStartAwake : 1;  // 0x10 (0x10)
	char bGenerateWakeEvents : 1;  // 0x10 (0x10)
	char bUpdateMassWhenScaleChanges : 1;  // 0x10 (0x10)
	char pad_16_1 : 1;  // 0x10 (0x10)
	char pad_17[8];  // 0x11 (0x11)


}; 
 
 