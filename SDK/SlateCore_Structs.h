#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct SlateCore.InputEvent
struct FInputEvent
{
	char pad_0[32];  // 0x0 (0x0)


}; 
 
 // ScriptStruct SlateCore.CompositeFont
struct FCompositeFont
{
	struct FTypeface DefaultTypeface;  // 0x0 (0x0)
	struct FCompositeFallbackFont FallbackTypeface;  // 0x10 (0x10)
	struct TArray<struct FCompositeSubFont> SubTypefaces;  // 0x28 (0x28)


}; 
 
 // ScriptStruct SlateCore.SlateColor
struct FSlateColor
{
	struct FLinearColor SpecifiedColor;  // 0x0 (0x0)
	uint8_t ColorUseRule;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)


}; 
 
 // ScriptStruct SlateCore.ComboBoxStyle
// Size: 0x660(Inherited: 0x8)
struct FComboBoxStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FComboButtonStyle ComboButtonStyle;  // 0x10 (0x10)
	struct FSlateSound PressedSlateSound;  // 0x610 (0x610)
	struct FSlateSound SelectionChangeSlateSound;  // 0x628 (0x628)
	struct FMargin ContentPadding;  // 0x640 (0x640)
	struct FMargin MenuRowPadding;  // 0x650 (0x650)


}; 
 
 // ScriptStruct SlateCore.Geometry
struct FGeometry
{
	char pad_0[64];  // 0x0 (0x0)


}; 
 
 // ScriptStruct SlateCore.SlateBrush
struct FSlateBrush
{
	char pad_0[16];  // 0x0 (0x0)
	char bIsDynamicallyLoaded : 1;  // 0x10 (0x10)
	char bHasUObject : 1;  // 0x10 (0x10)
	char pad_16_1 : 6;  // 0x10 (0x10)
	enum class ESlateBrushDrawType DrawAs;  // 0x11 (0x11)
	enum class ESlateBrushTileType Tiling;  // 0x12 (0x12)
	enum class ESlateBrushMirrorType Mirroring;  // 0x13 (0x13)
	enum class ESlateBrushImageType ImageType;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FVector2D ImageSize;  // 0x18 (0x18)
	struct FMargin Margin;  // 0x28 (0x28)
	struct FSlateColor TintColor;  // 0x38 (0x38)
	char pad_76[4];  // 0x4C (0x4C)
	struct FSlateBrushOutlineSettings OutlineSettings;  // 0x50 (0x50)
	struct UObject* ResourceObject;  // 0x90 (0x90)
	struct FName ResourceName;  // 0x98 (0x98)
	struct FBox2f UVRegion;  // 0xA0 (0xA0)
	char pad_180[28];  // 0xB4 (0xB4)


}; 
 
 // ScriptStruct SlateCore.SlateBrushOutlineSettings
struct FSlateBrushOutlineSettings
{
	struct FVector4 CornerRadii;  // 0x0 (0x0)
	struct FSlateColor Color;  // 0x20 (0x20)
	float Width;  // 0x34 (0x34)
	enum class ESlateBrushRoundingType RoundingType;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool bUseBrushTransparency : 1;  // 0x39 (0x39)
	char pad_58[6];  // 0x3A (0x3A)


}; 
 
 // ScriptStruct SlateCore.ExpandableAreaStyle
// Size: 0x1C0(Inherited: 0x8)
struct FExpandableAreaStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush CollapsedImage;  // 0x10 (0x10)
	struct FSlateBrush ExpandedImage;  // 0xE0 (0xE0)
	float RolloutAnimationSeconds;  // 0x1B0 (0x1B0)
	char pad_436[12];  // 0x1B4 (0x1B4)


}; 
 
 // ScriptStruct SlateCore.FontOutlineSettings
struct FFontOutlineSettings
{
	int32_t OutlineSize;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bSeparateFillAlpha : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool bApplyOutlineToDropShadows : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)
	struct UObject* OutlineMaterial;  // 0x8 (0x8)
	struct FLinearColor OutlineColor;  // 0x10 (0x10)


}; 
 
 // ScriptStruct SlateCore.Margin
struct FMargin
{
	float Left;  // 0x0 (0x0)
	float Top;  // 0x4 (0x4)
	float Right;  // 0x8 (0x8)
	float Bottom;  // 0xC (0xC)


}; 
 
 // ScriptStruct SlateCore.ProgressBarStyle
