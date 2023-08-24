#include "pch.h"
#include "SDK.h"

void UBTT_MoveWithOptions_C::Check Invisible Target(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.Check Invisible Target");

	FCheck Invisible Target parms{};	

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_C::CheckDestinationValid(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.CheckDestinationValid");

	FCheckDestinationValid parms{};	

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_C::ClearVariables(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.ClearVariables");

	FClearVariables parms{};	

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_C::CheckStopTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.CheckStopTime");

	FCheckStopTime parms{};	

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_C::SetDestination(bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.SetDestination");

	FSetDestination parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_C::OnFail_2202D91745600789AE05F59B41DB99AF(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnFail_2202D91745600789AE05F59B41DB99AF");

	FOnFail_2202D91745600789AE05F59B41DB99AF parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_C::OnSuccess_2202D91745600789AE05F59B41DB99AF(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnSuccess_2202D91745600789AE05F59B41DB99AF");

	FOnSuccess_2202D91745600789AE05F59B41DB99AF parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_C::EventReceived_CB08A86943F251B5D4DD73871182C746(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.EventReceived_CB08A86943F251B5D4DD73871182C746");

	FEventReceived_CB08A86943F251B5D4DD73871182C746 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_C::OnFail_C95BBC0447ADD362FE1D7095E9E15247(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnFail_C95BBC0447ADD362FE1D7095E9E15247");

	FOnFail_C95BBC0447ADD362FE1D7095E9E15247 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_C::OnSuccess_C95BBC0447ADD362FE1D7095E9E15247(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnSuccess_C95BBC0447ADD362FE1D7095E9E15247");

	FOnSuccess_C95BBC0447ADD362FE1D7095E9E15247 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_C::OnFail_06B3D6954D31FD4292F8D68D097E190F(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnFail_06B3D6954D31FD4292F8D68D097E190F");

	FOnFail_06B3D6954D31FD4292F8D68D097E190F parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_C::OnSuccess_06B3D6954D31FD4292F8D68D097E190F(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnSuccess_06B3D6954D31FD4292F8D68D097E190F");

	FOnSuccess_06B3D6954D31FD4292F8D68D097E190F parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_C::OnFail_4BC9A0AB4F88C9DFF7B2AC89B97FEC01(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnFail_4BC9A0AB4F88C9DFF7B2AC89B97FEC01");

	FOnFail_4BC9A0AB4F88C9DFF7B2AC89B97FEC01 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_C::OnSuccess_4BC9A0AB4F88C9DFF7B2AC89B97FEC01(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnSuccess_4BC9A0AB4F88C9DFF7B2AC89B97FEC01");

	FOnSuccess_4BC9A0AB4F88C9DFF7B2AC89B97FEC01 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_C::OnFail_4212524D431777D7D0ABCB86B13DACF3(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnFail_4212524D431777D7D0ABCB86B13DACF3");

	FOnFail_4212524D431777D7D0ABCB86B13DACF3 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_C::OnSuccess_4212524D431777D7D0ABCB86B13DACF3(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnSuccess_4212524D431777D7D0ABCB86B13DACF3");

	FOnSuccess_4212524D431777D7D0ABCB86B13DACF3 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_C::OnTaskFinished(struct AAIController* OwnerController, struct APawn* ControlledPawn, enum class EBTNodeResult TaskResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.OnTaskFinished");

	FOnTaskFinished parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;
	parms.TaskResult = TaskResult;

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_C::CheckNearEnemies(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.CheckNearEnemies");

	FCheckNearEnemies parms{};	

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_C::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.ReceiveExecuteAI");

	FReceiveExecuteAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_C::FollowUnRechableTarget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.FollowUnRechableTarget");

	FFollowUnRechableTarget parms{};	

	ProcessEvent(fn, &parms);
}

void UBTT_MoveWithOptions_C::ExecuteUbergraph_BTT_MoveWithOptions(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_MoveWithOptions.BTT_MoveWithOptions_C.ExecuteUbergraph_BTT_MoveWithOptions");

	FExecuteUbergraph_BTT_MoveWithOptions parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

