#pragma once 
#include <DCUIFunctionLibrary_Structs.h>
 
 
 
// BlueprintGeneratedClass DCUIFunctionLibrary.DCUIFunctionLibrary_C
// Size: 0x28(Inherited: 0x28)
struct UDCUIFunctionLibrary_C : UBlueprintFunctionLibrary
{


	void Get Item Name And Color(struct FItemData ItemData, struct UObject* __WorldContext, struct FText& Name, struct FSlateColor& Color); // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.Get Item Name And Color
	void GetSemicircleSelectedIndexByInputDirection(struct FVector2D Direction, double SectionDegreeSize, struct UObject* __WorldContext, int32_t& RadialIndex); // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetSemicircleSelectedIndexByInputDirection
	void GetAttributeTextColor(struct FGameplayAttributeData GameplayAttributeData, struct UObject* __WorldContext, struct FSlateColor& SlateColor); // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetAttributeTextColor
	void GetAttributeTextColor_OverloadedValue(double BaseValue, double CurrentValue, struct UObject* __WorldContext, struct FSlateColor& SlateColor); // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetAttributeTextColor_OverloadedValue
	void GetSpellTypeColor(struct FGameplayTag SpellSourceType, struct UObject* __WorldContext, struct FSlateColor& OutlineColor); // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetSpellTypeColor
	void GetFirstKeyByInputAction(struct UInputAction* InputAction, struct UObject* __WorldContext, struct FText& KeyDisplayName); // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetFirstKeyByInputAction
	void GetRadialSelectedIndexByInputDirection(struct FVector2D Direction, double SectionDegreeSize, struct UObject* __WorldContext, int32_t& RadialIndex); // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetRadialSelectedIndexByInputDirection
	void UpdateRadialDirectionWithMousePosition(struct UObject* WorldContextObject, struct UObject* __WorldContext, struct FVector2D& Direction); // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.UpdateRadialDirectionWithMousePosition
	void GetGamepadButtonImage(struct FKey Key, struct UObject* __WorldContext, struct UTexture2D*& Image); // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetGamepadButtonImage
	void GetPlayerCharacterEffectTypeText(struct FGameplayTag GameplayTag, struct UObject* __WorldContext, struct FText& Text); // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetPlayerCharacterEffectTypeText
	void GetItemRaritySlateColor(struct FGameplayTag Rarity, struct UObject* __WorldContext, struct FSlateColor& SlateColor); // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemRaritySlateColor
	void GetItemEffectValueText(struct FGameplayTag EffectTag, int32_t EffectValue, struct UObject* __WorldContext, struct FText& EffectValueText); // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemEffectValueText
	void GetItemEffectTypeText(struct FGameplayTag GameplayTag, struct UObject* __WorldContext, struct FText& Text); // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemEffectTypeText
	void GetItemUtilityTypeText(struct FGameplayTag GameplayTag, struct UObject* __WorldContext, struct FText& Text); // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemUtilityTypeText
	void GetItemArmorTypeText(struct FGameplayTag GameplayTag, struct UObject* __WorldContext, struct FText& Text); // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemArmorTypeText
	void GetItemWeaponTypeText(struct FGameplayTag GameplayTag, struct UObject* __WorldContext, struct FText& Text); // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemWeaponTypeText
	void GetItemHandTypeText(struct FGameplayTag GameplayTag, struct UObject* __WorldContext, struct FText& Text); // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemHandTypeText
	void GetItemSlotTypeText(struct FGameplayTag GameplayTag, struct UObject* __WorldContext, struct FText& Text); // Function DCUIFunctionLibrary.DCUIFunctionLibrary_C.GetItemSlotTypeText
}; 
 
 