// Size: 0x290(Inherited: 0x8)
struct FProgressBarStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush BackgroundImage;  // 0x10 (0x10)
	struct FSlateBrush FillImage;  // 0xE0 (0xE0)
	struct FSlateBrush MarqueeImage;  // 0x1B0 (0x1B0)
	char pad_640_1 : 7;  // 0x280 (0x280)
	bool EnableFillAnimation : 1;  // 0x280 (0x280)
	char pad_641[15];  // 0x281 (0x281)


}; 
 
 // ScriptStruct SlateCore.PointerEvent
// Size: 0x98(Inherited: 0x20)
struct FPointerEvent : FInputEvent
{
	char pad_32[120];  // 0x20 (0x20)


}; 
 
 // ScriptStruct SlateCore.SlateWidgetStyle
struct FSlateWidgetStyle
{
	char pad_0[8];  // 0x0 (0x0)


}; 
 
 // ScriptStruct SlateCore.TableRowStyle
// Size: 0xD50(Inherited: 0x8)
struct FTableRowStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush SelectorFocusedBrush;  // 0x10 (0x10)
	struct FSlateBrush ActiveHoveredBrush;  // 0xE0 (0xE0)
	struct FSlateBrush ActiveBrush;  // 0x1B0 (0x1B0)
	struct FSlateBrush InactiveHoveredBrush;  // 0x280 (0x280)
	struct FSlateBrush InactiveBrush;  // 0x350 (0x350)
	char pad_1056_1 : 7;  // 0x420 (0x420)
	bool bUseParentRowBrush : 1;  // 0x420 (0x420)
	char pad_1057[15];  // 0x421 (0x421)
	struct FSlateBrush ParentRowBackgroundBrush;  // 0x430 (0x430)
	struct FSlateBrush ParentRowBackgroundHoveredBrush;  // 0x500 (0x500)
	struct FSlateBrush EvenRowBackgroundHoveredBrush;  // 0x5D0 (0x5D0)
	struct FSlateBrush EvenRowBackgroundBrush;  // 0x6A0 (0x6A0)
	struct FSlateBrush OddRowBackgroundHoveredBrush;  // 0x770 (0x770)
	struct FSlateBrush OddRowBackgroundBrush;  // 0x840 (0x840)
	struct FSlateColor TextColor;  // 0x910 (0x910)
	struct FSlateColor SelectedTextColor;  // 0x924 (0x924)
	char pad_2360[8];  // 0x938 (0x938)
	struct FSlateBrush DropIndicator_Above;  // 0x940 (0x940)
	struct FSlateBrush DropIndicator_Onto;  // 0xA10 (0xA10)
	struct FSlateBrush DropIndicator_Below;  // 0xAE0 (0xAE0)
	struct FSlateBrush ActiveHighlightedBrush;  // 0xBB0 (0xBB0)
	struct FSlateBrush InactiveHighlightedBrush;  // 0xC80 (0xC80)


}; 
 
 // ScriptStruct SlateCore.ScrollBorderStyle
// Size: 0x1B0(Inherited: 0x8)
struct FScrollBorderStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush TopShadowBrush;  // 0x10 (0x10)
	struct FSlateBrush BottomShadowBrush;  // 0xE0 (0xE0)


}; 
 
 // ScriptStruct SlateCore.EditableTextStyle
// Size: 0x2F0(Inherited: 0x8)
struct FEditableTextStyle : FSlateWidgetStyle
{
	struct FSlateFontInfo Font;  // 0x8 (0x8)
	struct FSlateColor ColorAndOpacity;  // 0x60 (0x60)
	char pad_116[12];  // 0x74 (0x74)
	struct FSlateBrush BackgroundImageSelected;  // 0x80 (0x80)
	struct FSlateBrush BackgroundImageComposing;  // 0x150 (0x150)
	struct FSlateBrush CaretImage;  // 0x220 (0x220)


}; 
 
 // ScriptStruct SlateCore.SlateSound
struct FSlateSound
{
	struct UObject* ResourceObject;  // 0x0 (0x0)
	char pad_8[16];  // 0x8 (0x8)


}; 
 
 // ScriptStruct SlateCore.ScrollBoxStyle
