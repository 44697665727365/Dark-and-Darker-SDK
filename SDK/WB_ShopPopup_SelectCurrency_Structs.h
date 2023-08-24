#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_ShopPopup_SelectCurrency.WB_ShopPopup_SelectCurrency_C.Get_Currency_Redstone_Visibility
struct FGet_Currency_Redstone_Visibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool CallFunc_IsRedstoneShardSelected_ReturnValue : 1;  // 0x1 (0x1)


}; 
 
 // Function WB_ShopPopup_SelectCurrency.WB_ShopPopup_SelectCurrency_C.Get_Currency_Bluestone_Visibility
struct FGet_Currency_Bluestone_Visibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool CallFunc_IsBluestoneShardSelected_ReturnValue : 1;  // 0x1 (0x1)


}; 
 
 