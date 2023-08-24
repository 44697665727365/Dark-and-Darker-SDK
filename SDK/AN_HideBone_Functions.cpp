#include "pch.h"
#include "SDK.h"

bool UAN_HideBone_C::Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AN_HideBone.AN_HideBone_C.Received_Notify");

	FReceived_Notify parms{};	
	parms.MeshComp = MeshComp;
	parms.Animation = Animation;
	parms.EventReference = EventReference;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

