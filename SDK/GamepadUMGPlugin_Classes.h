#pragma once 
#include <GamepadUMGPlugin_Structs.h>
 
 
 
// Class GamepadUMGPlugin.GamepadCursorSettings
// Size: 0xF8(Inherited: 0x38)
struct UGamepadCursorSettings : UDeveloperSettings
{
	struct FRuntimeFloatCurve AnalogCursorAccelerationCurve;  // 0x38 (0x38)
	float MaxAnalogCursorSpeed;  // 0xC0 (0xC0)
	float MaxAnalogCursorSpeedWhenHovered;  // 0xC4 (0xC4)
	float AnalogCursorDragCoefficient;  // 0xC8 (0xC8)
	float AnalogCursorDragCoefficientWhenHovered;  // 0xCC (0xCC)
	float MinAnalogCursorSpeed;  // 0xD0 (0xD0)
	float AnalogCursorDeadZone;  // 0xD4 (0xD4)
	float AnalogCursorAccelerationMultiplier;  // 0xD8 (0xD8)
	float AnalogCursorSize;  // 0xDC (0xDC)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool bUseEngineAnalogCursor : 1;  // 0xE0 (0xE0)
	char pad_225_1 : 7;  // 0xE1 (0xE1)
	bool bAnalogCursorNoAcceleration : 1;  // 0xE1 (0xE1)
	char pad_226[22];  // 0xE2 (0xE2)


}; 
 
 


// Class GamepadUMGPlugin.VirtualCursorFunctionLibrary
// Size: 0x28(Inherited: 0x28)
struct UVirtualCursorFunctionLibrary : UBlueprintFunctionLibrary
{


	bool IsCursorOverInteractableWidget(); // Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.IsCursorOverInteractableWidget
	void EnableVirtualCursor(struct APlayerController* PC); // Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.EnableVirtualCursor
	void DisableVirtualCursor(struct APlayerController* PC); // Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.DisableVirtualCursor
}; 
 
 


