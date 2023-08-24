#pragma once 
#include <CommonInput_Structs.h>
 
 
 
// Class CommonInput.CommonInputActionDomain
// Size: 0x40(Inherited: 0x30)
struct UCommonInputActionDomain : UDataAsset
{
	uint8_t Behavior;  // 0x30 (0x30)
	uint8_t InnerBehavior;  // 0x34 (0x34)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool bUseActionDomainDesiredInputConfig : 1;  // 0x38 (0x38)
	uint8_t InputMode;  // 0x39 (0x39)
	uint8_t MouseCaptureMode;  // 0x3A (0x3A)
	char pad_59[5];  // 0x3B (0x3B)


}; 
 
 


// Class CommonInput.CommonInputSubsystem
// Size: 0x108(Inherited: 0x30)
struct UCommonInputSubsystem : ULocalPlayerSubsystem
{
	char pad_48[40];  // 0x30 (0x30)
	struct FMulticastInlineDelegate OnInputMethodChanged;  // 0x58 (0x58)
	int32_t NumberOfInputMethodChangesRecently;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)
	double LastInputMethodChangeTime;  // 0x70 (0x70)
	double LastTimeInputMethodThrashingBegan;  // 0x78 (0x78)
	uint8_t LastInputType;  // 0x80 (0x80)
	uint8_t CurrentInputType;  // 0x81 (0x81)
	char pad_130[2];  // 0x82 (0x82)
	struct FName GamepadInputType;  // 0x84 (0x84)
	char pad_140[4];  // 0x8C (0x8C)
	struct TMap<struct FName, uint8_t> CurrentInputLocks;  // 0x90 (0x90)
	char pad_224[24];  // 0xE0 (0xE0)
	struct UCommonInputActionDomainTable* ActionDomainTable;  // 0xF8 (0xF8)
	char pad_256_1 : 7;  // 0x100 (0x100)
	bool bIsGamepadSimulatedClick : 1;  // 0x100 (0x100)
	char pad_257[7];  // 0x101 (0x101)


	bool ShouldShowInputKeys(); // Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys
	void SetGamepadInputType(struct FName InGamepadInputType); // Function CommonInput.CommonInputSubsystem.SetGamepadInputType
	void SetCurrentInputType(uint8_t NewInputType); // Function CommonInput.CommonInputSubsystem.SetCurrentInputType
	bool IsUsingPointerInput(); // Function CommonInput.CommonInputSubsystem.IsUsingPointerInput
	bool IsInputMethodActive(uint8_t InputMethod); // Function CommonInput.CommonInputSubsystem.IsInputMethodActive
	uint8_t GetDefaultInputType(); // Function CommonInput.CommonInputSubsystem.GetDefaultInputType
	uint8_t GetCurrentInputType(); // Function CommonInput.CommonInputSubsystem.GetCurrentInputType
	struct FName GetCurrentGamepadName(); // Function CommonInput.CommonInputSubsystem.GetCurrentGamepadName
}; 
 
 


// Class CommonInput.CommonInputSettings
// Size: 0x130(Inherited: 0x38)
struct UCommonInputSettings : UDeveloperSettings
{
	struct TSoftClassPtr<UObject> InputData;  // 0x38 (0x38)
	struct FPerPlatformSettings PlatformInput;  // 0x68 (0x68)
	struct TMap<struct FName, struct FCommonInputPlatformBaseData> CommonInputPlatformData;  // 0x78 (0x78)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool bEnableInputMethodThrashingProtection : 1;  // 0xC8 (0xC8)
	char pad_201[3];  // 0xC9 (0xC9)
	int32_t InputMethodThrashingLimit;  // 0xCC (0xCC)
	double InputMethodThrashingWindowInSeconds;  // 0xD0 (0xD0)
	double InputMethodThrashingCooldownInSeconds;  // 0xD8 (0xD8)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool bAllowOutOfFocusDeviceInput : 1;  // 0xE0 (0xE0)
	char pad_225_1 : 7;  // 0xE1 (0xE1)
	bool bEnableDefaultInputConfig : 1;  // 0xE1 (0xE1)
	char pad_226[6];  // 0xE2 (0xE2)
	struct TSoftObjectPtr<UCommonInputActionDomainTable> ActionDomainTable;  // 0xE8 (0xE8)
	char pad_280[8];  // 0x118 (0x118)
	UCommonUIInputData* InputDataClass;  // 0x120 (0x120)
	struct UCommonInputActionDomainTable* ActionDomainTablePtr;  // 0x128 (0x128)


}; 
 
 


// Class CommonInput.CommonInputPlatformSettings
// Size: 0x70(Inherited: 0x40)
struct UCommonInputPlatformSettings : UPlatformSettings
{
	uint8_t DefaultInputType;  // 0x40 (0x40)
	char pad_65_1 : 7;  // 0x41 (0x41)
	bool bSupportsMouseAndKeyboard : 1;  // 0x41 (0x41)
	char pad_66_1 : 7;  // 0x42 (0x42)
	bool bSupportsTouch : 1;  // 0x42 (0x42)
	char pad_67_1 : 7;  // 0x43 (0x43)
	bool bSupportsGamepad : 1;  // 0x43 (0x43)
	struct FName DefaultGamepadName;  // 0x44 (0x44)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bCanChangeGamepadType : 1;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)
	struct TArray<struct TSoftClassPtr<UObject>> ControllerData;  // 0x50 (0x50)
	struct TArray<UCommonInputBaseControllerData*> ControllerDataClasses;  // 0x60 (0x60)


}; 
 
 


// Class CommonInput.CommonInputActionDomainTable
// Size: 0x48(Inherited: 0x30)
struct UCommonInputActionDomainTable : UDataAsset
{
	struct TArray<struct UCommonInputActionDomain*> ActionDomains;  // 0x30 (0x30)
	uint8_t InputMode;  // 0x40 (0x40)
	uint8_t MouseCaptureMode;  // 0x41 (0x41)
	char pad_66[6];  // 0x42 (0x42)


}; 
 
 


// Class CommonInput.CommonUIInputData
// Size: 0x48(Inherited: 0x28)
struct UCommonUIInputData : UObject
{
	struct FDataTableRowHandle DefaultClickAction;  // 0x28 (0x28)
	struct FDataTableRowHandle DefaultBackAction;  // 0x38 (0x38)


}; 
 
 


// Class CommonInput.CommonInputBaseControllerData
// Size: 0x110(Inherited: 0x28)
struct UCommonInputBaseControllerData : UObject
{
	uint8_t InputType;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	struct FName GamepadName;  // 0x2C (0x2C)
	char pad_52[4];  // 0x34 (0x34)
	struct FText GamepadDisplayName;  // 0x38 (0x38)
	struct FText GamepadCategory;  // 0x50 (0x50)
	struct FText GamepadPlatformName;  // 0x68 (0x68)
	struct TArray<struct FInputDeviceIdentifierPair> GamepadHardwareIdMapping;  // 0x80 (0x80)
	struct TSoftObjectPtr<UTexture2D> ControllerTexture;  // 0x90 (0x90)
	struct TSoftObjectPtr<UTexture2D> ControllerButtonMaskTexture;  // 0xC0 (0xC0)
	struct TArray<struct FCommonInputKeyBrushConfiguration> InputBrushDataMap;  // 0xF0 (0xF0)
	struct TArray<struct FCommonInputKeySetBrushConfiguration> InputBrushKeySets;  // 0x100 (0x100)


	struct TArray<struct FName> GetRegisteredGamepads(); // Function CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads
}; 
 
 


