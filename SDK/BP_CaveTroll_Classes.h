#pragma once 
#include <BP_CaveTroll_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_CaveTroll.BP_CaveTroll_C
// Size: 0x122C(Inherited: 0x11B8)
struct ABP_CaveTroll_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UBP_DCHitBox_C* BP_DCHitBox9;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox8;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox6;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox5;  // 0x11D8 (0x11D8)
	struct UBP_DCHitBox_C* BP_DCHitBox7;  // 0x11E0 (0x11E0)
	struct UBP_DCHitBox_C* BP_DCHitBox4;  // 0x11E8 (0x11E8)
	struct UBP_DCHitBox_C* BP_DCHitBox3;  // 0x11F0 (0x11F0)
	struct UBP_DCHitBox_C* BP_DCHitBox2;  // 0x11F8 (0x11F8)
	struct UBP_DCHitBox_C* BP_DCHitBox1;  // 0x1200 (0x1200)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x1208 (0x1208)
	double Combo Trigger Ratio;  // 0x1210 (0x1210)
	double Subtract Combo Trigger Ratio;  // 0x1218 (0x1218)
	int32_t Phase Subtract;  // 0x1220 (0x1220)
	int32_t Phase Add Min;  // 0x1224 (0x1224)
	int32_t Phase Add Max;  // 0x1228 (0x1228)


	void Trigger In Overlap NPT Area(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BP_CaveTroll.BP_CaveTroll_C.Trigger In Overlap NPT Area
	void EventReceived_91854E014BDF1001DBBDF39E92099E75(struct FGameplayEventData Payload); // Function BP_CaveTroll.BP_CaveTroll_C.EventReceived_91854E014BDF1001DBBDF39E92099E75
	void EventReceived_0B96BE9F4BE2B9A385CB12AAB43A0BC6(struct FGameplayEventData Payload); // Function BP_CaveTroll.BP_CaveTroll_C.EventReceived_0B96BE9F4BE2B9A385CB12AAB43A0BC6
	void ReceiveBeginPlay(); // Function BP_CaveTroll.BP_CaveTroll_C.ReceiveBeginPlay
	void OnSetAI(); // Function BP_CaveTroll.BP_CaveTroll_C.OnSetAI
	void Comeback Event Start(); // Function BP_CaveTroll.BP_CaveTroll_C.Comeback Event Start
	void ExecuteUbergraph_BP_CaveTroll(int32_t EntryPoint); // Function BP_CaveTroll.BP_CaveTroll_C.ExecuteUbergraph_BP_CaveTroll
}; 
 
 