// Size: 0x350(Inherited: 0x8)
struct FScrollBoxStyle : FSlateWidgetStyle
{
	float BarThickness;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FSlateBrush TopShadowBrush;  // 0x10 (0x10)
	struct FSlateBrush BottomShadowBrush;  // 0xE0 (0xE0)
	struct FSlateBrush LeftShadowBrush;  // 0x1B0 (0x1B0)
	struct FSlateBrush RightShadowBrush;  // 0x280 (0x280)


}; 
 
 // ScriptStruct SlateCore.FontData
struct FFontData
{
	struct FString FontFilename;  // 0x0 (0x0)
	char pad_16[4];  // 0x10 (0x10)
	uint8_t Hinting;  // 0x14 (0x14)
	uint8_t LoadingPolicy;  // 0x15 (0x15)
	char pad_22[2];  // 0x16 (0x16)
	int32_t SubFaceIndex;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct UObject* FontFaceAsset;  // 0x20 (0x20)


}; 
 
 // ScriptStruct SlateCore.ComboButtonStyle
// Size: 0x600(Inherited: 0x8)
struct FComboButtonStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FButtonStyle ButtonStyle;  // 0x10 (0x10)
	struct FSlateBrush DownArrowImage;  // 0x400 (0x400)
	struct FVector2D ShadowOffset;  // 0x4D0 (0x4D0)
	struct FLinearColor ShadowColorAndOpacity;  // 0x4E0 (0x4E0)
	struct FSlateBrush MenuBorderBrush;  // 0x4F0 (0x4F0)
	struct FMargin MenuBorderPadding;  // 0x5C0 (0x5C0)
	struct FMargin ContentPadding;  // 0x5D0 (0x5D0)
	struct FMargin DownArrowPadding;  // 0x5E0 (0x5E0)
	enum class EVerticalAlignment DownArrowAlign;  // 0x5F0 (0x5F0)
	char pad_1521[15];  // 0x5F1 (0x5F1)


}; 
 
 // ScriptStruct SlateCore.KeyEvent
// Size: 0x40(Inherited: 0x20)
struct FKeyEvent : FInputEvent
{
	char pad_32[32];  // 0x20 (0x20)


}; 
 
 // ScriptStruct SlateCore.ButtonStyle
// Size: 0x3F0(Inherited: 0x8)
struct FButtonStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush Normal;  // 0x10 (0x10)
	struct FSlateBrush Hovered;  // 0xE0 (0xE0)
	struct FSlateBrush Pressed;  // 0x1B0 (0x1B0)
	struct FSlateBrush Disabled;  // 0x280 (0x280)
	struct FSlateColor NormalForeground;  // 0x350 (0x350)
	struct FSlateColor HoveredForeground;  // 0x364 (0x364)
	struct FSlateColor PressedForeground;  // 0x378 (0x378)
	struct FSlateColor DisabledForeground;  // 0x38C (0x38C)
	struct FMargin NormalPadding;  // 0x3A0 (0x3A0)
	struct FMargin PressedPadding;  // 0x3B0 (0x3B0)
	struct FSlateSound PressedSlateSound;  // 0x3C0 (0x3C0)
	struct FSlateSound HoveredSlateSound;  // 0x3D8 (0x3D8)


}; 
 
 // ScriptStruct SlateCore.SlateFontInfo
struct FSlateFontInfo
{
	struct UObject* FontObject;  // 0x0 (0x0)
	struct UObject* FontMaterial;  // 0x8 (0x8)
	struct FFontOutlineSettings OutlineSettings;  // 0x10 (0x10)
	char pad_48[16];  // 0x30 (0x30)
	struct FName TypefaceFontName;  // 0x40 (0x40)
	int32_t Size;  // 0x48 (0x48)
	int32_t LetterSpacing;  // 0x4C (0x4C)
	float SkewAmount;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)


}; 
 
 // ScriptStruct SlateCore.EditableTextBoxStyle
