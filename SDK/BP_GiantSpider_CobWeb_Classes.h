#pragma once 
#include <BP_GiantSpider_CobWeb_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_GiantSpider_CobWeb.BP_GiantSpider_CobWeb_C
// Size: 0xBB8(Inherited: 0xB98)
struct ABP_GiantSpider_CobWeb_C : ABP_DCAoeDefineBase_AutoActive_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xB98 (0xB98)
	struct UStaticMeshComponent* Web_Ambient;  // 0xBA0 (0xBA0)
	struct UStaticMeshComponent* Web_Main;  // 0xBA8 (0xBA8)
	struct AActor* Spawner;  // 0xBB0 (0xBB0)


	void ReceiveDestroyed(); // Function BP_GiantSpider_CobWeb.BP_GiantSpider_CobWeb_C.ReceiveDestroyed
	void EmergeCobWeb(); // Function BP_GiantSpider_CobWeb.BP_GiantSpider_CobWeb_C.EmergeCobWeb
	void ReceiveBeginPlay(); // Function BP_GiantSpider_CobWeb.BP_GiantSpider_CobWeb_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_GiantSpider_CobWeb(int32_t EntryPoint); // Function BP_GiantSpider_CobWeb.BP_GiantSpider_CobWeb_C.ExecuteUbergraph_BP_GiantSpider_CobWeb
}; 
 
 


