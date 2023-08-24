#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function CommonInput.CommonInputSubsystem.SetGamepadInputType
struct FSetGamepadInputType
{
	struct FName InGamepadInputType;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CommonInput.InputDeviceIdentifierPair
struct FInputDeviceIdentifierPair
{
	struct FName InputDeviceName;  // 0x0 (0x0)
	struct FString HardwareDeviceIdentifier;  // 0x8 (0x8)


}; 
 
 // DelegateFunction CommonInput.InputMethodChangedDelegate__DelegateSignature
struct FInputMethodChangedDelegate__DelegateSignature
{
	uint8_t bNewInputType;  // 0x0 (0x0)


}; 
 
 // ScriptStruct CommonInput.CommonInputKeyBrushConfiguration
struct FCommonInputKeyBrushConfiguration
{
	struct FKey Key;  // 0x0 (0x0)
	char pad_24[8];  // 0x18 (0x18)
	struct FSlateBrush KeyBrush;  // 0x20 (0x20)


}; 
 
 // ScriptStruct CommonInput.CommonInputKeySetBrushConfiguration
struct FCommonInputKeySetBrushConfiguration
{
	struct TArray<struct FKey> Keys;  // 0x0 (0x0)
	struct FSlateBrush KeyBrush;  // 0x10 (0x10)


}; 
 
 // ScriptStruct CommonInput.CommonInputPlatformBaseData
struct FCommonInputPlatformBaseData
{
	char pad_0[8];  // 0x0 (0x0)
	uint8_t DefaultInputType;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool bSupportsMouseAndKeyboard : 1;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool bSupportsGamepad : 1;  // 0xA (0xA)
	char pad_11[1];  // 0xB (0xB)
	struct FName DefaultGamepadName;  // 0xC (0xC)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bCanChangeGamepadType : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool bSupportsTouch : 1;  // 0x15 (0x15)
	char pad_22[2];  // 0x16 (0x16)
	struct TArray<struct TSoftClassPtr<UObject>> ControllerData;  // 0x18 (0x18)
	struct TArray<UCommonInputBaseControllerData*> ControllerDataClasses;  // 0x28 (0x28)


}; 
 
 // Function CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads
struct FGetRegisteredGamepads
{
	struct TArray<struct FName> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonInput.CommonInputSubsystem.GetCurrentGamepadName
struct FGetCurrentGamepadName
{
	struct FName ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonInput.CommonInputSubsystem.IsInputMethodActive
struct FIsInputMethodActive
{
	uint8_t InputMethod;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool ReturnValue : 1;  // 0x1 (0x1)


}; 
 
 // Function CommonInput.CommonInputSubsystem.GetCurrentInputType
struct FGetCurrentInputType
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonInput.CommonInputSubsystem.GetDefaultInputType
struct FGetDefaultInputType
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function CommonInput.CommonInputSubsystem.IsUsingPointerInput
struct FIsUsingPointerInput
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function CommonInput.CommonInputSubsystem.SetCurrentInputType
struct FSetCurrentInputType
{
	uint8_t NewInputType;  // 0x0 (0x0)


}; 
 
 // Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys
struct FShouldShowInputKeys
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 