// Size: 0xE80(Inherited: 0x8)
struct FEditableTextBoxStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush BackgroundImageNormal;  // 0x10 (0x10)
	struct FSlateBrush BackgroundImageHovered;  // 0xE0 (0xE0)
	struct FSlateBrush BackgroundImageFocused;  // 0x1B0 (0x1B0)
	struct FSlateBrush BackgroundImageReadOnly;  // 0x280 (0x280)
	struct FMargin Padding;  // 0x350 (0x350)
	struct FTextBlockStyle TextStyle;  // 0x360 (0x360)
	struct FSlateColor ForegroundColor;  // 0x6A0 (0x6A0)
	struct FSlateColor BackgroundColor;  // 0x6B4 (0x6B4)
	struct FSlateColor ReadOnlyForegroundColor;  // 0x6C8 (0x6C8)
	struct FSlateColor FocusedForegroundColor;  // 0x6DC (0x6DC)
	struct FMargin HScrollBarPadding;  // 0x6F0 (0x6F0)
	struct FMargin VScrollBarPadding;  // 0x700 (0x700)
	struct FScrollBarStyle ScrollBarStyle;  // 0x710 (0x710)


}; 
 
 // ScriptStruct SlateCore.Typeface
struct FTypeface
{
	struct TArray<struct FTypefaceEntry> Fonts;  // 0x0 (0x0)


}; 
 
 // ScriptStruct SlateCore.ScrollBarStyle
// Size: 0x770(Inherited: 0x8)
struct FScrollBarStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush HorizontalBackgroundImage;  // 0x10 (0x10)
	struct FSlateBrush VerticalBackgroundImage;  // 0xE0 (0xE0)
	struct FSlateBrush VerticalTopSlotImage;  // 0x1B0 (0x1B0)
	struct FSlateBrush HorizontalTopSlotImage;  // 0x280 (0x280)
	struct FSlateBrush VerticalBottomSlotImage;  // 0x350 (0x350)
	struct FSlateBrush HorizontalBottomSlotImage;  // 0x420 (0x420)
	struct FSlateBrush NormalThumbImage;  // 0x4F0 (0x4F0)
	struct FSlateBrush HoveredThumbImage;  // 0x5C0 (0x5C0)
	struct FSlateBrush DraggedThumbImage;  // 0x690 (0x690)
	float Thickness;  // 0x760 (0x760)
	char pad_1892[12];  // 0x764 (0x764)


}; 
 
 // ScriptStruct SlateCore.TextBlockStyle
// Size: 0x340(Inherited: 0x8)
struct FTextBlockStyle : FSlateWidgetStyle
{
	struct FSlateFontInfo Font;  // 0x8 (0x8)
	struct FSlateColor ColorAndOpacity;  // 0x60 (0x60)
	char pad_116[4];  // 0x74 (0x74)
	struct FVector2D ShadowOffset;  // 0x78 (0x78)
	struct FLinearColor ShadowColorAndOpacity;  // 0x88 (0x88)
	struct FSlateColor SelectedBackgroundColor;  // 0x98 (0x98)
	struct FSlateColor HighlightColor;  // [xAC ([xAC)
	struct FSlateBrush HighlightShape;  // 0xC0 (0xC0)
	struct FSlateBrush StrikeBrush;  // 0x190 (0x190)
	struct FSlateBrush UnderlineBrush;  // 0x260 (0x260)
	uint8_t TransformPolicy;  // 0x330 (0x330)
	uint8_t OverflowPolicy;  // 0x331 (0x331)
	char pad_818[14];  // 0x332 (0x332)


}; 
 
 // ScriptStruct SlateCore.FocusEvent
struct FFocusEvent
{
	char pad_0[8];  // 0x0 (0x0)


}; 
 
 // ScriptStruct SlateCore.SpinBoxStyle
// Size: 0x600(Inherited: 0x8)
struct FSpinBoxStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush BackgroundBrush;  // 0x10 (0x10)
	struct FSlateBrush ActiveBackgroundBrush;  // 0xE0 (0xE0)
	struct FSlateBrush HoveredBackgroundBrush;  // 0x1B0 (0x1B0)
	struct FSlateBrush ActiveFillBrush;  // 0x280 (0x280)
	struct FSlateBrush HoveredFillBrush;  // 0x350 (0x350)
	struct FSlateBrush InactiveFillBrush;  // 0x420 (0x420)
	struct FSlateBrush ArrowsImage;  // 0x4F0 (0x4F0)
	struct FSlateColor ForegroundColor;  // 0x5C0 (0x5C0)
	struct FMargin TextPadding;  // 0x5D4 (0x5D4)
	struct FMargin InsetPadding;  // 0x5E4 (0x5E4)
	char pad_1524[12];  // 0x5F4 (0x5F4)


}; 
 
 // ScriptStruct SlateCore.CharacterEvent
