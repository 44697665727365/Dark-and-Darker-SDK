#include "pch.h"
#include "SDK.h"

void UDCUIFunctionLibrary_C::Get Item Name And Color(struct FItemData ItemData, struct UObject* __WorldContext, struct FText& Name, struct FSlateColor& Color){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.Get Item Name And Color");

	FGet Item Name And Color parms{};	
	parms.ItemData = ItemData;
	parms.__WorldContext = __WorldContext;
	parms.Name = Name;
	parms.Color = Color;

	ProcessEvent(fn, &parms);
}

void UDCUIFunctionLibrary_C::GetSemicircleSelectedIndexByInputDirection(struct FVector2D Direction, double SectionDegreeSize, struct UObject* __WorldContext, int32_t& RadialIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetSemicircleSelectedIndexByInputDirection");

	FGetSemicircleSelectedIndexByInputDirection parms{};	
	parms.Direction = Direction;
	parms.SectionDegreeSize = SectionDegreeSize;
	parms.__WorldContext = __WorldContext;
	parms.RadialIndex = RadialIndex;

	ProcessEvent(fn, &parms);
}

void UDCUIFunctionLibrary_C::GetAttributeTextColor(struct FGameplayAttributeData GameplayAttributeData, struct UObject* __WorldContext, struct FSlateColor& SlateColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetAttributeTextColor");

	FGetAttributeTextColor parms{};	
	parms.GameplayAttributeData = GameplayAttributeData;
	parms.__WorldContext = __WorldContext;
	parms.SlateColor = SlateColor;

	ProcessEvent(fn, &parms);
}

void UDCUIFunctionLibrary_C::GetAttributeTextColor_OverloadedValue(double BaseValue, double CurrentValue, struct UObject* __WorldContext, struct FSlateColor& SlateColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetAttributeTextColor_OverloadedValue");

	FGetAttributeTextColor_OverloadedValue parms{};	
	parms.BaseValue = BaseValue;
	parms.CurrentValue = CurrentValue;
	parms.__WorldContext = __WorldContext;
	parms.SlateColor = SlateColor;

	ProcessEvent(fn, &parms);
}

void UDCUIFunctionLibrary_C::GetSpellTypeColor(struct FGameplayTag SpellSourceType, struct UObject* __WorldContext, struct FSlateColor& OutlineColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetSpellTypeColor");

	FGetSpellTypeColor parms{};	
	parms.SpellSourceType = SpellSourceType;
	parms.__WorldContext = __WorldContext;
	parms.OutlineColor = OutlineColor;

	ProcessEvent(fn, &parms);
}

void UDCUIFunctionLibrary_C::GetFirstKeyByInputAction(struct UInputAction* InputAction, struct UObject* __WorldContext, struct FText& KeyDisplayName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetFirstKeyByInputAction");

	FGetFirstKeyByInputAction parms{};	
	parms.InputAction = InputAction;
	parms.__WorldContext = __WorldContext;
	parms.KeyDisplayName = KeyDisplayName;

	ProcessEvent(fn, &parms);
}

void UDCUIFunctionLibrary_C::GetRadialSelectedIndexByInputDirection(struct FVector2D Direction, double SectionDegreeSize, struct UObject* __WorldContext, int32_t& RadialIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetRadialSelectedIndexByInputDirection");

	FGetRadialSelectedIndexByInputDirection parms{};	
	parms.Direction = Direction;
	parms.SectionDegreeSize = SectionDegreeSize;
	parms.__WorldContext = __WorldContext;
	parms.RadialIndex = RadialIndex;

	ProcessEvent(fn, &parms);
}

void UDCUIFunctionLibrary_C::UpdateRadialDirectionWithMousePosition(struct UObject* WorldContextObject, struct UObject* __WorldContext, struct FVector2D& Direction){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.UpdateRadialDirectionWithMousePosition");

	FUpdateRadialDirectionWithMousePosition parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.__WorldContext = __WorldContext;
	parms.Direction = Direction;

	ProcessEvent(fn, &parms);
}

