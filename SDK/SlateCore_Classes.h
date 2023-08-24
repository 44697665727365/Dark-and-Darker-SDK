#pragma once 
#include <SlateCore_Structs.h>
 
 
 
// Class SlateCore.SlateWidgetStyleContainerInterface
// Size: 0x28(Inherited: 0x28)
struct USlateWidgetStyleContainerInterface : UInterface
{


}; 
 
 


// Class SlateCore.SlateTypes
// Size: 0x28(Inherited: 0x28)
struct USlateTypes : UObject
{


}; 
 
 


// Class SlateCore.SlateWidgetStyleAsset
// Size: 0x30(Inherited: 0x28)
struct USlateWidgetStyleAsset : UObject
{
	struct USlateWidgetStyleContainerBase* CustomStyle;  // 0x28 (0x28)


}; 
 
 


// Class SlateCore.FontBulkData
// Size: 0x70(Inherited: 0x28)
struct UFontBulkData : UObject
{
	char pad_40[72];  // 0x28 (0x28)


}; 
 
 


// Class SlateCore.FontProviderInterface
// Size: 0x28(Inherited: 0x28)
struct UFontProviderInterface : UInterface
{


}; 
 
 


// Class SlateCore.FontFaceInterface
// Size: 0x28(Inherited: 0x28)
struct UFontFaceInterface : UInterface
{


}; 
 
 


// Class SlateCore.SlateWidgetStyleContainerBase
// Size: 0x30(Inherited: 0x28)
struct USlateWidgetStyleContainerBase : UObject
{
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 


// Class SlateCore.SlateThemeManager
// Size: 0x9C0(Inherited: 0x28)
struct USlateThemeManager : UObject
{
	struct FGuid CurrentThemeId;  // 0x28 (0x28)
	struct FStyleColorList ActiveColors;  // 0x38 (0x38)


}; 
 
 