// Size: 0x28(Inherited: 0x20)
struct FCharacterEvent : FInputEvent
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct SlateCore.SearchBoxStyle
// Size: 0x1250(Inherited: 0x8)
struct FSearchBoxStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FEditableTextBoxStyle TextBoxStyle;  // 0x10 (0x10)
	struct FSlateFontInfo ActiveFontInfo;  // 0xE90 (0xE90)
	char pad_3816[8];  // 0xEE8 (0xEE8)
	struct FSlateBrush UpArrowImage;  // 0xEF0 (0xEF0)
	struct FSlateBrush DownArrowImage;  // 0xFC0 (0xFC0)
	struct FSlateBrush GlassImage;  // 0x1090 (0x1090)
	struct FSlateBrush ClearImage;  // 0x1160 (0x1160)
	struct FMargin ImagePadding;  // 0x1230 (0x1230)
	char pad_4672_1 : 7;  // 0x1240 (0x1240)
	bool bLeftAlignButtons : 1;  // 0x1240 (0x1240)
	char pad_4673_1 : 7;  // 0x1241 (0x1241)
	bool bLeftAlignSearchResultButtons : 1;  // 0x1241 (0x1241)
	char pad_4674_1 : 7;  // 0x1242 (0x1242)
	bool bLeftAlignGlassImageAndClearButton : 1;  // 0x1242 (0x1242)
	char pad_4675[13];  // 0x1243 (0x1243)


}; 
 
 // ScriptStruct SlateCore.NavigationEvent
// Size: 0x28(Inherited: 0x20)
struct FNavigationEvent : FInputEvent
{
	char pad_32[8];  // 0x20 (0x20)


}; 
 
 // ScriptStruct SlateCore.HyperlinkStyle
// Size: 0x750(Inherited: 0x8)
struct FHyperlinkStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FButtonStyle UnderlineStyle;  // 0x10 (0x10)
	struct FTextBlockStyle TextStyle;  // 0x400 (0x400)
	struct FMargin Padding;  // 0x740 (0x740)


}; 
 
 // ScriptStruct SlateCore.AnalogInputEvent
// Size: 0x48(Inherited: 0x40)
struct FAnalogInputEvent : FKeyEvent
{
	char pad_64[8];  // 0x40 (0x40)


}; 
 
 // ScriptStruct SlateCore.CaptureLostEvent
struct FCaptureLostEvent
{
	char pad_0[8];  // 0x0 (0x0)


}; 
 
 // ScriptStruct SlateCore.MotionEvent
// Size: 0x80(Inherited: 0x20)
struct FMotionEvent : FInputEvent
{
	char pad_32[96];  // 0x20 (0x20)


}; 
 
 // ScriptStruct SlateCore.HeaderRowStyle
// Size: 0x1260(Inherited: 0x8)
struct FHeaderRowStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FTableColumnHeaderStyle ColumnStyle;  // 0x10 (0x10)
	struct FTableColumnHeaderStyle LastColumnStyle;  // 0x770 (0x770)
	struct FSplitterStyle ColumnSplitterStyle;  // 0xED0 (0xED0)
	float SplitterHandleSize;  // 0x1080 (0x1080)
	char pad_4228[12];  // 0x1084 (0x1084)
	struct FSlateBrush BackgroundBrush;  // 0x1090 (0x1090)
	struct FSlateColor ForegroundColor;  // 0x1160 (0x1160)
	char pad_4468[12];  // 0x1174 (0x1174)
	struct FSlateBrush HorizontalSeparatorBrush;  // 0x1180 (0x1180)
	float HorizontalSeparatorThickness;  // 0x1250 (0x1250)
	char pad_4692[12];  // 0x1254 (0x1254)


}; 
 
 // ScriptStruct SlateCore.SliderStyle
// Size: 0x500(Inherited: 0x8)
struct FSliderStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush NormalBarImage;  // 0x10 (0x10)
	struct FSlateBrush HoveredBarImage;  // 0xE0 (0xE0)
	struct FSlateBrush DisabledBarImage;  // 0x1B0 (0x1B0)
	struct FSlateBrush NormalThumbImage;  // 0x280 (0x280)
	struct FSlateBrush HoveredThumbImage;  // 0x350 (0x350)
	struct FSlateBrush DisabledThumbImage;  // 0x420 (0x420)
	float BarThickness;  // 0x4F0 (0x4F0)
	char pad_1268[12];  // 0x4F4 (0x4F4)


}; 
 
 // ScriptStruct SlateCore.TypefaceEntry
