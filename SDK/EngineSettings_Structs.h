#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct EngineSettings.AutoCompleteCommand
struct FAutoCompleteCommand
{
	struct FString Command;  // 0x0 (0x0)
	struct FString Desc;  // 0x10 (0x10)
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // Function EngineSettings.GameMapsSettings.GetGameMapsSettings
struct FGetGameMapsSettings
{
	struct UGameMapsSettings* ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct EngineSettings.GameModeName
struct FGameModeName
{
	struct FString Name;  // 0x0 (0x0)
	struct FSoftClassPath GameMode;  // 0x10 (0x10)


}; 
 
 // ScriptStruct EngineSettings.TemplateMapInfoOverride
struct FTemplateMapInfoOverride
{
	struct FSoftObjectPath Thumbnail;  // 0x0 (0x0)
	struct FSoftObjectPath Map;  // 0x20 (0x20)
	struct FText DisplayName;  // 0x40 (0x40)


}; 
 
 // Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
struct FGetSkipAssigningGamepadToPlayer1
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
struct FSetSkipAssigningGamepadToPlayer1
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bSkipFirstPlayer : 1;  // 0x0 (0x0)


}; 
 
 