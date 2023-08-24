#pragma once 
#include <WB_CurrencyTypeSlot_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_CurrencyTypeSlot.WB_CurrencyTypeSlot_C
// Size: 0x348(Inherited: 0x320)
struct UWB_CurrencyTypeSlot_C : UDCShopCurrencyTypeSlotWidgetBase
{
	struct UHorizontalBox* Currency_Bluestone;  // 0x320 (0x320)
	struct UHorizontalBox* Currency_Redstone;  // 0x328 (0x328)
	struct UOverlay* OverlayCurrencyTypeSlot;  // 0x330 (0x330)
	struct UTextBlock* TextBlock_2;  // 0x338 (0x338)
	struct UTextBlock* TextBlock_144;  // 0x340 (0x340)


	uint8_t Get_Currency_Redstone_Visibility(); // Function WB_CurrencyTypeSlot.WB_CurrencyTypeSlot_C.Get_Currency_Redstone_Visibility
	uint8_t Get_Currency_Bluestone_Visibility(); // Function WB_CurrencyTypeSlot.WB_CurrencyTypeSlot_C.Get_Currency_Bluestone_Visibility
	uint8_t Get_OverlayCurrencyTypeSlot_Visibility(); // Function WB_CurrencyTypeSlot.WB_CurrencyTypeSlot_C.Get_OverlayCurrencyTypeSlot_Visibility
}; 
 
 