struct FTypefaceEntry
{
	struct FName Name;  // 0x0 (0x0)
	struct FFontData Font;  // 0x8 (0x8)


}; 
 
 // ScriptStruct SlateCore.CompositeFallbackFont
struct FCompositeFallbackFont
{
	struct FTypeface Typeface;  // 0x0 (0x0)
	float ScalingFactor;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // ScriptStruct SlateCore.CompositeSubFont
// Size: 0x38(Inherited: 0x18)
struct FCompositeSubFont : FCompositeFallbackFont
{
	struct TArray<struct FInt32Range> CharacterRanges;  // 0x18 (0x18)
	struct FString Cultures;  // 0x28 (0x28)


}; 
 
 // ScriptStruct SlateCore.VolumeControlStyle
// Size: 0x920(Inherited: 0x8)
struct FVolumeControlStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSliderStyle SliderStyle;  // 0x10 (0x10)
	struct FSlateBrush HighVolumeImage;  // 0x510 (0x510)
	struct FSlateBrush MidVolumeImage;  // 0x5E0 (0x5E0)
	struct FSlateBrush LowVolumeImage;  // 0x6B0 (0x6B0)
	struct FSlateBrush NoVolumeImage;  // 0x780 (0x780)
	struct FSlateBrush MutedImage;  // 0x850 (0x850)


}; 
 
 // ScriptStruct SlateCore.SegmentedControlStyle
// Size: 0x2160(Inherited: 0x8)
struct FSegmentedControlStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FCheckBoxStyle ControlStyle;  // 0x10 (0x10)
	struct FCheckBoxStyle FirstControlStyle;  // 0xAE0 (0xAE0)
	struct FCheckBoxStyle LastControlStyle;  // 0x15B0 (0x15B0)
	struct FSlateBrush BackgroundBrush;  // 0x2080 (0x2080)
	struct FMargin UniformPadding;  // 0x2150 (0x2150)


}; 
 
 // ScriptStruct SlateCore.InlineEditableTextBlockStyle
// Size: 0x11D0(Inherited: 0x8)
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FEditableTextBoxStyle EditableTextBoxStyle;  // 0x10 (0x10)
	struct FTextBlockStyle TextStyle;  // 0xE90 (0xE90)


}; 
 
 // ScriptStruct SlateCore.CheckBoxStyle
// Size: 0xAD0(Inherited: 0x8)
struct FCheckBoxStyle : FSlateWidgetStyle
{
	enum class ESlateCheckBoxType CheckBoxType;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FSlateBrush UncheckedImage;  // 0x10 (0x10)
	struct FSlateBrush UncheckedHoveredImage;  // 0xE0 (0xE0)
	struct FSlateBrush UncheckedPressedImage;  // 0x1B0 (0x1B0)
	struct FSlateBrush CheckedImage;  // 0x280 (0x280)
	struct FSlateBrush CheckedHoveredImage;  // 0x350 (0x350)
	struct FSlateBrush CheckedPressedImage;  // 0x420 (0x420)
	struct FSlateBrush UndeterminedImage;  // 0x4F0 (0x4F0)
	struct FSlateBrush UndeterminedHoveredImage;  // 0x5C0 (0x5C0)
	struct FSlateBrush UndeterminedPressedImage;  // 0x690 (0x690)
	struct FMargin Padding;  // 0x760 (0x760)
	struct FSlateBrush BackgroundImage;  // 0x770 (0x770)
	struct FSlateBrush BackgroundHoveredImage;  // 0x840 (0x840)
	struct FSlateBrush BackgroundPressedImage;  // 0x910 (0x910)
	struct FSlateColor ForegroundColor;  // 0x9E0 (0x9E0)
	struct FSlateColor HoveredForeground;  // 0x9F4 (0x9F4)
	struct FSlateColor PressedForeground;  // 0xA08 (0xA08)
	struct FSlateColor CheckedForeground;  // 0xA1C (0xA1C)
	struct FSlateColor CheckedHoveredForeground;  // 0xA30 (0xA30)
	struct FSlateColor CheckedPressedForeground;  // 0xA44 (0xA44)
	struct FSlateColor UndeterminedForeground;  // 0xA58 (0xA58)
	struct FSlateColor BorderBackgroundColor;  // 0xA6C (0xA6C)
	struct FSlateSound CheckedSlateSound;  // 0xA80 (0xA80)
	struct FSlateSound UncheckedSlateSound;  // 0xA98 (0xA98)
	struct FSlateSound HoveredSlateSound;  // 0xAB0 (0xAB0)
	char pad_2760[8];  // 0xAC8 (0xAC8)


}; 
 
 // ScriptStruct SlateCore.ToolBarStyle