void UDCUIFunctionLibrary_C::GetGamepadButtonImage(struct FKey Key, struct UObject* __WorldContext, struct UTexture2D*& Image){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetGamepadButtonImage");

	FGetGamepadButtonImage parms{};	
	parms.Key = Key;
	parms.__WorldContext = __WorldContext;
	parms.Image = Image;

	ProcessEvent(fn, &parms);
}

void UDCUIFunctionLibrary_C::GetPlayerCharacterEffectTypeText(struct FGameplayTag GameplayTag, struct UObject* __WorldContext, struct FText& Text){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetPlayerCharacterEffectTypeText");

	FGetPlayerCharacterEffectTypeText parms{};	
	parms.GameplayTag = GameplayTag;
	parms.__WorldContext = __WorldContext;
	parms.Text = Text;

	ProcessEvent(fn, &parms);
}

void UDCUIFunctionLibrary_C::GetItemRaritySlateColor(struct FGameplayTag Rarity, struct UObject* __WorldContext, struct FSlateColor& SlateColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemRaritySlateColor");

	FGetItemRaritySlateColor parms{};	
	parms.Rarity = Rarity;
	parms.__WorldContext = __WorldContext;
	parms.SlateColor = SlateColor;

	ProcessEvent(fn, &parms);
}

void UDCUIFunctionLibrary_C::GetItemEffectValueText(struct FGameplayTag EffectTag, int32_t EffectValue, struct UObject* __WorldContext, struct FText& EffectValueText){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemEffectValueText");

	FGetItemEffectValueText parms{};	
	parms.EffectTag = EffectTag;
	parms.EffectValue = EffectValue;
	parms.__WorldContext = __WorldContext;
	parms.EffectValueText = EffectValueText;

	ProcessEvent(fn, &parms);
}

void UDCUIFunctionLibrary_C::GetItemEffectTypeText(struct FGameplayTag GameplayTag, struct UObject* __WorldContext, struct FText& Text){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemEffectTypeText");

	FGetItemEffectTypeText parms{};	
	parms.GameplayTag = GameplayTag;
	parms.__WorldContext = __WorldContext;
	parms.Text = Text;

	ProcessEvent(fn, &parms);
}

void UDCUIFunctionLibrary_C::GetItemUtilityTypeText(struct FGameplayTag GameplayTag, struct UObject* __WorldContext, struct FText& Text){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemUtilityTypeText");

	FGetItemUtilityTypeText parms{};	
	parms.GameplayTag = GameplayTag;
	parms.__WorldContext = __WorldContext;
	parms.Text = Text;

	ProcessEvent(fn, &parms);
}

void UDCUIFunctionLibrary_C::GetItemArmorTypeText(struct FGameplayTag GameplayTag, struct UObject* __WorldContext, struct FText& Text){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemArmorTypeText");

	FGetItemArmorTypeText parms{};	
	parms.GameplayTag = GameplayTag;
	parms.__WorldContext = __WorldContext;
	parms.Text = Text;

	ProcessEvent(fn, &parms);
}

void UDCUIFunctionLibrary_C::GetItemWeaponTypeText(struct FGameplayTag GameplayTag, struct UObject* __WorldContext, struct FText& Text){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemWeaponTypeText");

	FGetItemWeaponTypeText parms{};	
	parms.GameplayTag = GameplayTag;
	parms.__WorldContext = __WorldContext;
	parms.Text = Text;

	ProcessEvent(fn, &parms);
}

void UDCUIFunctionLibrary_C::GetItemHandTypeText(struct FGameplayTag GameplayTag, struct UObject* __WorldContext, struct FText& Text){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemHandTypeText");

	FGetItemHandTypeText parms{};	
	parms.GameplayTag = GameplayTag;
	parms.__WorldContext = __WorldContext;
	parms.Text = Text;

	ProcessEvent(fn, &parms);
}

void UDCUIFunctionLibrary_C::GetItemSlotTypeText(struct FGameplayTag GameplayTag, struct UObject* __WorldContext, struct FText& Text){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemSlotTypeText");

	FGetItemSlotTypeText parms{};	
	parms.GameplayTag = GameplayTag;
	parms.__WorldContext = __WorldContext;
	parms.Text = Text;

	ProcessEvent(fn, &parms);
}

