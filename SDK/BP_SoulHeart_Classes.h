#pragma once 
#include <BP_SoulHeart_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_SoulHeart.BP_SoulHeart_C
// Size: 0x590(Inherited: 0x580)
struct ABP_SoulHeart_C : ABP_DCItemActor_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct UNiagaraComponent* P_BlueFire_StMesh;  // 0x588 (0x588)


	void ItemDataUpdated(struct FItemData& InItemData); // Function BP_SoulHeart.BP_SoulHeart_C.ItemDataUpdated
	void ExecuteUbergraph_BP_SoulHeart(int32_t EntryPoint); // Function BP_SoulHeart.BP_SoulHeart_C.ExecuteUbergraph_BP_SoulHeart
}; 
 
 