// Size: 0x3E60(Inherited: 0x8)
struct FToolBarStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush BackgroundBrush;  // 0x10 (0x10)
	struct FSlateBrush ExpandBrush;  // 0xE0 (0xE0)
	struct FSlateBrush SeparatorBrush;  // 0x1B0 (0x1B0)
	struct FTextBlockStyle LabelStyle;  // 0x280 (0x280)
	struct FEditableTextBoxStyle EditableTextStyle;  // 0x5C0 (0x5C0)
	struct FCheckBoxStyle ToggleButton;  // 0x1440 (0x1440)
	struct FComboButtonStyle ComboButtonStyle;  // 0x1F10 (0x1F10)
	struct FButtonStyle SettingsButtonStyle;  // 0x2510 (0x2510)
	struct FComboButtonStyle SettingsComboButton;  // 0x2900 (0x2900)
	struct FCheckBoxStyle SettingsToggleButton;  // 0x2F00 (0x2F00)
	struct FButtonStyle ButtonStyle;  // 0x39D0 (0x39D0)
	struct FMargin LabelPadding;  // 0x3DC0 (0x3DC0)
	struct FMargin SeparatorPadding;  // 0x3DD0 (0x3DD0)
	struct FMargin ComboButtonPadding;  // 0x3DE0 (0x3DE0)
	struct FMargin ButtonPadding;  // 0x3DF0 (0x3DF0)
	struct FMargin CheckBoxPadding;  // 0x3E00 (0x3E00)
	struct FMargin BlockPadding;  // 0x3E10 (0x3E10)
	struct FMargin IndentedBlockPadding;  // 0x3E20 (0x3E20)
	struct FMargin BackgroundPadding;  // 0x3E30 (0x3E30)
	struct FVector2D IconSize;  // 0x3E40 (0x3E40)
	char pad_15952_1 : 7;  // 0x3E50 (0x3E50)
	bool bShowLabels : 1;  // 0x3E50 (0x3E50)
	char pad_15953[15];  // 0x3E51 (0x3E51)


}; 
 
 // ScriptStruct SlateCore.InlineTextImageStyle
// Size: 0xF0(Inherited: 0x8)
struct FInlineTextImageStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush Image;  // 0x10 (0x10)
	int16_t Baseline;  // 0xE0 (0xE0)
	char pad_226[14];  // 0xE2 (0xE2)


}; 
 
 // ScriptStruct SlateCore.SplitterStyle
// Size: 0x1B0(Inherited: 0x8)
struct FSplitterStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush HandleNormalBrush;  // 0x10 (0x10)
	struct FSlateBrush HandleHighlightBrush;  // 0xE0 (0xE0)


}; 
 
 // ScriptStruct SlateCore.TableViewStyle
// Size: 0xE0(Inherited: 0x8)
struct FTableViewStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush BackgroundBrush;  // 0x10 (0x10)


}; 
 
 // ScriptStruct SlateCore.TableColumnHeaderStyle
// Size: 0x760(Inherited: 0x8)
struct FTableColumnHeaderStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FSlateBrush SortPrimaryAscendingImage;  // 0x10 (0x10)
	struct FSlateBrush SortPrimaryDescendingImage;  // 0xE0 (0xE0)
	struct FSlateBrush SortSecondaryAscendingImage;  // 0x1B0 (0x1B0)
	struct FSlateBrush SortSecondaryDescendingImage;  // 0x280 (0x280)
	struct FSlateBrush NormalBrush;  // 0x350 (0x350)
	struct FSlateBrush HoveredBrush;  // 0x420 (0x420)
	struct FSlateBrush MenuDropdownImage;  // 0x4F0 (0x4F0)
	struct FSlateBrush MenuDropdownNormalBorderBrush;  // 0x5C0 (0x5C0)
	struct FSlateBrush MenuDropdownHoveredBorderBrush;  // 0x690 (0x690)


}; 
 
 // ScriptStruct SlateCore.DockTabStyle
