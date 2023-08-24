#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_CurrencyTypeSlot.WB_CurrencyTypeSlot_C.Get_OverlayCurrencyTypeSlot_Visibility
struct FGet_OverlayCurrencyTypeSlot_Visibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool CallFunc_HasNotEnoughCurrency_ReturnValue : 1;  // 0x1 (0x1)


}; 
 
 // Function WB_CurrencyTypeSlot.WB_CurrencyTypeSlot_C.Get_Currency_Redstone_Visibility
struct FGet_Currency_Redstone_Visibility
{
	uint8_t ReturnValue;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool CallFunc_IsRedstoneShardType_ReturnValue : 1;  // 0x1 (0x1)


}; 
 
 // Function WB_CurrencyTypeSlot.WB_CurrencyTypeSlot_C.Get_Currency_Bluestone_Visibility
struct FGet_Currency_Bluestone_Visibility
{
	uint8_t ReturnValue;  // [x0 ([x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool CallFunc_IsBluestoneShardType_ReturnValue : 1;  // 001 (001)


}; 
 
 