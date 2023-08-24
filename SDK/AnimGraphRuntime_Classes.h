#pragma once 
#include <AnimGraphRuntime_Structs.h>
 
 
 
// Class AnimGraphRuntime.BlendSpacePlayerLibrary
// Size: 0x28(Inherited: 0x28)
struct UBlendSpacePlayerLibrary : UBlueprintFunctionLibrary
{


	bool ShouldResetPlayTimeWhenBlendSpaceChanges(struct FBlendSpacePlayerReference& BlendSpacePlayer); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.ShouldResetPlayTimeWhenBlendSpaceChanges
	struct FBlendSpacePlayerReference SetResetPlayTimeWhenBlendSpaceChanges(struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bReset); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetResetPlayTimeWhenBlendSpaceChanges
	struct FBlendSpacePlayerReference SetPlayRate(struct FBlendSpacePlayerReference& BlendSpacePlayer, float PlayRate); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetPlayRate
	struct FBlendSpacePlayerReference SetLoop(struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bLoop); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetLoop
	struct FBlendSpacePlayerReference SetBlendSpaceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FBlendSpacePlayerReference& BlendSpacePlayer, struct UBlendSpace* BlendSpace, float BlendTime); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpaceWithInertialBlending
	struct FBlendSpacePlayerReference SetBlendSpace(struct FBlendSpacePlayerReference& BlendSpacePlayer, struct UBlendSpace* BlendSpace); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpace
	float GetStartPosition(struct FBlendSpacePlayerReference& BlendSpacePlayer); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetStartPosition
	struct FVector GetPosition(struct FBlendSpacePlayerReference& BlendSpacePlayer); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPosition
	float GetPlayRate(struct FBlendSpacePlayerReference& BlendSpacePlayer); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPlayRate
	bool GetLoop(struct FBlendSpacePlayerReference& BlendSpacePlayer); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetLoop
	struct UBlendSpace* GetBlendSpace(struct FBlendSpacePlayerReference& BlendSpacePlayer); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetBlendSpace
	void ConvertToBlendSpacePlayerPure(struct FAnimNodeReference& Node, struct FBlendSpacePlayerReference& BlendSpacePlayer, bool& Result); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayerPure
	struct FBlendSpacePlayerReference ConvertToBlendSpacePlayer(struct FAnimNodeReference& Node, uint8_t& Result); // Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayer
}; 
 
 


// Class AnimGraphRuntime.LayeredBoneBlendLibrary
// Size: 0x28(Inherited: 0x28)
struct ULayeredBoneBlendLibrary : UBlueprintFunctionLibrary
{


	struct FLayeredBoneBlendReference SetBlendMask(struct FAnimUpdateContext& UpdateContext, struct FLayeredBoneBlendReference& LayeredBoneBlend, int32_t PoseIndex, struct FName BlendMaskName); // Function AnimGraphRuntime.LayeredBoneBlendLibrary.SetBlendMask
	int32_t GetNumPoses(struct FLayeredBoneBlendReference& LayeredBoneBlend); // Function AnimGraphRuntime.LayeredBoneBlendLibrary.GetNumPoses
	struct FLayeredBoneBlendReference ConvertToLayeredBoneBlend(struct FAnimNodeReference& Node, uint8_t& Result); // Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBoneBlend
	void ConvertToLayeredBlendPerBonePure(struct FAnimNodeReference& Node, struct FLayeredBoneBlendReference& LayeredBoneBlend, bool& Result); // Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBlendPerBonePure
}; 
 
 


// Class AnimGraphRuntime.AnimationStateMachineLibrary
// Size: 0x28(Inherited: 0x28)
struct UAnimationStateMachineLibrary : UBlueprintFunctionLibrary
{


