#include "pch.h"
#include "SDK.h"

void ABP_CrossbowBoltProjectile_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CrossbowBoltProjectile.BP_CrossbowBoltProjectile_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_CrossbowBoltProjectile_C::ExecuteUbergraph_BP_CrossbowBoltProjectile(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_CrossbowBoltProjectile.BP_CrossbowBoltProjectile_C.ExecuteUbergraph_BP_CrossbowBoltProjectile");

	FExecuteUbergraph_BP_CrossbowBoltProjectile parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

