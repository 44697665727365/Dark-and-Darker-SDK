#pragma once 
#include <WB_ShopPopup_SelectCurrency_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_ShopPopup_SelectCurrency.WB_ShopPopup_SelectCurrency_C
// Size: 0x4B0(Inherited: 0x480)
struct UWB_ShopPopup_SelectCurrency_C : UDCShopCurrencyTypeSelectPopupBase
{
	struct UHorizontalBox* Currency_Bluestone;  // 0x480 (0x480)
	struct UHorizontalBox* Currency_Redstone;  // 0x488 (0x488)
	struct UTextBlock* TextBlock_2;  // 0x490 (0x490)
	struct UTextBlock* TextBlock_144;  // 0x498 (0x498)
	struct UWB_CurrencyTypeSlot_C* WB_CurrencyTypeSlot;  // 0x4A0 (0x4A0)
	struct UWB_CurrencyTypeSlot_C* WB_CurrencyTypeSlot_2;  // 0x4A8 (0x4A8)


	uint8_t Get_Currency_Bluestone_Visibility(); // Function WB_ShopPopup_SelectCurrency.WB_ShopPopup_SelectCurrency_C.Get_Currency_Bluestone_Visibility
	uint8_t Get_Currency_Redstone_Visibility(); // Function WB_ShopPopup_SelectCurrency.WB_ShopPopup_SelectCurrency_C.Get_Currency_Redstone_Visibility
}; 
 
 