// Size: 0xD80(Inherited: 0x8)
struct FDockTabStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FButtonStyle CloseButtonStyle;  // 0x10 (0x10)
	struct FSlateBrush NormalBrush;  // 0x400 (0x400)
	struct FSlateBrush ColorOverlayTabBrush;  // 0x4D0 (0x4D0)
	struct FSlateBrush ColorOverlayIconBrush;  // 0x5A0 (0x5A0)
	struct FSlateBrush ForegroundBrush;  // 0x670 (0x670)
	struct FSlateBrush HoveredBrush;  // 0x740 (0x740)
	struct FSlateBrush ContentAreaBrush;  // 0x810 (0x810)
	struct FSlateBrush TabWellBrush;  // 0x8E0 (0x8E0)
	struct FTextBlockStyle TabTextStyle;  // 0x9B0 (0x9B0)
	struct FMargin TabPadding;  // 0xCF0 (0xCF0)
	struct FVector2D IconSize;  // 0xD00 (0xD00)
	float OverlapWidth;  // 0xD10 (0xD10)
	struct FSlateColor FlashColor;  // 0xD14 (0xD14)
	struct FSlateColor NormalForegroundColor;  // 0xD28 (0xD28)
	struct FSlateColor HoveredForegroundColor;  // 0xD3C (0xD3C)
	struct FSlateColor ActiveForegroundColor;  // 0xD50 (0xD50)
	struct FSlateColor ForegroundForegroundColor;  // 0xD64 (0xD64)
	float IconBorderPadding;  // 0xD78 (0xD78)
	char pad_3452[4];  // 0xD7C (0xD7C)


}; 
 
 // ScriptStruct SlateCore.WindowStyle
// Size: 0x1940(Inherited: 0x8)
struct FWindowStyle : FSlateWidgetStyle
{
	char pad_8[8];  // 0x8 (0x8)
	struct FButtonStyle MinimizeButtonStyle;  // 0x10 (0x10)
	struct FButtonStyle MaximizeButtonStyle;  // 0x400 (0x400)
	struct FButtonStyle RestoreButtonStyle;  // 0x7F0 (0x7F0)
	struct FButtonStyle CloseButtonStyle;  // 0xBE0 (0xBE0)
	struct FTextBlockStyle TitleTextStyle;  // 0xFD0 (0xFD0)
	struct FSlateBrush ActiveTitleBrush;  // 0x1310 (0x1310)
	struct FSlateBrush InactiveTitleBrush;  // 0x13E0 (0x13E0)
	struct FSlateBrush FlashTitleBrush;  // 0x14B0 (0x14B0)
	struct FSlateColor BackgroundColor;  // 0x1580 (0x1580)
	char pad_5524[12];  // 0x1594 (0x1594)
	struct FSlateBrush OutlineBrush;  // 0x15A0 (0x15A0)
	struct FSlateColor OutlineColor;  // 0x1670 (0x1670)
	char pad_5764[12];  // 0x1684 (0x1684)
	struct FSlateBrush BorderBrush;  // 0x1690 (0x1690)
	struct FSlateColor BorderColor;  // 0x1760 (0x1760)
	char pad_6004[12];  // 0x1774 (0x1774)
	struct FSlateBrush BackgroundBrush;  // 0x1780 (0x1780)
	struct FSlateBrush ChildBackgroundBrush;  // 0x1850 (0x1850)
	int32_t WindowCornerRadius;  // 0x1920 (0x1920)
	struct FMargin BorderPadding;  // 0x1924 (0x1924)
	char pad_6452[12];  // 0x1934 (0x1934)


}; 
 
 // ScriptStruct SlateCore.StyleColorList
struct FStyleColorList
{
	struct FLinearColor StyleColors[3d];  // 0x0 (0x0)
	char pad_976[1464];  // 0x3D0 (0x3D0)


}; 
 
 // ScriptStruct SlateCore.StyleTheme
struct FStyleTheme
{
	char pad_0[72];  // 0x0 (0x0)


}; 
 
 