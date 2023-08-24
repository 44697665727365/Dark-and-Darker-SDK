#include "pch.h"
#include "SDK.h"

void ABP_SoulHeart_C::ItemDataUpdated(struct FItemData& InItemData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SoulHeart.BP_SoulHeart_C.ItemDataUpdated");

	FItemDataUpdated parms{};	
	parms.InItemData = InItemData;

	ProcessEvent(fn, &parms);
}

void ABP_SoulHeart_C::ExecuteUbergraph_BP_SoulHeart(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SoulHeart.BP_SoulHeart_C.ExecuteUbergraph_BP_SoulHeart");

	FExecuteUbergraph_BP_SoulHeart parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

