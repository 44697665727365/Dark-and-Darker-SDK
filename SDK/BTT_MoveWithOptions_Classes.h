#pragma once 
#include <BTT_MoveWithOptions_Structs.h>
 
 
 
// BlueprintGeneratedClass BTT_MoveWithOptions.BTT_MoveWithOptions_C
// Size: 0x172(Inherited: 0xA8)
struct UBTT_MoveWithOptions_C : UBTT_BlueprintBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xA8 (0xA8)
	double Acceptance Radius;  // 0xB0 (0xB0)
	double StopTime;  // 0xB8 (0xB8)
	enum class E_TargetTypeToMove DestinationType;  // 0xC0 (0xC0)
	char pad_193[7];  // 0xC1 (0xC1)
	double DestAngle;  // 0xC8 (0xC8)
	double DestDistance;  // 0xD0 (0xD0)
	uint8_t HitBoxType;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)
	double CheckEnemyTick;  // 0xE0 (0xE0)
	struct FName TargetActor;  // 0xE8 (0xE8)
	struct FName TargetLocation;  // 0xF0 (0xF0)
	struct FName BlackBoardDistance;  // 0xF8 (0xF8)
	struct AAIController* Owner Controller;  // 0x100 (0x100)
	struct APawn* Controlled Pawn;  // 0x108 (0x108)
	struct ABP_DCMonsterBaseWithOptions_C* As BP DCMonster Base;  // 0x110 (0x110)
	struct FVector Destination;  // 0x118 (0x118)
	double MaxDistance RandomMove;  // 0x130 (0x130)
	double CheckEnemyDistance;  // 0x138 (0x138)
	struct TArray<struct ADCCharacterBase*> TargetArray;  // 0x140 (0x140)
	struct FTimerHandle TimerHandleNearEnemy;  // 0x150 (0x150)
	struct FTimerHandle TimerHandleFollowUnRechableTarget;  // 0x158 (0x158)
	struct FTimerHandle TimerHandleInvisibleTarget;  // 0x160 (0x160)
	struct AActor* ValidTargetActor;  // 0x168 (0x168)
	char pad_368_1 : 7;  // 0x170 (0x170)
	bool Result : 1;  // 0x170 (0x170)
	char pad_369_1 : 7;  // 0x171 (0x171)
	bool Reachable : 1;  // 0x171 (0x171)


	void Check Invisible Target(); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.Check Invisible Target
	void CheckDestinationValid(); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.CheckDestinationValid
	void ClearVariables(); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.ClearVariables
	void CheckStopTime(); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.CheckStopTime
	void SetDestination(bool& Result); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.SetDestination
	void OnFail_2202D91745600789AE05F59B41DB99AF(enum class EPathFollowingResult MovementResult); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnFail_2202D91745600789AE05F59B41DB99AF
	void OnSuccess_2202D91745600789AE05F59B41DB99AF(enum class EPathFollowingResult MovementResult); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnSuccess_2202D91745600789AE05F59B41DB99AF
	void EventReceived_CB08A86943F251B5D4DD73871182C746(struct FGameplayEventData Payload); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.EventReceived_CB08A86943F251B5D4DD73871182C746
	void OnFail_C95BBC0447ADD362FE1D7095E9E15247(enum class EPathFollowingResult MovementResult); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnFail_C95BBC0447ADD362FE1D7095E9E15247
	void OnSuccess_C95BBC0447ADD362FE1D7095E9E15247(enum class EPathFollowingResult MovementResult); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnSuccess_C95BBC0447ADD362FE1D7095E9E15247
	void OnFail_06B3D6954D31FD4292F8D68D097E190F(enum class EPathFollowingResult MovementResult); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnFail_06B3D6954D31FD4292F8D68D097E190F
	void OnSuccess_06B3D6954D31FD4292F8D68D097E190F(enum class EPathFollowingResult MovementResult); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnSuccess_06B3D6954D31FD4292F8D68D097E190F
	void OnFail_4BC9A0AB4F88C9DFF7B2AC89B97FEC01(enum class EPathFollowingResult MovementResult); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnFail_4BC9A0AB4F88C9DFF7B2AC89B97FEC01
	void OnSuccess_4BC9A0AB4F88C9DFF7B2AC89B97FEC01(enum class EPathFollowingResult MovementResult); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnSuccess_4BC9A0AB4F88C9DFF7B2AC89B97FEC01
	void OnFail_4212524D431777D7D0ABCB86B13DACF3(enum class EPathFollowingResult MovementResult); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnFail_4212524D431777D7D0ABCB86B13DACF3
	void OnSuccess_4212524D431777D7D0ABCB86B13DACF3(enum class EPathFollowingResult MovementResult); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnSuccess_4212524D431777D7D0ABCB86B13DACF3
	void OnTaskFinished(struct AAIController* OwnerController, struct APawn* ControlledPawn, enum class EBTNodeResult TaskResult); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnTaskFinished
	void CheckNearEnemies(); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.CheckNearEnemies
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.ReceiveExecuteAI
	void FollowUnRechableTarget(); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.FollowUnRechableTarget
	void ExecuteUbergraph_BTT_MoveWithOptions(int32_t EntryPoint); // Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.ExecuteUbergraph_BTT_MoveWithOptions
}; 
 
 


