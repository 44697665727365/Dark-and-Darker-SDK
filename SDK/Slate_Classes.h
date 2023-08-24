#pragma once 
#include <Slate_Structs.h>
 
 
 
// Class Slate.SlateSettings
// Size: 0x30(Inherited: 0x28)
struct USlateSettings : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bExplicitCanvasChildZOrder : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 


// Class Slate.ToolMenuBase
// Size: 0x28(Inherited: 0x28)
struct UToolMenuBase : UObject
{


}; 
 
 


// Class Slate.EditableTextBoxWidgetStyle
// Size: 0xEB0(Inherited: 0x30)
struct UEditableTextBoxWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FEditableTextBoxStyle EditableTextBoxStyle;  // 0x30 (0x30)


}; 
 
 


// Class Slate.ButtonWidgetStyle
// Size: 0x420(Inherited: 0x30)
struct UButtonWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FButtonStyle ButtonStyle;  // 0x30 (0x30)


}; 
 
 


// Class Slate.CheckBoxWidgetStyle
// Size: 0xB00(Inherited: 0x30)
struct UCheckBoxWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FCheckBoxStyle CheckBoxStyle;  // 0x30 (0x30)


}; 
 
 


// Class Slate.EditableTextWidgetStyle
// Size: 0x320(Inherited: 0x30)
struct UEditableTextWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FEditableTextStyle EditableTextStyle;  // 0x30 (0x30)


}; 
 
 


// Class Slate.ComboBoxWidgetStyle
// Size: 0x690(Inherited: 0x30)
struct UComboBoxWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FComboBoxStyle ComboBoxStyle;  // 0x30 (0x30)


}; 
 
 


// Class Slate.ComboButtonWidgetStyle
// Size: 0x630(Inherited: 0x30)
struct UComboButtonWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FComboButtonStyle ComboButtonStyle;  // 0x30 (0x30)


}; 
 
 


// Class Slate.ProgressWidgetStyle
// Size: 0x2C0(Inherited: 0x30)
struct UProgressWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FProgressBarStyle ProgressBarStyle;  // 0x30 (0x30)


}; 
 
 


// Class Slate.ScrollBarWidgetStyle
// Size: 0x7A0(Inherited: 0x30)
struct UScrollBarWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FScrollBarStyle ScrollBarStyle;  // 0x30 (0x30)


}; 
 
 


// Class Slate.ScrollBoxWidgetStyle
// Size: 0x380(Inherited: 0x30)
struct UScrollBoxWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FScrollBoxStyle ScrollBoxStyle;  // 0x30 (0x30)


}; 
 
 


// Class Slate.SpinBoxWidgetStyle
// Size: 0x630(Inherited: 0x30)
struct USpinBoxWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FSpinBoxStyle SpinBoxStyle;  // 0x30 (0x30)


}; 
 
 


// Class Slate.TextBlockWidgetStyle
// Size: 0x370(Inherited: 0x30)
struct UTextBlockWidgetStyle : USlateWidgetStyleContainerBase
{
	struct FTextBlockStyle TextBlockStyle;  // 0x30 (0x30)


}; 
 
 


