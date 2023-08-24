#include "pch.h"
#include "SDK.h"

bool UBlendSpacePlayerLibrary::ShouldResetPlayTimeWhenBlendSpaceChanges(struct FBlendSpacePlayerReference& BlendSpacePlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.ShouldResetPlayTimeWhenBlendSpaceChanges");

	FShouldResetPlayTimeWhenBlendSpaceChanges parms{};	
	parms.BlendSpacePlayer = BlendSpacePlayer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetResetPlayTimeWhenBlendSpaceChanges(struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bReset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetResetPlayTimeWhenBlendSpaceChanges");

	FSetResetPlayTimeWhenBlendSpaceChanges parms{};	
	parms.BlendSpacePlayer = BlendSpacePlayer;
	parms.bReset = bReset;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetPlayRate(struct FBlendSpacePlayerReference& BlendSpacePlayer, float PlayRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetPlayRate");

	FSetPlayRate parms{};	
	parms.BlendSpacePlayer = BlendSpacePlayer;
	parms.PlayRate = PlayRate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetLoop(struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bLoop){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetLoop");

	FSetLoop parms{};	
	parms.BlendSpacePlayer = BlendSpacePlayer;
	parms.bLoop = bLoop;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetBlendSpaceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FBlendSpacePlayerReference& BlendSpacePlayer, struct UBlendSpace* BlendSpace, float BlendTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpaceWithInertialBlending");

	FSetBlendSpaceWithInertialBlending parms{};	
	parms.UpdateContext = UpdateContext;
	parms.BlendSpacePlayer = BlendSpacePlayer;
	parms.BlendSpace = BlendSpace;
	parms.BlendTime = BlendTime;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetBlendSpace(struct FBlendSpacePlayerReference& BlendSpacePlayer, struct UBlendSpace* BlendSpace){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpace");

	FSetBlendSpace parms{};	
	parms.BlendSpacePlayer = BlendSpacePlayer;
	parms.BlendSpace = BlendSpace;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UBlendSpacePlayerLibrary::GetStartPosition(struct FBlendSpacePlayerReference& BlendSpacePlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetStartPosition");

	FGetStartPosition parms{};	
	parms.BlendSpacePlayer = BlendSpacePlayer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector UBlendSpacePlayerLibrary::GetPosition(struct FBlendSpacePlayerReference& BlendSpacePlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPosition");

	FGetPosition parms{};	
	parms.BlendSpacePlayer = BlendSpacePlayer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UBlendSpacePlayerLibrary::GetPlayRate(struct FBlendSpacePlayerReference& BlendSpacePlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPlayRate");

	FGetPlayRate parms{};	
	parms.BlendSpacePlayer = BlendSpacePlayer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBlendSpacePlayerLibrary::GetLoop(struct FBlendSpacePlayerReference& BlendSpacePlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetLoop");

	FGetLoop parms{};	
	parms.BlendSpacePlayer = BlendSpacePlayer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UBlendSpace* UBlendSpacePlayerLibrary::GetBlendSpace(struct FBlendSpacePlayerReference& BlendSpacePlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetBlendSpace");

	FGetBlendSpace parms{};	
	parms.BlendSpacePlayer = BlendSpacePlayer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UBlendSpacePlayerLibrary::ConvertToBlendSpacePlayerPure(struct FAnimNodeReference& Node, struct FBlendSpacePlayerReference& BlendSpacePlayer, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayerPure");

	FConvertToBlendSpacePlayerPure parms{};	
	parms.Node = Node;
	parms.BlendSpacePlayer = BlendSpacePlayer;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::ConvertToBlendSpacePlayer(struct FAnimNodeReference& Node, uint8_t& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayer");

	FConvertToBlendSpacePlayer parms{};	
	parms.Node = Node;
	parms.Result = Result;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FLayeredBoneBlendReference ULayeredBoneBlendLibrary::SetBlendMask(struct FAnimUpdateContext& UpdateContext, struct FLayeredBoneBlendReference& LayeredBoneBlend, int32_t PoseIndex, struct FName BlendMaskName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.LayeredBoneBlendLibrary.SetBlendMask");

	FSetBlendMask parms{};	
	parms.UpdateContext = UpdateContext;
	parms.LayeredBoneBlend = LayeredBoneBlend;
	parms.PoseIndex = PoseIndex;
	parms.BlendMaskName = BlendMaskName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t ULayeredBoneBlendLibrary::GetNumPoses(struct FLayeredBoneBlendReference& LayeredBoneBlend){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.LayeredBoneBlendLibrary.GetNumPoses");

	FGetNumPoses parms{};	
	parms.LayeredBoneBlend = LayeredBoneBlend;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FLayeredBoneBlendReference ULayeredBoneBlendLibrary::ConvertToLayeredBoneBlend(struct FAnimNodeReference& Node, uint8_t& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBoneBlend");

	FConvertToLayeredBoneBlend parms{};	
	parms.Node = Node;
	parms.Result = Result;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ULayeredBoneBlendLibrary::ConvertToLayeredBlendPerBonePure(struct FAnimNodeReference& Node, struct FLayeredBoneBlendReference& LayeredBoneBlend, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBlendPerBonePure");

	FConvertToLayeredBlendPerBonePure parms{};	
	parms.Node = Node;
	parms.LayeredBoneBlend = LayeredBoneBlend;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UAnimationStateMachineLibrary::SetState(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateMachineReference& Node, struct FName TargetState, float Duration, enum class ETransitionLogicType BlendType, struct UBlendProfile* BlendProfile, uint8_t AlphaBlendOption, struct UCurveFloat* CustomBlendCurve){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.SetState");

	FSetState parms{};	
	parms.UpdateContext = UpdateContext;
	parms.Node = Node;
	parms.TargetState = TargetState;
	parms.Duration = Duration;
	parms.BlendType = BlendType;
	parms.BlendProfile = BlendProfile;
	parms.AlphaBlendOption = AlphaBlendOption;
	parms.CustomBlendCurve = CustomBlendCurve;

	ProcessEvent(fn, &parms);
}

bool UAnimationStateMachineLibrary::IsStateBlendingOut(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut");

	FIsStateBlendingOut parms{};	
	parms.UpdateContext = UpdateContext;
	parms.Node = Node;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UAnimationStateMachineLibrary::IsStateBlendingIn(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn");

	FIsStateBlendingIn parms{};	
	parms.UpdateContext = UpdateContext;
	parms.Node = Node;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FName UAnimationStateMachineLibrary::GetState(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateMachineReference& Node){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.GetState");

	FGetState parms{};	
	parms.UpdateContext = UpdateContext;
	parms.Node = Node;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAnimationStateMachineLibrary::GetRelevantAnimTimeRemainingFraction(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemainingFraction");

	FGetRelevantAnimTimeRemainingFraction parms{};	
	parms.UpdateContext = UpdateContext;
	parms.Node = Node;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAnimationStateMachineLibrary::GetRelevantAnimTimeRemaining(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemaining");

	FGetRelevantAnimTimeRemaining parms{};	
	parms.UpdateContext = UpdateContext;
	parms.Node = Node;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAnimationStateMachineLibrary::ConvertToAnimationStateResultPure(struct FAnimNodeReference& Node, struct FAnimationStateResultReference& AnimationState, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure");

	FConvertToAnimationStateResultPure parms{};	
	parms.Node = Node;
	parms.AnimationState = AnimationState;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UAnimationStateMachineLibrary::ConvertToAnimationStateResult(struct FAnimNodeReference& Node, struct FAnimationStateResultReference& AnimationState, uint8_t& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult");

	FConvertToAnimationStateResult parms{};	
	parms.Node = Node;
	parms.AnimationState = AnimationState;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UAnimationStateMachineLibrary::ConvertToAnimationStateMachinePure(struct FAnimNodeReference& Node, struct FAnimationStateMachineReference& AnimationState, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachinePure");

	FConvertToAnimationStateMachinePure parms{};	
	parms.Node = Node;
	parms.AnimationState = AnimationState;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UAnimationStateMachineLibrary::ConvertToAnimationStateMachine(struct FAnimNodeReference& Node, struct FAnimationStateMachineReference& AnimationState, uint8_t& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachine");

	FConvertToAnimationStateMachine parms{};	
	parms.Node = Node;
	parms.AnimationState = AnimationState;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

struct FSkeletalControlReference USkeletalControlLibrary::SetAlpha(struct FSkeletalControlReference& SkeletalControl, float Alpha){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SkeletalControlLibrary.SetAlpha");

	FSetAlpha parms{};	
	parms.SkeletalControl = SkeletalControl;
	parms.Alpha = Alpha;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USkeletalControlLibrary::GetAlpha(struct FSkeletalControlReference& SkeletalControl){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha");

	FGetAlpha parms{};	
	parms.SkeletalControl = SkeletalControl;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USkeletalControlLibrary::ConvertToSkeletalControlPure(struct FAnimNodeReference& Node, struct FSkeletalControlReference& SkeletalControl, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure");

	FConvertToSkeletalControlPure parms{};	
	parms.Node = Node;
	parms.SkeletalControl = SkeletalControl;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

struct FSkeletalControlReference USkeletalControlLibrary::ConvertToSkeletalControl(struct FAnimNodeReference& Node, uint8_t& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl");

	FConvertToSkeletalControl parms{};	
	parms.Node = Node;
	parms.Result = Result;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAnimExecutionContextLibrary::GetDeltaTime(struct FAnimUpdateContext& Context){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime");

	FGetDeltaTime parms{};	
	parms.Context = Context;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UAnimExecutionContextLibrary::GetCurrentWeight(struct FAnimUpdateContext& Context){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight");

	FGetCurrentWeight parms{};	
	parms.Context = Context;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAnimNodeReference UAnimExecutionContextLibrary::GetAnimNodeReference(struct UAnimInstance* Instance, int32_t Index){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference");

	FGetAnimNodeReference parms{};	
	parms.Instance = Instance;
	parms.Index = Index;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAnimInstance* UAnimExecutionContextLibrary::GetAnimInstance(struct FAnimExecutionContext& Context){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance");

	FGetAnimInstance parms{};	
	parms.Context = Context;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAnimUpdateContext UAnimExecutionContextLibrary::ConvertToUpdateContext(struct FAnimExecutionContext& Context, uint8_t& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext");

	FConvertToUpdateContext parms{};	
	parms.Context = Context;
	parms.Result = Result;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAnimPoseContext UAnimExecutionContextLibrary::ConvertToPoseContext(struct FAnimExecutionContext& Context, uint8_t& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext");

	FConvertToPoseContext parms{};	
	parms.Context = Context;
	parms.Result = Result;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAnimInitializationContext UAnimExecutionContextLibrary::ConvertToInitializationContext(struct FAnimExecutionContext& Context, uint8_t& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext");

	FConvertToInitializationContext parms{};	
	parms.Context = Context;
	parms.Result = Result;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FAnimComponentSpacePoseContext UAnimExecutionContextLibrary::ConvertToComponentSpacePoseContext(struct FAnimExecutionContext& Context, uint8_t& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext");

	FConvertToComponentSpacePoseContext parms{};	
	parms.Context = Context;
	parms.Result = Result;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UKismetAnimationLibrary::K2_TwoBoneIK(struct FVector& RootPos, struct FVector& JointPos, struct FVector& EndPos, struct FVector& JointTarget, struct FVector& Effector, struct FVector& OutJointPos, struct FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK");

	FK2_TwoBoneIK parms{};	
	parms.RootPos = RootPos;
	parms.JointPos = JointPos;
	parms.EndPos = EndPos;
	parms.JointTarget = JointTarget;
	parms.Effector = Effector;
	parms.OutJointPos = OutJointPos;
	parms.OutEndPos = OutEndPos;
	parms.bAllowStretching = bAllowStretching;
	parms.StartStretchRatio = StartStretchRatio;
	parms.MaxStretchScale = MaxStretchScale;

	ProcessEvent(fn, &parms);
}

void UKismetAnimationLibrary::K2_StartProfilingTimer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer");

	FK2_StartProfilingTimer parms{};	

	ProcessEvent(fn, &parms);
}

struct FVector UKismetAnimationLibrary::K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap");

	FK2_MakePerlinNoiseVectorAndRemap parms{};	
	parms.X = X;
	parms.Y = Y;
	parms.Z = Z;
	parms.RangeOutMinX = RangeOutMinX;
	parms.RangeOutMaxX = RangeOutMaxX;
	parms.RangeOutMinY = RangeOutMinY;
	parms.RangeOutMaxY = RangeOutMaxY;
	parms.RangeOutMinZ = RangeOutMinZ;
	parms.RangeOutMaxZ = RangeOutMaxZ;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UKismetAnimationLibrary::K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap");

	FK2_MakePerlinNoiseAndRemap parms{};	
	parms.Value = Value;
	parms.RangeOutMin = RangeOutMin;
	parms.RangeOutMax = RangeOutMax;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FTransform UKismetAnimationLibrary::K2_LookAt(struct FTransform& CurrentTransform, struct FVector& TargetPosition, struct FVector LookAtVector, bool bUseUpVector, struct FVector UpVector, float ClampConeInDegree){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt");

	FK2_LookAt parms{};	
	parms.CurrentTransform = CurrentTransform;
	parms.TargetPosition = TargetPosition;
	parms.LookAtVector = LookAtVector;
	parms.bUseUpVector = bUseUpVector;
	parms.UpVector = UpVector;
	parms.ClampConeInDegree = ClampConeInDegree;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UKismetAnimationLibrary::K2_EndProfilingTimer(bool bLog, struct FString LogPrefix){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer");

	FK2_EndProfilingTimer parms{};	
	parms.bLog = bLog;
	parms.LogPrefix = LogPrefix;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UKismetAnimationLibrary::K2_DistanceBetweenTwoSocketsAndMapRange(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameA, enum class ERelativeTransformSpace SocketSpaceA, struct FName SocketOrBoneNameB, enum class ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange");

	FK2_DistanceBetweenTwoSocketsAndMapRange parms{};	
	parms.Component = Component;
	parms.SocketOrBoneNameA = SocketOrBoneNameA;
	parms.SocketSpaceA = SocketSpaceA;
	parms.SocketOrBoneNameB = SocketOrBoneNameB;
	parms.SocketSpaceB = SocketSpaceB;
	parms.bRemapRange = bRemapRange;
	parms.InRangeMin = InRangeMin;
	parms.InRangeMax = InRangeMax;
	parms.OutRangeMin = OutRangeMin;
	parms.OutRangeMax = OutRangeMax;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FVector UKismetAnimationLibrary::K2_DirectionBetweenSockets(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameFrom, struct FName SocketOrBoneNameTo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets");

	FK2_DirectionBetweenSockets parms{};	
	parms.Component = Component;
	parms.SocketOrBoneNameFrom = SocketOrBoneNameFrom;
	parms.SocketOrBoneNameTo = SocketOrBoneNameTo;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UKismetAnimationLibrary::K2_CalculateVelocityFromSockets(float DeltaSeconds, struct USkeletalMeshComponent* Component, struct FName SocketOrBoneName, struct FName ReferenceSocketOrBone, enum class ERelativeTransformSpace SocketSpace, struct FVector OffsetInBoneSpace, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, uint8_t EasingType, struct FRuntimeFloatCurve& CustomCurve){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets");

	FK2_CalculateVelocityFromSockets parms{};	
	parms.DeltaSeconds = DeltaSeconds;
	parms.Component = Component;
	parms.SocketOrBoneName = SocketOrBoneName;
	parms.ReferenceSocketOrBone = ReferenceSocketOrBone;
	parms.SocketSpace = SocketSpace;
	parms.OffsetInBoneSpace = OffsetInBoneSpace;
	parms.History = History;
	parms.NumberOfSamples = NumberOfSamples;
	parms.VelocityMin = VelocityMin;
	parms.VelocityMax = VelocityMax;
	parms.EasingType = EasingType;
	parms.CustomCurve = CustomCurve;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UKismetAnimationLibrary::K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, struct FVector Position, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory");

	FK2_CalculateVelocityFromPositionHistory parms{};	
	parms.DeltaSeconds = DeltaSeconds;
	parms.Position = Position;
	parms.History = History;
	parms.NumberOfSamples = NumberOfSamples;
	parms.VelocityMin = VelocityMin;
	parms.VelocityMax = VelocityMax;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UKismetAnimationLibrary::CalculateDirection(struct FVector& Velocity, struct FRotator& BaseRotation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection");

	FCalculateDirection parms{};	
	parms.Velocity = Velocity;
	parms.BaseRotation = BaseRotation;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ULinkedAnimGraphLibrary::HasLinkedAnimInstance(struct FLinkedAnimGraphReference& Node){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance");

	FHasLinkedAnimInstance parms{};	
	parms.Node = Node;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAnimInstance* ULinkedAnimGraphLibrary::GetLinkedAnimInstance(struct FLinkedAnimGraphReference& Node){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance");

	FGetLinkedAnimInstance parms{};	
	parms.Node = Node;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void ULinkedAnimGraphLibrary::ConvertToLinkedAnimGraphPure(struct FAnimNodeReference& Node, struct FLinkedAnimGraphReference& LinkedAnimGraph, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure");

	FConvertToLinkedAnimGraphPure parms{};	
	parms.Node = Node;
	parms.LinkedAnimGraph = LinkedAnimGraph;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

struct FLinkedAnimGraphReference ULinkedAnimGraphLibrary::ConvertToLinkedAnimGraph(struct FAnimNodeReference& Node, uint8_t& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph");

	FConvertToLinkedAnimGraph parms{};	
	parms.Node = Node;
	parms.Result = Result;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UPlayMontageCallbackProxy::OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived");

	FOnNotifyEndReceived parms{};	
	parms.NotifyName = NotifyName;
	parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	ProcessEvent(fn, &parms);
}

void UPlayMontageCallbackProxy::OnNotifyBeginReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived");

	FOnNotifyBeginReceived parms{};	
	parms.NotifyName = NotifyName;
	parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	ProcessEvent(fn, &parms);
}

void UPlayMontageCallbackProxy::OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded");

	FOnMontageEnded parms{};	
	parms.Montage = Montage;
	parms.bInterrupted = bInterrupted;

	ProcessEvent(fn, &parms);
}

void UPlayMontageCallbackProxy::OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut");

	FOnMontageBlendingOut parms{};	
	parms.Montage = Montage;
	parms.bInterrupted = bInterrupted;

	ProcessEvent(fn, &parms);
}

struct UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(struct USkeletalMeshComponent* InSkeletalMeshComponent, struct UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage");

	FCreateProxyObjectForPlayMontage parms{};	
	parms.InSkeletalMeshComponent = InSkeletalMeshComponent;
	parms.MontageToPlay = MontageToPlay;
	parms.PlayRate = PlayRate;
	parms.StartingPosition = StartingPosition;
	parms.StartingSection = StartingSection;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::SetSequenceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FSequenceEvaluatorReference& SequenceEvaluator, struct UAnimSequenceBase* Sequence, float BlendTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending");

	FSetSequenceWithInertialBlending parms{};	
	parms.UpdateContext = UpdateContext;
	parms.SequenceEvaluator = SequenceEvaluator;
	parms.Sequence = Sequence;
	parms.BlendTime = BlendTime;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::SetSequence(struct FSequenceEvaluatorReference& SequenceEvaluator, struct UAnimSequenceBase* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence");

	FSetSequence parms{};	
	parms.SequenceEvaluator = SequenceEvaluator;
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::SetExplicitTime(struct FSequenceEvaluatorReference& SequenceEvaluator, float Time){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime");

	FSetExplicitTime parms{};	
	parms.SequenceEvaluator = SequenceEvaluator;
	parms.Time = Time;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAnimSequenceBase* USequenceEvaluatorLibrary::GetSequence(struct FSequenceEvaluatorReference& SequenceEvaluator){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence");

	FGetSequence parms{};	
	parms.SequenceEvaluator = SequenceEvaluator;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USequenceEvaluatorLibrary::GetAccumulatedTime(struct FSequenceEvaluatorReference& SequenceEvaluator){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime");

	FGetAccumulatedTime parms{};	
	parms.SequenceEvaluator = SequenceEvaluator;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USequenceEvaluatorLibrary::ConvertToSequenceEvaluatorPure(struct FAnimNodeReference& Node, struct FSequenceEvaluatorReference& SequenceEvaluator, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure");

	FConvertToSequenceEvaluatorPure parms{};	
	parms.Node = Node;
	parms.SequenceEvaluator = SequenceEvaluator;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::ConvertToSequenceEvaluator(struct FAnimNodeReference& Node, uint8_t& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator");

	FConvertToSequenceEvaluator parms{};	
	parms.Node = Node;
	parms.Result = Result;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::AdvanceTime(struct FAnimUpdateContext& UpdateContext, struct FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime");

	FAdvanceTime parms{};	
	parms.UpdateContext = UpdateContext;
	parms.SequenceEvaluator = SequenceEvaluator;
	parms.PlayRate = PlayRate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSequencePlayerReference USequencePlayerLibrary::SetStartPosition(struct FSequencePlayerReference& SequencePlayer, float StartPosition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition");

	FSetStartPosition parms{};	
	parms.SequencePlayer = SequencePlayer;
	parms.StartPosition = StartPosition;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSequencePlayerReference USequencePlayerLibrary::SetSequenceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FSequencePlayerReference& SequencePlayer, struct UAnimSequenceBase* Sequence, float BlendTime){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending");

	FSetSequenceWithInertialBlending parms{};	
	parms.UpdateContext = UpdateContext;
	parms.SequencePlayer = SequencePlayer;
	parms.Sequence = Sequence;
	parms.BlendTime = BlendTime;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSequencePlayerReference USequencePlayerLibrary::SetSequence(struct FSequencePlayerReference& SequencePlayer, struct UAnimSequenceBase* Sequence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence");

	FSetSequence parms{};	
	parms.SequencePlayer = SequencePlayer;
	parms.Sequence = Sequence;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSequencePlayerReference USequencePlayerLibrary::SetPlayRate(struct FSequencePlayerReference& SequencePlayer, float PlayRate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate");

	FSetPlayRate parms{};	
	parms.SequencePlayer = SequencePlayer;
	parms.PlayRate = PlayRate;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSequencePlayerReference USequencePlayerLibrary::SetAccumulatedTime(struct FSequencePlayerReference& SequencePlayer, float Time){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime");

	FSetAccumulatedTime parms{};	
	parms.SequencePlayer = SequencePlayer;
	parms.Time = Time;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USequencePlayerLibrary::GetStartPosition(struct FSequencePlayerReference& SequencePlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition");

	FGetStartPosition parms{};	
	parms.SequencePlayer = SequencePlayer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UAnimSequenceBase* USequencePlayerLibrary::GetSequencePure(struct FSequencePlayerReference& SequencePlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure");

	FGetSequencePure parms{};	
	parms.SequencePlayer = SequencePlayer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FSequencePlayerReference USequencePlayerLibrary::GetSequence(struct FSequencePlayerReference& SequencePlayer, struct UAnimSequenceBase*& SequenceBase){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence");

	FGetSequence parms{};	
	parms.SequencePlayer = SequencePlayer;
	parms.SequenceBase = SequenceBase;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USequencePlayerLibrary::GetPlayRate(struct FSequencePlayerReference& SequencePlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate");

	FGetPlayRate parms{};	
	parms.SequencePlayer = SequencePlayer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool USequencePlayerLibrary::GetLoopAnimation(struct FSequencePlayerReference& SequencePlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation");

	FGetLoopAnimation parms{};	
	parms.SequencePlayer = SequencePlayer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USequencePlayerLibrary::GetAccumulatedTime(struct FSequencePlayerReference& SequencePlayer){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime");

	FGetAccumulatedTime parms{};	
	parms.SequencePlayer = SequencePlayer;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USequencePlayerLibrary::ConvertToSequencePlayerPure(struct FAnimNodeReference& Node, struct FSequencePlayerReference& SequencePlayer, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure");

	FConvertToSequencePlayerPure parms{};	
	parms.Node = Node;
	parms.SequencePlayer = SequencePlayer;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

struct FSequencePlayerReference USequencePlayerLibrary::ConvertToSequencePlayer(struct FAnimNodeReference& Node, uint8_t& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer");

	FConvertToSequencePlayer parms{};	
	parms.Node = Node;
	parms.Result = Result;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float USequencePlayerLibrary::ComputePlayRateFromDuration(struct FSequencePlayerReference& SequencePlayer, float Duration){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AnimGraphRuntime.SequencePlayerLibrary.ComputePlayRateFromDuration");

	FComputePlayRateFromDuration parms{};	
	parms.SequencePlayer = SequencePlayer;
	parms.Duration = Duration;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

