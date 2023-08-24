#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_ProjectileToSpawnItemHolder.BP_ProjectileToSpawnItemHolder_C.ExecuteUbergraph_BP_ProjectileToSpawnItemHolder
struct FExecuteUbergraph_BP_ProjectileToSpawnItemHolder
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FHitResult K2Node_Event_Hit;  // 0x8 (0x8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool K2Node_Event_bIsAttached : 1;  // 0xF0 (0xF0)
	char pad_241[15];  // 0xF1 (0xF1)
	struct FTransform K2Node_Event_ActorPrevTickTransform;  // 0x100 (0x100)
	char pad_352_1 : 7;  // 0x160 (0x160)
	bool CallFunc_IsValidClass_ReturnValue : 1;  // 0x160 (0x160)
	char pad_353[15];  // 0x161 (0x161)
	struct FTransform CallFunc_K2_GetComponentToWorld_ReturnValue;  // 0x170 (0x170)
	struct FItemData K2Node_Copy_ReturnValue;  // 0x1D0 (0x1D0)
	struct UItem* CallFunc_SpawnObject_ReturnValue;  // 0x270 (0x270)
	struct FItemData K2Node_SetFieldsInStruct_StructOut;  // 0x278 (0x278)
	AItemHolderActorBase* K2Node_CustomEvent_SpawnHolderClass;  // 0x318 (0x318)
	struct FTransform K2Node_CustomEvent_InTransform;  // 0x320 (0x320)
	struct UItem* K2Node_CustomEvent_ItemObject;  // 0x380 (0x380)
	struct AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;  // 0x388 (0x388)
	struct AItemHolderActorBase* CallFunc_FinishSpawningActor_ReturnValue;  // 0x390 (0x390)


}; 
 
 // Function BP_ProjectileToSpawnItemHolder.BP_ProjectileToSpawnItemHolder_C.SpawnItemHolder
struct FSpawnItemHolder
{
	AItemHolderActorBase* SpawnHolderClass;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform InTransform;  // 0x10 (0x10)
	struct UItem* ItemObject;  // 0x70 (0x70)


}; 
 
 // Function BP_ProjectileToSpawnItemHolder.BP_ProjectileToSpawnItemHolder_C.ProjectileHit
// Size: 0x150(Inherited: 0x150)
struct FProjectileHit : FProjectileHit
{
	struct FHitResult Hit;  // 0x0 (0x0)
	char pad_568_1 : 7;  // 0x238 (0x238)
	bool bIsAttached : 1;  // 0xE8 (0xE8)
	struct FTransform ActorPrevTickTransform;  // 0xF0 (0xF0)


}; 
 
 