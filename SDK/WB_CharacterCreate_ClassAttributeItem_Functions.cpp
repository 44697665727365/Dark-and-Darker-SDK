#include "pch.h"
#include "SDK.h"

void UWB_CharacterCreate_ClassAttributeItem_C::OnListItemObjectSet(struct UObject* ListItemObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreate_ClassAttributeItem.WB_CharacterCreate_ClassAttributeItem_C.OnListItemObjectSet");

	FOnListItemObjectSet parms{};	
	parms.ListItemObject = ListItemObject;

	ProcessEvent(fn, &parms);
}

void UWB_CharacterCreate_ClassAttributeItem_C::ExecuteUbergraph_WB_CharacterCreate_ClassAttributeItem(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function WB_CharacterCreate_ClassAttributeItem.WB_CharacterCreate_ClassAttributeItem_C.ExecuteUbergraph_WB_CharacterCreate_ClassAttributeItem");

	FExecuteUbergraph_WB_CharacterCreate_ClassAttributeItem parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

