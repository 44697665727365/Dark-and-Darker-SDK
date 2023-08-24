#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct Slate.CustomizedToolMenu
struct FCustomizedToolMenu
{
	struct FName Name;  // 0x0 (0x0)
	struct TMap<struct FName, struct FCustomizedToolMenuEntry> Entries;  // 0x8 (0x8)
	struct TMap<struct FName, struct FCustomizedToolMenuSection> Sections;  // 0x58 (0x58)
	struct TMap<struct FName, struct FCustomizedToolMenuNameArray> EntryOrder;  // 0xA8 (0xA8)
	struct TArray<struct FName> SectionOrder;  // 0xF8 (0xF8)
	char pad_264[232];  // 0x108 (0x108)


}; 
 
 // ScriptStruct Slate.VirtualKeyboardOptions
struct FVirtualKeyboardOptions
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnableAutocorrect : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Slate.CustomizedToolMenuNameArray
struct FCustomizedToolMenuNameArray
{
	struct TArray<struct FName> Names;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Slate.InputChord
struct FInputChord
{
	struct FKey Key;  // 0x0 (0x0)
	char bShift : 1;  // 0x18 (0x18)
	char bCtrl : 1;  // 0x18 (0x18)
	char bAlt : 1;  // 0x18 (0x18)
	char bCmd : 1;  // 0x18 (0x18)
	char pad_24_1 : 4;  // 0x18 (0x18)
	char pad_25[8];  // 0x19 (0x19)


}; 
 
 // ScriptStruct Slate.Anchors
struct FAnchors
{
	struct FVector2D Minimum;  // 0x0 (0x0)
	struct FVector2D Maximum;  // 0x10 (0x10)


}; 
 
 // ScriptStruct Slate.CustomizedToolMenuEntry
struct FCustomizedToolMenuEntry
{
	uint8_t Visibility;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Slate.CustomizedToolMenuSection
struct FCustomizedToolMenuSection
{
	uint8_t Visibility;  // 0x0 (0x0)


}; 
 
 