	void SetState(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateMachineReference& Node, struct FName TargetState, float Duration, enum class ETransitionLogicType BlendType, struct UBlendProfile* BlendProfile, uint8_t AlphaBlendOption, struct UCurveFloat* CustomBlendCurve); // Function AnimGraphRuntime.AnimationStateMachineLibrary.SetState
	bool IsStateBlendingOut(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut
	bool IsStateBlendingIn(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn
	struct FName GetState(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateMachineReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.GetState
	float GetRelevantAnimTimeRemainingFraction(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemainingFraction
	float GetRelevantAnimTimeRemaining(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemaining
	void ConvertToAnimationStateResultPure(struct FAnimNodeReference& Node, struct FAnimationStateResultReference& AnimationState, bool& Result); // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure
	void ConvertToAnimationStateResult(struct FAnimNodeReference& Node, struct FAnimationStateResultReference& AnimationState, uint8_t& Result); // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult
	void ConvertToAnimationStateMachinePure(struct FAnimNodeReference& Node, struct FAnimationStateMachineReference& AnimationState, bool& Result); // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachinePure
	void ConvertToAnimationStateMachine(struct FAnimNodeReference& Node, struct FAnimationStateMachineReference& AnimationState, uint8_t& Result); // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachine
}; 
 
 


// Class AnimGraphRuntime.SkeletalControlLibrary
// Size: 0x28(Inherited: 0x28)
struct USkeletalControlLibrary : UBlueprintFunctionLibrary
{


	struct FSkeletalControlReference SetAlpha(struct FSkeletalControlReference& SkeletalControl, float Alpha); // Function AnimGraphRuntime.SkeletalControlLibrary.SetAlpha
	float GetAlpha(struct FSkeletalControlReference& SkeletalControl); // Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha
	void ConvertToSkeletalControlPure(struct FAnimNodeReference& Node, struct FSkeletalControlReference& SkeletalControl, bool& Result); // Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure
	struct FSkeletalControlReference ConvertToSkeletalControl(struct FAnimNodeReference& Node, uint8_t& Result); // Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl
}; 
 
 


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// Size: 0x40(Inherited: 0x38)
struct UAnimNotify_PlayMontageNotify : UAnimNotify
{
	struct FName NotifyName;  // 0x38 (0x38)


}; 
 
 


// Class AnimGraphRuntime.AnimExecutionContextLibrary
// Size: 0x28(Inherited: 0x28)
struct UAnimExecutionContextLibrary : UBlueprintFunctionLibrary
{


	float GetDeltaTime(struct FAnimUpdateContext& Context); // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime
	float GetCurrentWeight(struct FAnimUpdateContext& Context); // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight
	struct FAnimNodeReference GetAnimNodeReference(struct UAnimInstance* Instance, int32_t Index); // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference
	struct UAnimInstance* GetAnimInstance(struct FAnimExecutionContext& Context); // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance
	struct FAnimUpdateContext ConvertToUpdateContext(struct FAnimExecutionContext& Context, uint8_t& Result); // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext
	struct FAnimPoseContext ConvertToPoseContext(struct FAnimExecutionContext& Context, uint8_t& Result); // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext
	struct FAnimInitializationContext ConvertToInitializationContext(struct FAnimExecutionContext& Context, uint8_t& Result); // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext
	struct FAnimComponentSpacePoseContext ConvertToComponentSpacePoseContext(struct FAnimExecutionContext& Context, uint8_t& Result); // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext
}; 
 
 


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// Size: 0x38(Inherited: 0x30)
struct UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState
{
	struct FName NotifyName;  // 0x30 (0x30)


}; 
 
 


// Class AnimGraphRuntime.AnimSequencerInstance
// Size: 0x350(Inherited: 0x350)
struct UAnimSequencerInstance : UAnimInstance
{


}; 
 
 


// Class AnimGraphRuntime.KismetAnimationLibrary
// Size: 0x28(Inherited: 0x28)
struct UKismetAnimationLibrary : UBlueprintFunctionLibrary
{


	void K2_TwoBoneIK(struct FVector& RootPos, struct FVector& JointPos, struct FVector& EndPos, struct FVector& JointTarget, struct FVector& Effector, struct FVector& OutJointPos, struct FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
	void K2_StartProfilingTimer(); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
	struct FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
	float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
	struct FTransform K2_LookAt(struct FTransform& CurrentTransform, struct FVector& TargetPosition, struct FVector LookAtVector, bool bUseUpVector, struct FVector UpVector, float ClampConeInDegree); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
	float K2_EndProfilingTimer(bool bLog, struct FString LogPrefix); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
	float K2_DistanceBetweenTwoSocketsAndMapRange(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameA, enum class ERelativeTransformSpace SocketSpaceA, struct FName SocketOrBoneNameB, enum class ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
	struct FVector K2_DirectionBetweenSockets(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameFrom, struct FName SocketOrBoneNameTo); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
	float K2_CalculateVelocityFromSockets(float DeltaSeconds, struct USkeletalMeshComponent* Component, struct FName SocketOrBoneName, struct FName ReferenceSocketOrBone, enum class ERelativeTransformSpace SocketSpace, struct FVector OffsetInBoneSpace, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, uint8_t EasingType, struct FRuntimeFloatCurve& CustomCurve); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
	float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, struct FVector Position, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
	float CalculateDirection(struct FVector& Velocity, struct FRotator& BaseRotation); // Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection
}; 
 
 


// Class AnimGraphRuntime.LinkedAnimGraphLibrary
// Size: 0x28(Inherited: 0x28)
struct ULinkedAnimGraphLibrary : UBlueprintFunctionLibrary
{


	bool HasLinkedAnimInstance(struct FLinkedAnimGraphReference& Node); // Function AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance
	struct UAnimInstance* GetLinkedAnimInstance(struct FLinkedAnimGraphReference& Node); // Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance
	void ConvertToLinkedAnimGraphPure(struct FAnimNodeReference& Node, struct FLinkedAnimGraphReference& LinkedAnimGraph, bool& Result); // Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure
	struct FLinkedAnimGraphReference ConvertToLinkedAnimGraph(struct FAnimNodeReference& Node, uint8_t& Result); // Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph
}; 
 
 


// Class AnimGraphRuntime.PlayMontageCallbackProxy
// Size: 0xA8(Inherited: 0x28)
struct UPlayMontageCallbackProxy : UObject
{
	struct FMulticastInlineDelegate OnCompleted;  // 0x28 (0x28)
	struct FMulticastInlineDelegate OnBlendOut;  // 0x38 (0x38)
	struct FMulticastInlineDelegate OnInterrupted;  // 0x48 (0x48)
	struct FMulticastInlineDelegate OnNotifyBegin;  // 0x58 (0x58)
	struct FMulticastInlineDelegate OnNotifyEnd;  // 0x68 (0x68)
	char pad_120[48];  // 0x78 (0x78)


	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
	void OnNotifyBeginReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
	struct UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(struct USkeletalMeshComponent* InSkeletalMeshComponent, struct UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection); // Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
}; 
 
 


// Class AnimGraphRuntime.SequenceEvaluatorLibrary
// Size: 0x28(Inherited: 0x28)
struct USequenceEvaluatorLibrary : UBlueprintFunctionLibrary
{


	struct FSequenceEvaluatorReference SetSequenceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FSequenceEvaluatorReference& SequenceEvaluator, struct UAnimSequenceBase* Sequence, float BlendTime); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending
	struct FSequenceEvaluatorReference SetSequence(struct FSequenceEvaluatorReference& SequenceEvaluator, struct UAnimSequenceBase* Sequence); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence
	struct FSequenceEvaluatorReference SetExplicitTime(struct FSequenceEvaluatorReference& SequenceEvaluator, float Time); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime
	struct UAnimSequenceBase* GetSequence(struct FSequenceEvaluatorReference& SequenceEvaluator); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence
	float GetAccumulatedTime(struct FSequenceEvaluatorReference& SequenceEvaluator); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime
	void ConvertToSequenceEvaluatorPure(struct FAnimNodeReference& Node, struct FSequenceEvaluatorReference& SequenceEvaluator, bool& Result); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure
	struct FSequenceEvaluatorReference ConvertToSequenceEvaluator(struct FAnimNodeReference& Node, uint8_t& Result); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator
	struct FSequenceEvaluatorReference AdvanceTime(struct FAnimUpdateContext& UpdateContext, struct FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime
}; 
 
 


// Class AnimGraphRuntime.SequencePlayerLibrary
// Size: 0x28(Inherited: 0x28)
struct USequencePlayerLibrary : UBlueprintFunctionLibrary
{


	struct FSequencePlayerReference SetStartPosition(struct FSequencePlayerReference& SequencePlayer, float StartPosition); // Function AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition
	struct FSequencePlayerReference SetSequenceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FSequencePlayerReference& SequencePlayer, struct UAnimSequenceBase* Sequence, float BlendTime); // Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending
	struct FSequencePlayerReference SetSequence(struct FSequencePlayerReference& SequencePlayer, struct UAnimSequenceBase* Sequence); // Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence
	struct FSequencePlayerReference SetPlayRate(struct FSequencePlayerReference& SequencePlayer, float PlayRate); // Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate
	struct FSequencePlayerReference SetAccumulatedTime(struct FSequencePlayerReference& SequencePlayer, float Time); // Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime
	float GetStartPosition(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition
	struct UAnimSequenceBase* GetSequencePure(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure
	struct FSequencePlayerReference GetSequence(struct FSequencePlayerReference& SequencePlayer, struct UAnimSequenceBase*& SequenceBase); // Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence
	float GetPlayRate(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate
	bool GetLoopAnimation(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation
	float GetAccumulatedTime(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime
	void ConvertToSequencePlayerPure(struct FAnimNodeReference& Node, struct FSequencePlayerReference& SequencePlayer, bool& Result); // Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure
	struct FSequencePlayerReference ConvertToSequencePlayer(struct FAnimNodeReference& Node, uint8_t& Result); // Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer
	float ComputePlayRateFromDuration(struct FSequencePlayerReference& SequencePlayer, float Duration); // Function AnimGraphRuntime.SequencePlayerLibrary.ComputePlayRateFromDuration
}; 
 
 


// Class AnimGraphRuntime.SequencerAnimationSupport
// Size: 0x28(Inherited: 0x28)
struct USequencerAnimationSupport : UInterface
{


}; 
 
 


