#pragma once 
#include <BP_Lift_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_Lift.BP_Lift_C
// Size: 0x500(Inherited: 0x4E8)
struct ABP_Lift_C : ABP_DoorBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x4E8 (0x4E8)
	struct UDCGameObjectLinkComponent* DCGameObjectLink_1;  // 0x4F0 (0x4F0)
	struct UArrowComponent* Arrow;  // 0x4F8 (0x4F8)


	void BndEvt__BP_Portcullis_DCGameObjectLink_K2Node_ComponentBoundEvent_0_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature(struct FObjectLinkRequestEvent& RecvEvent, struct UObjectLinkMetaDataBlueprint* SendEventParam); // Function BP_Lift.BP_Lift_C.BndEvt__BP_Portcullis_DCGameObjectLink_K2Node_ComponentBoundEvent_0_DCGameObjectLinkComponentUMsgGameLinkerRequest__DelegateSignature
	void ExecuteUbergraph_BP_Lift(int32_t EntryPoint); // Function BP_Lift.BP_Lift_C.ExecuteUbergraph_BP_Lift
}; 
 
 


