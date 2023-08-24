#pragma once 
#include <BTT_MoveWithOptions_Fly_Structs.h>
 
 
 
// BlueprintGeneratedClass BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C
// Size: 0x1B0(Inherited: 0xA8)
struct UBTT_MoveWithOptions_Fly_C : UBTT_BlueprintBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xA8 (0xA8)
	char pad_176_1 : 7;  // 0xB0 (0xB0)
	bool CheckedDistance3D : 1;  // 0xB0 (0xB0)
	enum class E_TargetTypeToMove DestinationType;  // 0xB1 (0xB1)
	char pad_178[6];  // 0xB2 (0xB2)
	double Acceptance Radius;  // 0xB8 (0xB8)
	double StopTime;  // 0xC0 (0xC0)
	double Slope Angle;  // 0xC8 (0xC8)
	double CheckEnemyTick;  // 0xD0 (0xD0)
	double CheckEnemyDistance;  // 0xD8 (0xD8)
	double RemainDistance;  // 0xE0 (0xE0)
	struct FVector MoveDirection;  // 0xE8 (0xE8)
	struct FVector DestDistance;  // 0x100 (0x100)
	double MaxDistance RandomMove;  // 0x118 (0x118)
	double Random Z Min;  // 0x120 (0x120)
	double Random Z Max;  // 0x128 (0x128)
	struct FVector Destination;  // 0x130 (0x130)
	struct AAIController* Owner Controller;  // 0x148 (0x148)
	struct APawn* Controlled Pawn;  // 0x150 (0x150)
	struct UBlackboardComponent* Blackboard;  // 0x158 (0x158)
	struct ABP_DCMonsterBaseWithOptions_C* As BP DCMonster Base;  // 0x160 (0x160)
	struct FName Distance;  // 0x168 (0x168)
	struct FName TargetLocation;  // 0x170 (0x170)
	struct FName TargetActor;  // 0x178 (0x178)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool Rotated : 1;  // 0x180 (0x180)
	char pad_385_1 : 7;  // 0x181 (0x181)
	bool Reached : 1;  // 0x181 (0x181)
	char pad_386[6];  // 0x182 (0x182)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x188 (0x188)
	struct FTimerHandle TimerHandle;  // 0x198 (0x198)
	struct FTimerHandle TimerHandleInvisibleTarget;  // 0x1A0 (0x1A0)
	struct ADCCharacterBase* TargetEnemy;  // 0x1A8 (0x1A8)


	void Check Invisible Target(); // Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.Check Invisible Target
	void ClearVariables(); // Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.ClearVariables
	void SetRemainDistance(); // Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.SetRemainDistance
	void CheckStopTime(); // Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.CheckStopTime
	void CheckObjects(struct APawn* OwnerActor, bool& Result); // Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.CheckObjects
	void SetDestination(); // Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.SetDestination
	void Check Remain Distance 3D(struct APawn* OwnerActor, double DeltaTime, double& ResultDistance); // Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.Check Remain Distance 3D
	void EventReceived_DFF4174A4768D303B7BF7C8C1C1E69D4(struct FGameplayEventData Payload); // Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.EventReceived_DFF4174A4768D303B7BF7C8C1C1E69D4
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.ReceiveExecuteAI
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.ReceiveTickAI
	void CheckEnemies(); // Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.CheckEnemies
	void OnTaskFinished(struct AAIController* OwnerController, struct APawn* ControlledPawn, enum class EBTNodeResult TaskResult); // Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.OnTaskFinished
	void ExecuteUbergraph_BTT_MoveWithOptions_Fly(int32_t EntryPoint); // Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.ExecuteUbergraph_BTT_MoveWithOptions_Fly
}; 
 
 


