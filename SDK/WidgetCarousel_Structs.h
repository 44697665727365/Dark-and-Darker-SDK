#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
// Size: 0x5A0(Inherited: 0x8)
struct FWidgetCarouselNavigationButtonStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FButtonStyle InnerButtonStyle;  // 0x10 (0x10)
	struct FSlateBrush NavigationButtonLeftImage;  // 0x400 (0x400)
	struct FSlateBrush NavigationButtonRightImage;  // 0x4D0 (0x4D0)


}; 
 
 // ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
// Size: 0xCB0(Inherited: 0x8)
struct FWidgetCarouselNavigationBarStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush HighlightBrush;  // 0x10 (0x10)
	struct FButtonStyle LeftButtonStyle;  // 0xE0 (0xE0)
	struct FButtonStyle CenterButtonStyle;  // 0x4D0 (0x4D0)
	struct FButtonStyle RightButtonStyle;  // 0x8C0 (0x8C0)


}; 
 
 