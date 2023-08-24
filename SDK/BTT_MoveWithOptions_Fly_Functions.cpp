#include "pch.h"
#include "SDK.h"

void UBTT_MoveWithOptions_Fly_C::Check Invisible Target(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.Check Invisible Target");

	FCheck Invisible Target parms{};	

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_Fly_C::ClearVariables(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.ClearVariables");

	FClearVariables parms{};	

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_Fly_C::SetRemainDistance(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.SetRemainDistance");

	FSetRemainDistance parms{};	

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_Fly_C::CheckStopTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.CheckStopTime");

	FCheckStopTime parms{};	

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_Fly_C::CheckObjects(struct APawn* OwnerActor, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.CheckObjects");

	FCheckObjects parms{};	
	parms.OwnerActor = OwnerActor;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_Fly_C::SetDestination(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.SetDestination");

	FSetDestination parms{};	

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_Fly_C::Check Remain Distance 3D(struct APawn* OwnerActor, double DeltaTime, double& ResultDistance){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.Check Remain Distance 3D");

	FCheck Remain Distance 3D parms{};	
	parms.OwnerActor = OwnerActor;
	parms.DeltaTime = DeltaTime;
	parms.ResultDistance = ResultDistance;

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_Fly_C::EventReceived_DFF4174A4768D303B7BF7C8C1C1E69D4(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.EventReceived_DFF4174A4768D303B7BF7C8C1C1E69D4");

	FEventReceived_DFF4174A4768D303B7BF7C8C1C1E69D4 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_Fly_C::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.ReceiveExecuteAI");

	FReceiveExecuteAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_Fly_C::ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.ReceiveTickAI");

	FReceiveTickAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;
	parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_Fly_C::CheckEnemies(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.CheckEnemies");

	FCheckEnemies parms{};	

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_Fly_C::OnTaskFinished(struct AAIController* OwnerController, struct APawn* ControlledPawn, enum class EBTNodeResult TaskResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.OnTaskFinished");

	FOnTaskFinished parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;
	parms.TaskResult = TaskResult;

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_Fly_C::ExecuteUbergraph_BTT_MoveWithOptions_Fly(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions_Fly.BTT_MoveWithOptions_Fly_C.ExecuteUbergraph_BTT_MoveWithOptions_Fly");

	FExecuteUbergraph_BTT_MoveWithOptions_Fly parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

