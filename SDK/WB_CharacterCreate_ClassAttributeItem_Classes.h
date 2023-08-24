#pragma once 
#include <WB_CharacterCreate_ClassAttributeItem_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_CharacterCreate_ClassAttributeItem.WB_CharacterCreate_ClassAttributeItem_C
// Size: 0x320(Inherited: 0x308)
struct UWB_CharacterCreate_ClassAttributeItem_C : UClassSelectAttributeItemWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x308 (0x308)
	struct UTextBlock* AttributeName;  // 0x310 (0x310)
	struct UTextBlock* AttributeValue;  // 0x318 (0x318)


	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WB_CharacterCreate_ClassAttributeItem.WB_CharacterCreate_ClassAttributeItem_C.OnListItemObjectSet
	void ExecuteUbergraph_WB_CharacterCreate_ClassAttributeItem(int32_t EntryPoint); // Function WB_CharacterCreate_ClassAttributeItem.WB_CharacterCreate_ClassAttributeItem_C.ExecuteUbergraph_WB_CharacterCreate_ClassAttributeItem
}; 
 
 


