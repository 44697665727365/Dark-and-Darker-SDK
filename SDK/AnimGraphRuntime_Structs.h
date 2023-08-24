#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// Size: 0x78(Inherited: 0x70)
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer
{
	float NormalizedTime;  // 0x70 (0x70)
	char pad_116_1 : 7;  // 0x74 (0x74)
	bool bTeleportToNormalizedTime : 1;  // 0x74 (0x74)
	char pad_117[3];  // 0x75 (0x75)


}; 
 
 // Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
struct FK2_CalculateVelocityFromPositionHistory
{
	float DeltaSeconds;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector Position;  // 0x8 (0x8)
	struct FPositionHistory History;  // 0x20 (0x20)
	int32_t NumberOfSamples;  // 0x50 (0x50)
	float VelocityMin;  // 0x54 (0x54)
	float VelocityMax;  // 0x58 (0x58)
	float ReturnValue;  // 0x5C (0x5C)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size: 0xC8(Inherited: 0x10)
struct FAnimNode_SkeletalControlBase : FAnimNode_Base
{
	struct FComponentSpacePoseLink ComponentPose;  // 0x10 (0x10)
	int32_t LODThreshold;  // 0x20 (0x20)
	float ActualAlpha;  // 0x24 (0x24)
	uint8_t AlphaInputType;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool bAlphaBoolEnabled : 1;  // 0x29 (0x29)
	char pad_42[2];  // 0x2A (0x2A)
	float Alpha;  // 0x2C (0x2C)
	struct FInputScaleBias AlphaScaleBias;  // 0x30 (0x30)
	struct FInputAlphaBoolBlend AlphaBoolBlend;  // 0x38 (0x38)
	struct FName AlphaCurveName;  // 0x80 (0x80)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp;  // 0x88 (0x88)
	char pad_184[16];  // 0xB8 (0xB8)


}; 
 
 // ScriptStruct AnimGraphRuntime.LayeredBoneBlendReference
// Size: 0x10(Inherited: 0x10)
struct FLayeredBoneBlendReference : FAnimNodeReference
{


}; 
 
 // ScriptStruct AnimGraphRuntime.AngularRangeLimit
struct FAngularRangeLimit
{
	struct FVector LimitMin;  // 0x0 (0x0)
	struct FVector LimitMax;  // 0x18 (0x18)
	struct FBoneReference bone;  // 0x30 (0x30)


}; 
 
 // DelegateFunction AnimGraphRuntime.OnMontagePlayDelegate__DelegateSignature
struct FOnMontagePlayDelegate__DelegateSignature
{
	struct FName NotifyName;  // 0x0 (0x0)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// Size: 0x128(Inherited: 0xC8)
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify;  // 0xC8 (0xC8)
	struct FVector Translation;  // 0xD8 (0xD8)
	struct FRotator Rotation;  // 0xF0 (0xF0)
	struct FVector Scale;  // 0x108 (0x108)
	enum class EBoneModificationMode TranslationMode;  // 0x120 (0x120)
	enum class EBoneModificationMode RotationMode;  // 0x121 (0x121)
	enum class EBoneModificationMode ScaleMode;  // 0x122 (0x122)
	enum class EBoneControlSpace TranslationSpace;  // 0x123 (0x123)
	enum class EBoneControlSpace RotationSpace;  // 0x124 (0x124)
	enum class EBoneControlSpace ScaleSpace;  // 0x125 (0x125)
	char pad_294[2];  // 0x126 (0x126)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceGraphBase
// Size: 0x68(Inherited: 0x10)
struct FAnimNode_BlendSpaceGraphBase : FAnimNode_Base
{
	float X;  // 0x10 (0x10)
	float Y;  // 0x14 (0x14)
	struct FName GroupName;  // 0x18 (0x18)
	enum class EAnimGroupRole GroupRole;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct UBlendSpace* BlendSpace;  // 0x28 (0x28)
	struct TArray<struct FPoseLink> SamplePoseLinks;  // 0x30 (0x30)
	char pad_64[40];  // 0x40 (0x40)


}; 
 
 // Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure
struct FGetSequencePure
{
	struct FSequencePlayerReference SequencePlayer;  // 0x0 (0x0)
	struct UAnimSequenceBase* ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer_Standalone
// Size: 0x90(Inherited: 0x68)
struct FAnimNode_BlendSpacePlayer_Standalone : FAnimNode_BlendSpacePlayerBase
{
	struct FName GroupName;  // 0x68 (0x68)
	enum class EAnimGroupRole GroupRole;  // 0x70 (0x70)
	uint8_t Method;  // 0x71 (0x71)
	char pad_114_1 : 7;  // 0x72 (0x72)
	bool bIgnoreForRelevancyTest : 1;  // 0x72 (0x72)
	char pad_115[1];  // 0x73 (0x73)
	float X;  // 0x74 (0x74)
	float Y;  // 0x78 (0x78)
	float PlayRate;  // 0x7C (0x7C)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool bLoop : 1;  // 0x80 (0x80)
	char pad_129_1 : 7;  // 0x81 (0x81)
	bool bResetPlayTimeWhenBlendSpaceChanges : 1;  // 0x81 (0x81)
	char pad_130[2];  // 0x82 (0x82)
	float StartPosition;  // 0x84 (0x84)
	struct UBlendSpace* BlendSpace;  // 0x88 (0x88)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceGraph
// Size: 0x68(Inherited: 0x68)
struct FAnimNode_BlendSpaceGraph : FAnimNode_BlendSpaceGraphBase
{


}; 
 
 // ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
struct FReferenceBoneFrame
{
	struct FBoneReference bone;  // 0x0 (0x0)
	struct FAxis Axis;  // 0x10 (0x10)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// Size: 0x118(Inherited: 0x70)
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer
{
	struct FPoseLink BasePose;  // 0x70 (0x70)
	int32_t LODThreshold;  // 0x80 (0x80)
	float Alpha;  // 0x84 (0x84)
	struct FInputScaleBias AlphaScaleBias;  // 0x88 (0x88)
	struct FInputAlphaBoolBlend AlphaBoolBlend;  // 0x90 (0x90)
	struct FName AlphaCurveName;  // 0xD8 (0xD8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp;  // 0xE0 (0xE0)
	char pad_272[4];  // 0x110 (0x110)
	uint8_t AlphaInputType;  // 0x114 (0x114)
	char pad_277_1 : 7;  // 0x115 (0x115)
	bool bAlphaBoolEnabled : 1;  // 0x115 (0x115)
	char pad_278[2];  // 0x116 (0x116)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// Size: 0x520(Inherited: 0xC8)
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase
{
	float LinearDampingOverride;  // 0xC8 (0xC8)
	float AngularDampingOverride;  // 0xCC (0xCC)
	char pad_208[192];  // 0xD0 (0xD0)
	struct FBoneReference RelativeSpaceBone;  // 0x190 (0x190)
	struct FBoneReference BoundBone;  // 0x1A0 (0x1A0)
	struct FBoneReference ChainEnd;  // 0x1B0 (0x1B0)
	struct TArray<struct FAnimPhysBodyDefinition> PhysicsBodyDefinitions;  // 0x1C0 (0x1C0)
	float GravityScale;  // 0x1D0 (0x1D0)
	char pad_468[4];  // 0x1D4 (0x1D4)
	struct FVector GravityOverride;  // 0x1D8 (0x1D8)
	float LinearSpringConstant;  // 0x1F0 (0x1F0)
	float AngularSpringConstant;  // 0x1F4 (0x1F4)
	float WindScale;  // 0x1F8 (0x1F8)
	char pad_508[4];  // 0x1FC (0x1FC)
	struct FVector ComponentLinearAccScale;  // 0x200 (0x200)
	struct FVector ComponentLinearVelScale;  // 0x218 (0x218)
	struct FVector ComponentAppliedLinearAccClamp;  // 0x230 (0x230)
	float AngularBiasOverride;  // 0x248 (0x248)
	int32_t NumSolverIterationsPreUpdate;  // 0x24C (0x24C)
	int32_t NumSolverIterationsPostUpdate;  // 0x250 (0x250)
	char pad_596[4];  // 0x254 (0x254)
	struct TArray<struct FAnimPhysSphericalLimit> SphericalLimits;  // 0x258 (0x258)
	struct FVector ExternalForce;  // 0x268 (0x268)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits;  // 0x280 (0x280)
	uint8_t SimulationSpace;  // 0x290 (0x290)
	char pad_657[2];  // 0x291 (0x291)
	char bUseSphericalLimits : 1;  // 0x293 (0x293)
	char bUsePlanarLimit : 1;  // 0x293 (0x293)
	char bDoUpdate : 1;  // 0x293 (0x293)
	char bDoEval : 1;  // 0x293 (0x293)
	char bOverrideLinearDamping : 1;  // 0x293 (0x293)
	char bOverrideAngularBias : 1;  // 0x293 (0x293)
	char bOverrideAngularDamping : 1;  // 0x293 (0x293)
	char bEnableWind : 1;  // 0x293 (0x293)
	char pad_660_1 : 1;  // 0x294 (0x294)
	char bUseGravityOverride : 1;  // 0x294 (0x294)
	char bGravityOverrideInSimSpace : 1;  // 0x294 (0x294)
	char bLinearSpring : 1;  // 0x294 (0x294)
	char bAngularSpring : 1;  // 0x294 (0x294)
	char bChain : 1;  // 0x294 (0x294)
	char pad_660_2 : 2;  // 0x294 (0x294)
	char pad_661[12];  // 0x295 (0x295)
	struct FRotationRetargetingInfo RetargetingSettings;  // 0x2A0 (0x2A0)
	char pad_1088[224];  // 0x440 (0x440)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// Size: 0x10(Inherited: 0x10)
struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base
{


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_Sync
// Size: 0x30(Inherited: 0x10)
struct FAnimNode_Sync : FAnimNode_Base
{
	struct FPoseLink Source;  // 0x10 (0x10)
	struct FName GroupName;  // 0x20 (0x20)
	enum class EAnimGroupRole GroupRole;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceSampleResult
// Size: 0x20(Inherited: 0x20)
struct FAnimNode_BlendSpaceSampleResult : FAnimNode_Root
{


}; 
 
 // ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
struct FRotationRetargetingInfo
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnabled : 1;  // 0x0 (0x0)
	char pad_1[15];  // 0x1 (0x1)
	struct FTransform Source;  // 0x10 (0x10)
	struct FTransform Target;  // 0x70 (0x70)
	uint8_t RotationComponent;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	struct FVector TwistAxis;  // 0xD8 (0xD8)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool bUseAbsoluteAngle : 1;  // 0xF0 (0xF0)
	char pad_241[3];  // 0xF1 (0xF1)
	float SourceMinimum;  // 0xF4 (0xF4)
	float SourceMaximum;  // 0xF8 (0xF8)
	float TargetMinimum;  // 0xFC (0xFC)
	float TargetMaximum;  // 0x100 (0x100)
	uint8_t EasingType;  // 0x104 (0x104)
	char pad_261[3];  // 0x105 (0x105)
	struct FRuntimeFloatCurve CustomCurve;  // 0x108 (0x108)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool bFlipEasing : 1;  // 0x190 (0x190)
	char pad_401[3];  // 0x191 (0x191)
	float EasingWeight;  // 0x194 (0x194)
	char pad_408_1 : 7;  // 0x198 (0x198)
	bool bClamp : 1;  // 0x198 (0x198)
	char pad_409[7];  // 0x199 (0x199)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// Size: 0x10(Inherited: 0x10)
struct FAnimNode_RefPose : FAnimNode_Base
{


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// Size: 0x90(Inherited: 0x10)
struct FAnimNode_PoseSnapshot : FAnimNode_Base
{
	struct FName SnapshotName;  // 0x10 (0x10)
	struct FPoseSnapshot Snapshot;  // 0x18 (0x18)
	uint8_t Mode;  // 0x50 (0x50)
	char pad_81[63];  // 0x51 (0x51)


}; 
 
 // Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure
struct FConvertToSequenceEvaluatorPure
{
	struct FAnimNodeReference Node;  // 0x0 (0x0)
	struct FSequenceEvaluatorReference SequenceEvaluator;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Result : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// Size: 0xF0(Inherited: 0xC8)
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase
{
	struct FBoneReference TargetBone;  // 0xC8 (0xC8)
	struct FBoneReference SourceBone;  // 0xD8 (0xD8)
	float Multiplier;  // 0xE8 (0xE8)
	enum class EBoneAxis RotationAxisToRefer;  // 0xEC (0xEC)
	char pad_237_1 : 7;  // 0xED (0xED)
	bool bIsAdditive : 1;  // 0xED (0xED)
	char pad_238[2];  // 0xEE (0xEE)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// Size: 0x38(Inherited: 0x10)
struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base
{
	struct FPoseLink Base;  // 0x10 (0x10)
	struct FPoseLink Additive;  // 0x20 (0x20)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool bMeshSpaceAdditive : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// Size: 0x1D8(Inherited: 0x10)
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base
{
	struct TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent;  // 0x10 (0x10)
	char bUseAttachedParent : 1;  // 0x18 (0x18)
	char bCopyCurves : 1;  // 0x18 (0x18)
	char pad_24_1 : 6;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool bCopyCustomAttributes : 1;  // 0x19 (0x19)
	char bUseMeshPose : 1;  // 0x1A (0x1A)
	char pad_26_1 : 7;  // 0x1A (0x1A)
	char pad_27[2];  // 0x1B (0x1B)
	struct FName RootBoneToCopy;  // 0x1C (0x1C)
	char pad_36[436];  // 0x24 (0x24)


}; 
 
 // ScriptStruct AnimGraphRuntime.BlendSpacePlayerReference
// Size: 0x10(Inherited: 0x10)
struct FBlendSpacePlayerReference : FAnimNodeReference
{


}; 
 
 // ScriptStruct AnimGraphRuntime.PositionHistory
struct FPositionHistory
{
	struct TArray<struct FVector> Positions;  // 0x0 (0x0)
	float Range;  // 0x10 (0x10)
	char pad_20[28];  // 0x14 (0x14)


}; 
 
 // ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
struct FRandomPlayerSequenceEntry
{
	struct UAnimSequence* Sequence;  // 0x0 (0x0)
	float ChanceToPlay;  // 0x8 (0x8)
	int32_t MinLoopCount;  // 0xC (0xC)
	int32_t MaxLoopCount;  // 0x10 (0x10)
	float MinPlayRate;  // 0x14 (0x14)
	float MaxPlayRate;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FAlphaBlend BlendIn;  // 0x20 (0x20)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimationStateResultReference
// Size: 0x10(Inherited: 0x10)
struct FAnimationStateResultReference : FAnimNodeReference
{


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimationStateMachineReference
// Size: 0x10(Inherited: 0x10)
struct FAnimationStateMachineReference : FAnimNodeReference
{


}; 
 
 // ScriptStruct AnimGraphRuntime.PoseDriverTransform
struct FPoseDriverTransform
{
	struct FVector TargetTranslation;  // 0x0 (0x0)
	struct FRotator TargetRotation;  // 0x18 (0x18)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayerBase
// Size: 0x68(Inherited: 0x38)
struct FAnimNode_BlendSpacePlayerBase : FAnimNode_AssetPlayerBase
{
	char pad_56[40];  // 0x38 (0x38)
	struct UBlendSpace* PreviousBlendSpace;  // 0x60 (0x60)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// Size: 0x70(Inherited: 0x68)
struct FAnimNode_BlendSpacePlayer : FAnimNode_BlendSpacePlayerBase
{
	struct UBlendSpace* BlendSpace;  // 0x68 (0x68)


}; 
 
 // Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetLoop
struct FGetLoop
{
	struct FBlendSpacePlayerReference BlendSpacePlayer;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// Size: 0x1D0(Inherited: 0x70)
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer
{
	char pad_112[192];  // 0x70 (0x70)
	struct FPoseLink BasePose;  // 0x130 (0x130)
	int32_t LODThreshold;  // 0x140 (0x140)
	struct FName SourceSocketName;  // 0x144 (0x144)
	struct FName PivotSocketName;  // 0x14C (0x14C)
	char pad_340[4];  // 0x154 (0x154)
	struct FVector LookAtLocation;  // 0x158 (0x158)
	struct FVector SocketAxis;  // 0x170 (0x170)
	float Alpha;  // 0x188 (0x188)
	char pad_396[68];  // 0x18C (0x18C)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_Mirror
// Size: 0x48(Inherited: 0x48)
struct FAnimNode_Mirror : FAnimNode_MirrorBase
{


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// Size: 0xC8(Inherited: 0x10)
struct FAnimNode_ApplyAdditive : FAnimNode_Base
{
	struct FPoseLink Base;  // 0x10 (0x10)
	struct FPoseLink Additive;  // 0x20 (0x20)
	float Alpha;  // 0x30 (0x30)
	struct FInputScaleBias AlphaScaleBias;  // 0x34 (0x34)
	int32_t LODThreshold;  // 0x3C (0x3C)
	struct FInputAlphaBoolBlend AlphaBoolBlend;  // 0x40 (0x40)
	struct FName AlphaCurveName;  // 0x88 (0x88)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp;  // 0x90 (0x90)
	char pad_192[4];  // 0xC0 (0xC0)
	uint8_t AlphaInputType;  // 0xC4 (0xC4)
	char pad_197_1 : 7;  // 0xC5 (0xC5)
	bool bAlphaBoolEnabled : 1;  // 0xC5 (0xC5)
	char pad_198[2];  // 0xC6 (0xC6)


}; 
 
 // ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
struct FBlendBoneByChannelEntry
{
	struct FBoneReference SourceBone;  // 0x0 (0x0)
	struct FBoneReference TargetBone;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bBlendTranslation : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool bBlendRotation : 1;  // 0x21 (0x21)
	char pad_34_1 : 7;  // 0x22 (0x22)
	bool bBlendScale : 1;  // 0x22 (0x22)
	char pad_35[1];  // 0x23 (0x23)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimPhysBodyDefinition
struct FAnimPhysBodyDefinition
{
	struct FBoneReference BoundBone;  // 0x0 (0x0)
	struct FVector BoxExtents;  // 0x10 (0x10)
	struct FVector LocalJointOffset;  // 0x28 (0x28)
	struct FAnimPhysConstraintSetup ConstraintSetup;  // 0x40 (0x40)
	uint8_t CollisionType;  // 0xC8 (0xC8)
	char pad_201[3];  // 0xC9 (0xC9)
	float SphereCollisionRadius;  // 0xCC (0xCC)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// Size: 0x68(Inherited: 0x10)
struct FAnimNode_BlendBoneByChannel : FAnimNode_Base
{
	struct FPoseLink A;  // 0x10 (0x10)
	struct FPoseLink B;  // 0x20 (0x20)
	struct TArray<struct FBlendBoneByChannelEntry> BoneDefinitions;  // 0x30 (0x30)
	char pad_64[16];  // 0x40 (0x40)
	float Alpha;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)
	struct FInputScaleBias AlphaScaleBias;  // 0x58 (0x58)
	enum class EBoneControlSpace TransformsSpace;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_Mirror_Standalone
// Size: 0x60(Inherited: 0x48)
struct FAnimNode_Mirror_Standalone : FAnimNode_MirrorBase
{
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool bMirror : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	struct UMirrorDataTable* MirrorDataTable;  // 0x50 (0x50)
	float BlendTime;  // 0x58 (0x58)
	char pad_92_1 : 7;  // 0x5C (0x5C)
	bool bResetChild : 1;  // 0x5C (0x5C)
	char pad_93_1 : 7;  // 0x5D (0x5D)
	bool bBoneMirroring : 1;  // 0x5D (0x5D)
	char pad_94_1 : 7;  // 0x5E (0x5E)
	bool bCurveMirroring : 1;  // 0x5E (0x5E)
	char pad_95_1 : 7;  // 0x5F (0x5F)
	bool bAttributeMirroring : 1;  // 0x5F (0x5F)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// Size: 0x48(Inherited: 0x48)
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase
{


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// Size: 0x48(Inherited: 0x10)
struct FAnimNode_BlendListBase : FAnimNode_Base
{
	struct TArray<struct FPoseLink> BlendPose;  // 0x10 (0x10)
	char pad_32[40];  // 0x20 (0x20)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// Size: 0x48(Inherited: 0x48)
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase
{


}; 
 
 // ScriptStruct AnimGraphRuntime.RBFTarget
// Size: 0xA0(Inherited: 0x10)
struct FRBFTarget : FRBFEntry
{
	float ScaleFactor;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bApplyCustomCurve : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FRichCurve CustomCurve;  // 0x18 (0x18)
	uint8_t DistanceMethod;  // 0x98 (0x98)
	uint8_t FunctionType;  // 0x99 (0x99)
	char pad_154[6];  // 0x9A (0x9A)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// Size: 0x48(Inherited: 0x48)
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase
{


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_CallFunction
// Size: 0x38(Inherited: 0x10)
struct FAnimNode_CallFunction : FAnimNode_Base
{
	struct FPoseLink Source;  // 0x10 (0x10)
	char pad_32[20];  // 0x20 (0x20)
	uint8_t CallSite;  // 0x34 (0x34)


}; 
 
 // ScriptStruct AnimGraphRuntime.SequenceEvaluatorReference
// Size: 0x10(Inherited: 0x10)
struct FSequenceEvaluatorReference : FAnimNodeReference
{


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// Size: 0xE8(Inherited: 0xC8)
struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase
{
	struct TArray<struct FAngularRangeLimit> AngularRangeLimits;  // 0xC8 (0xC8)
	struct TArray<struct FVector> AngularOffsets;  // 0xD8 (0xD8)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// Size: 0x40(Inherited: 0x10)
struct FAnimNode_CurveSource : FAnimNode_Base
{
	struct FPoseLink SourcePose;  // 0x10 (0x10)
	struct FName SourceBinding;  // 0x20 (0x20)
	float Alpha;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct TScriptInterface<ICurveSourceInterface> CurveSource;  // 0x30 (0x30)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// Size: 0xE0(Inherited: 0x10)
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base
{
	struct FPoseLink BasePose;  // 0x10 (0x10)
	struct TArray<struct FPoseLink> BlendPoses;  // 0x20 (0x20)
	uint8_t BlendMode;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct TArray<struct UBlendProfile*> BlendMasks;  // 0x38 (0x38)
	struct TArray<struct FInputBlendPose> LayerSetup;  // 0x48 (0x48)
	struct TArray<float> BlendWeights;  // 0x58 (0x58)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool bMeshSpaceRotationBlend : 1;  // 0x68 (0x68)
	char pad_105_1 : 7;  // 0x69 (0x69)
	bool bMeshSpaceScaleBlend : 1;  // 0x69 (0x69)
	enum class ECurveBlendOption CurveBlendOption;  // 0x6A (0x6A)
	char pad_107_1 : 7;  // 0x6B (0x6B)
	bool bBlendRootMotionBasedOnRootBone : 1;  // 0x6B (0x6B)
	char pad_108[4];  // 0x6C (0x6C)
	int32_t LODThreshold;  // 0x70 (0x70)
	char pad_116[4];  // 0x74 (0x74)
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights;  // 0x78 (0x78)
	struct FGuid SkeletonGuid;  // 0x88 (0x88)
	struct FGuid VirtualBoneGuid;  // 0x98 (0x98)
	char pad_168[56];  // 0xA8 (0xA8)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_MirrorBase
// Size: 0x48(Inherited: 0x10)
struct FAnimNode_MirrorBase : FAnimNode_Base
{
	struct FPoseLink Source;  // 0x10 (0x10)
	char pad_32[40];  // 0x20 (0x20)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// Size: 0x100(Inherited: 0x10)
struct FAnimNode_ModifyCurve : FAnimNode_Base
{
	struct FPoseLink SourcePose;  // 0x10 (0x10)
	struct TMap<struct FName, float> CurveMap;  // 0x20 (0x20)
	struct TArray<float> CurveValues;  // 0x70 (0x70)
	struct TArray<struct FName> CurveNames;  // 0x80 (0x80)
	char pad_144[100];  // 0x90 (0x90)
	float Alpha;  // 0xF4 (0xF4)
	uint8_t ApplyMode;  // 0xF8 (0xF8)
	char pad_249[7];  // 0xF9 (0xF9)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
struct FAnimPhysPlanarLimit
{
	struct FBoneReference DrivingBone;  // 0x0 (0x0)
	struct FTransform PlaneTransform;  // 0x10 (0x10)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// Size: 0x50(Inherited: 0x10)
struct FAnimNode_MultiWayBlend : FAnimNode_Base
{
	struct TArray<struct FPoseLink> Poses;  // 0x10 (0x10)
	struct TArray<float> DesiredAlphas;  // 0x20 (0x20)
	char pad_48[16];  // 0x30 (0x30)
	struct FInputScaleBias AlphaScaleBias;  // 000034798] ted: 0x10)
 (000034798] Package Id_)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool bAdditiveNode : 1;  // 0x48 (0x48)
	char pad_73_1 : 7;  // 0x49 (0x49)
	bool bNormalizeAlpha : 1;  // 0x49 (0x49)
	char pad_74[6];  // 0x4A (0x4A)


}; 
 
 // Function AnimGraphRuntime.SequencePlayerLibrary.ComputePlayRateFromDuration
struct FComputePlayRateFromDuration
{
	struct FSequencePlayerReference SequencePlayer;  // 0x0 (0x0)
	float Duration;  // 0x10 (0x10)
	float ReturnValue;  // 0x14 (0x14)


}; 
 
 // ScriptStruct AnimGraphRuntime.SkeletalControlReference
// Size: 0x10(Inherited: 0x10)
struct FSkeletalControlReference : FAnimNodeReference
{


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// Size: 0xB0(Inherited: 0x90)
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler
{
	struct FPoseLink SourcePose;  // 0x90 (0x90)
	uint8_t BlendOption;  // [xA0 ([xA0)
	char pad_161[7];  // 0xA1 (0xA1)
	struct UCurveFloat* CustomCurve;  // 0xA8 (0xA8)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// Size: 0x90(Inherited: 0x38)
struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase
{
	struct UPoseAsset* PoseAsset;  // 0x38 (0x38)
	char pad_64[80];  // 0x40 (0x40)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// Size: 0xA8(Inherited: 0x90)
struct FAnimNode_PoseByName : FAnimNode_PoseHandler
{
	struct FName PoseName;  // 0x90 (0x90)
	float PoseWeight;  // 0x98 (0x98)
	char pad_156[12];  // 0x9C (0x9C)


}; 
 
 // ScriptStruct AnimGraphRuntime.PoseDriverTarget
struct FPoseDriverTarget
{
	struct TArray<struct FPoseDriverTransform> BoneTransforms;  // 0x0 (0x0)
	struct FRotator TargetRotation;  // 0x10 (0x10)
	float TargetScale;  // 0x28 (0x28)
	uint8_t DistanceMethod;  // 0x2C (0x2C)
	uint8_t FunctionType;  // 0x2D (0x2D)
	char pad_46_1 : 7;  // 0x2E (0x2E)
	bool bApplyCustomCurve : 1;  // 0x2E (0x2E)
	char pad_47[1];  // 0x2F (0x2F)
	struct FRichCurve CustomCurve;  // 0x30 (0x30)
	struct FName DrivenName;  // 0xB0 (0xB0)
	char pad_184[8];  // 0xB8 (0xB8)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool bIsHidden : 1;  // 0xC0 (0xC0)
	char pad_193[7];  // 0xC1 (0xC1)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// Size: 0x188(Inherited: 0x90)
struct FAnimNode_PoseDriver : FAnimNode_PoseHandler
{
	struct FPoseLink SourcePose;  // 0x90 (0x90)
	struct TArray<struct FBoneReference> SourceBones;  // 0xA0 (0xA0)
	struct TArray<struct FBoneReference> OnlyDriveBones;  // 0xB0 (0xB0)
	struct TArray<struct FPoseDriverTarget> PoseTargets;  // 0xC0 (0xC0)
	char pad_208[48];  // 0xD0 (0xD0)
	struct FBoneReference EvalSpaceBone;  // 0x100 (0x100)
	char pad_272_1 : 7;  // 0x110 (0x110)
	bool bEvalFromRefPose : 1;  // 0x110 (0x110)
	char pad_273[7];  // 0x111 (0x111)
	struct FRBFParams RBFParams;  // 0x118 (0x118)
	uint8_t DriveSource;  // 0x150 (0x150)
	uint8_t DriveOutput;  // 0x151 (0x151)
	char bOnlyDriveSelectedBones : 1;  // 0x152 (0x152)
	char pad_338_1 : 7;  // 0x152 (0x152)
	char pad_339[2];  // 0x153 (0x153)
	int32_t LODThreshold;  // 0x154 (0x154)
	char pad_344[48];  // 0x158 (0x158)


}; 
 
 // ScriptStruct AnimGraphRuntime.RBFParams
struct FRBFParams
{
	int32_t TargetDimensions;  // 0x0 (0x0)
	uint8_t SolverType;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	float Radius;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bAutomaticRadius : 1;  // 0xC (0xC)
	uint8_t Function;  // 0xD (0xD)
	uint8_t DistanceMethod;  // 0xE (0xE)
	enum class EBoneAxis TwistAxis;  // 0xF (0xF)
	float WeightThreshold;  // 0x10 (0x10)
	uint8_t NormalizeMethod;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	struct FVector MedianReference;  // 0x18 (0x18)
	float MedianMin;  // 0x30 (0x30)
	float MedianMax;  // 0x34 (0x34)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluatorBase
// Size: 0x40(Inherited: 0x38)
struct FAnimNode_SequenceEvaluatorBase : FAnimNode_AssetPlayerBase
{
	char pad_56[8];  // 0x38 (0x38)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// Size: 0x78(Inherited: 0x10)
struct FAnimNode_RandomPlayer : FAnimNode_AssetPlayerRelevancyBase
{
	struct TArray<struct FRandomPlayerSequenceEntry> Entries;  // 0x10 (0x10)
	char pad_32[80];  // 0x20 (0x20)
	float BlendWeight;  // 0x70 (0x70)
	char pad_116_1 : 7;  // 0x74 (0x74)
	bool bShuffleMode : 1;  // 0x74 (0x74)
	char pad_117[3];  // 0x75 (0x75)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// Size: 0xA8(Inherited: 0x10)
struct FAnimNode_RotateRootBone : FAnimNode_Base
{
	struct FPoseLink BasePose;  // 0x10 (0x10)
	float Pitch;  // 0x20 (0x20)
	float Yaw;  // 0x24 (0x24)
	struct FInputScaleBiasClamp PitchScaleBiasClamp;  // 0x28 (0x28)
	struct FInputScaleBiasClamp YawScaleBiasClamp;  // 0x58 (0x58)
	struct FRotator MeshToComponent;  // 0x88 (0x88)
	char pad_160[8];  // 0xA0 (0xA0)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpaceGraph
// Size: 0x110(Inherited: 0x68)
struct FAnimNode_RotationOffsetBlendSpaceGraph : FAnimNode_BlendSpaceGraphBase
{
	struct FPoseLink BasePose;  // 0x68 (0x68)
	int32_t LODThreshold;  // 0x78 (0x78)
	float Alpha;  // 0x7C (0x7C)
	struct FInputScaleBias AlphaScaleBias;  // 0x80 (0x80)
	struct FInputAlphaBoolBlend AlphaBoolBlend;  // 0x88 (0x88)
	struct FName AlphaCurveName;  // 0xD0 (0xD0)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp;  // 0xD8 (0xD8)
	char pad_264[4];  // 0x108 (0x108)
	uint8_t AlphaInputType;  // 0x10C (0x10C)
	char pad_269_1 : 7;  // 0x10D (0x10D)
	bool bAlphaBoolEnabled : 1;  // 0x10D (0x10D)
	char pad_270[2];  // 0x10E (0x10E)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator_Standalone
// Size: 0x68(Inherited: 0x40)
struct FAnimNode_SequenceEvaluator_Standalone : FAnimNode_SequenceEvaluatorBase
{
	struct FName GroupName;  // 0x40 (0x40)
	enum class EAnimGroupRole GroupRole;  // 0x48 (0x48)
	uint8_t Method;  // 0x49 (0x49)
	char pad_74_1 : 7;  // 0x4A (0x4A)
	bool bIgnoreForRelevancyTest : 1;  // 0x4A (0x4A)
	char pad_75[5];  // 0x4B (0x4B)
	struct UAnimSequenceBase* Sequence;  // 0x50 (0x50)
	float ExplicitTime;  // 0x58 (0x58)
	char pad_92_1 : 7;  // 0x5C (0x5C)
	bool bShouldLoop : 1;  // 0x5C (0x5C)
	char pad_93_1 : 7;  // 0x5D (0x5D)
	bool bTeleportToExplicitTime : 1;  // 0x5D (0x5D)
	enum class ESequenceEvalReinit ReinitializationBehavior;  // 0x5E (0x5E)
	char pad_95[1];  // 0x5F (0x5F)
	float StartPosition;  // 0x60 (0x60)
	char pad_100[4];  // 0x64 (0x64)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// Size: 0x40(Inherited: 0x40)
struct FAnimNode_SequenceEvaluator : FAnimNode_SequenceEvaluatorBase
{


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// Size: 0xC80(Inherited: 0x880)
struct FAnimSequencerInstanceProxy : FAnimInstanceProxy
{
	char pad_2176[1024];  // 0x880 (0x880)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_Slot
// Size: 0x48(Inherited: 0x10)
struct FAnimNode_Slot : FAnimNode_Base
{
	struct FPoseLink Source;  // 0x10 (0x10)
	struct FName SlotName;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bAlwaysUpdateSourcePose : 1;  // 0x28 (0x28)
	char pad_41[31];  // 0x29 (0x29)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// Size: 0xC8(Inherited: 0x10)
struct FAnimNode_TwoWayBlend : FAnimNode_Base
{
	struct FPoseLink A;  // 0x10 (0x10)
	struct FPoseLink B;  // 0x20 (0x20)
	uint8_t AlphaInputType;  // 0x30 (0x30)
	char bAlphaBoolEnabled : 1;  // 0x31 (0x31)
	char pad_49_1 : 2;  // 0x31 (0x31)
	char bResetChildOnActivation : 1;  // 0x31 (0x31)
	char pad_49_2 : 4;  // 0x31 (0x31)
	char pad_50[3];  // 0x32 (0x32)
	float Alpha;  // 0x34 (0x34)
	struct FInputScaleBias AlphaScaleBias;  // 0x38 (0x38)
	struct FInputAlphaBoolBlend AlphaBoolBlend;  // 0x40 (0x40)
	struct FName AlphaCurveName;  // 0x88 (0x88)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp;  // 0x90 (0x90)
	char pad_192[8];  // 0xC0 (0xC0)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
struct FAnimPhysConstraintSetup
{
	uint8_t LinearXLimitType;  // 0x0 (0x0)
	uint8_t LinearYLimitType;  // 0x1 (0x1)
	uint8_t LinearZLimitType;  // 0x2 (0x2)
	char pad_3[5];  // 0x3 (0x3)
	struct FVector LinearAxesMin;  // 0x8 (0x8)
	struct FVector LinearAxesMax;  // 0x20 (0x20)
	uint8_t AngularConstraintType;  // 0x38 (0x38)
	uint8_t TwistAxis;  // 0x39 (0x39)
	uint8_t AngularTargetAxis;  // 0x3A (0x3A)
	char pad_59[1];  // 0x3B (0x3B)
	float ConeAngle;  // 0x3C (0x3C)
	struct FVector AngularLimitsMin;  // 0x40 (0x40)
	struct FVector AngularLimitsMax;  // 0x58 (0x58)
	struct FVector AngularTarget;  // 0x70 (0x70)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
struct FAnimPhysSphericalLimit
{
	struct FBoneReference DrivingBone;  // 0x0 (0x0)
	struct FVector SphereLocalOffset;  // 0x10 (0x10)
	float LimitRadius;  // 0x28 (0x28)
	uint8_t LimitType;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)


}; 
 
 // Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence
struct FSetSequence
{
	struct FSequencePlayerReference SequencePlayer;  // 0x0 (0x0)
	struct UAnimSequenceBase* Sequence;  // 0x10 (0x10)
	struct FSequencePlayerReference ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// Size: 0x118(Inherited: 0xC8)
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase
{
	struct FBoneReference SourceBone;  // 0xC8 (0xC8)
	struct UCurveFloat* DrivingCurve;  // 0xD8 (0xD8)
	float Multiplier;  // 0xE0 (0xE0)
	float RangeMin;  // 0xE4 (0xE4)
	float RangeMax;  // 0xE8 (0xE8)
	float RemappedMin;  // 0xEC (0xEC)
	float RemappedMax;  // 0xF0 (0xF0)
	struct FName ParameterName;  // 0xF4 (0xF4)
	struct FBoneReference TargetBone;  // 0xFC (0xFC)
	uint8_t DestinationMode;  // 0x10C (0x10C)
	uint8_t ModificationMode;  // 0x10D (0x10D)
	enum class EComponentType SourceComponent;  // 0x10E (0x10E)
	char bUseRange : 1;  // 0x10F (0x10F)
	char bAffectTargetTranslationX : 1;  // 0x10F (0x10F)
	char bAffectTargetTranslationY : 1;  // 0x10F (0x10F)
	char bAffectTargetTranslationZ : 1;  // 0x10F (0x10F)
	char bAffectTargetRotationX : 1;  // 0x10F (0x10F)
	char bAffectTargetRotationY : 1;  // 0x10F (0x10F)
	char bAffectTargetRotationZ : 1;  // 0x10F (0x10F)
	char bAffectTargetScaleX : 1;  // 0x10F (0x10F)
	char bAffectTargetScaleY : 1;  // 0x110 (0x110)
	char bAffectTargetScaleZ : 1;  // 0x110 (0x110)
	char pad_272_1 : 6;  // 0x110 (0x110)
	char pad_273[8];  // 0x111 (0x111)


}; 
 
 // Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime
struct FSetExplicitTime
{
	struct FSequenceEvaluatorReference SequenceEvaluator;  // 0x0 (0x0)
	float Time;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FSequenceEvaluatorReference ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// Size: 0x1C0(Inherited: 0xC8)
struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase
{
	struct FVector EffectorLocation;  // 0xC8 (0xC8)
	enum class EBoneControlSpace EffectorLocationSpace;  // 0xE0 (0xE0)
	char pad_225[15];  // 0xE1 (0xE1)
	struct FBoneSocketTarget EffectorTarget;  // 0xF0 (0xF0)
	struct FBoneReference TipBone;  // 0x180 (0x180)
	struct FBoneReference RootBone;  // 0x190 (0x190)
	float Precision;  // 0x1A0 (0x1A0)
	int32_t MaxIterations;  // 0x1A4 (0x1A4)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool bStartFromTail : 1;  // 0x1A8 (0x1A8)
	char pad_425_1 : 7;  // 0x1A9 (0x1A9)
	bool bEnableRotationLimit : 1;  // 0x1A9 (0x1A9)
	char pad_426[6];  // 0x1AA (0x1AA)
	struct TArray<float> RotationLimitPerJoints;  // 0x1B0 (0x1B0)


}; 
 
 // ScriptStruct AnimGraphRuntime.Constraint
struct FConstraint
{
	struct FBoneReference TargetBone;  // 0x0 (0x0)
	uint8_t OffsetOption;  // 0x10 (0x10)
	uint8_t TransformType;  // 0x11 (0x11)
	struct FFilterOptionPerAxis PerAxis;  // 0x12 (0x12)
	char pad_21[7];  // 0x15 (0x15)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// Size: 0x108(Inherited: 0xC8)
struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify;  // 0xC8 (0xC8)
	struct TArray<struct FConstraint> ConstraintSetup;  // 0xD8 (0xD8)
	struct TArray<float> ConstraintWeights;  // 0xE8 (0xE8)
	char pad_248[16];  // 0xF8 (0xF8)


}; 
 
 // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
struct FOnNotifyEndReceived
{
	struct FName NotifyName;  // 0x0 (0x0)
	struct FBranchingPointNotifyPayload BranchingPointNotifyPayload;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// Size: 0x88(Inherited: 0x10)
struct FAnimNode_ScaleChainLength : FAnimNode_Base
{
	struct FPoseLink InputPose;  // 0x10 (0x10)
	float DefaultChainLength;  // 0x20 (0x20)
	struct FBoneReference ChainStartBone;  // 0x24 (0x24)
	struct FBoneReference ChainEndBone;  // 0x34 (0x34)
	char pad_68[4];  // 0x44 (0x44)
	struct FVector TargetLocation;  // 0x48 (0x48)
	float Alpha;  // 0x60 (0x60)
	char pad_100[4];  // 0x64 (0x64)
	struct FInputScaleBias AlphaScaleBias;  // 0x68 (0x68)
	uint8_t ChainInitialLength;  // 0x70 (0x70)
	char pad_113[23];  // 0x71 (0x71)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// Size: 0xF0(Inherited: 0xC8)
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase
{
	struct FBoneReference SourceBone;  // 0xC8 (0xC8)
	struct FBoneReference TargetBone;  // 0xD8 (0xD8)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool bCopyTranslation : 1;  // 0xE8 (0xE8)
	char pad_233_1 : 7;  // 0xE9 (0xE9)
	bool bCopyRotation : 1;  // 0xE9 (0xE9)
	char pad_234_1 : 7;  // 0xEA (0xEA)
	bool bCopyScale : 1;  // 0xEA (0xEA)
	enum class EBoneControlSpace ControlSpace;  // 0xEB (0xEB)
	char pad_236[4];  // 0xEC (0xEC)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// Size: 0xF8(Inherited: 0xC8)
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase
{
	struct FBoneReference SourceBone;  // 0xC8 (0xC8)
	struct FBoneReference TargetBone;  // 0xD8 (0xD8)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool bCopyTranslation : 1;  // 0xE8 (0xE8)
	char pad_233_1 : 7;  // 0xE9 (0xE9)
	bool bCopyRotation : 1;  // 0xE9 (0xE9)
	char pad_234_1 : 7;  // 0xEA (0xEA)
	bool bCopyScale : 1;  // 0xEA (0xEA)
	uint8_t CopyMode;  // 0xEB (0xEB)
	float TranslationMultiplier;  // 0xEC (0xEC)
	float RotationMultiplier;  // 0xF0 (0xF0)
	float ScaleMultiplier;  // 0xF4 (0xF4)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// Size: 0x1F0(Inherited: 0xC8)
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase
{
	char pad_200[8];  // 0xC8 (0xC8)
	struct FTransform EffectorTransform;  // 0xD0 (0xD0)
	struct FBoneSocketTarget EffectorTarget;  // 0x130 (0x130)
	struct FBoneReference TipBone;  // 0x1C0 (0x1C0)
	struct FBoneReference RootBone;  // 0x1D0 (0x1D0)
	float Precision;  // 0x1E0 (0x1E0)
	int32_t MaxIterations;  // 0x1E4 (0x1E4)
	enum class EBoneControlSpace EffectorTransformSpace;  // 0x1E8 (0x1E8)
	enum class EBoneRotationSource EffectorRotationSource;  // 0x1E9 (0x1E9)
	char pad_490[6];  // 0x1EA (0x1EA)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// Size: 0x120(Inherited: 0xC8)
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase
{
	struct FBoneReference RightHandFK;  // 0xC8 (0xC8)
	struct FBoneReference LeftHandFK;  // 0xD8 (0xD8)
	struct FBoneReference RightHandIK;  // 0xE8 (0xE8)
	struct FBoneReference LeftHandIK;  // 0xF8 (0xF8)
	struct TArray<struct FBoneReference> IKBonesToMove;  // 0x108 (0x108)
	float HandFKWeight;  // 0x118 (0x118)
	char pad_284[4];  // 0x11C (0x11C)


}; 
 
 // ScriptStruct AnimGraphRuntime.IKChainLink
struct FIKChainLink
{
	char pad_0[112];  // 0x0 (0x0)


}; 
 
 // ScriptStruct AnimGraphRuntime.IKChain
struct FIKChain
{
	char pad_0[72];  // 0x0 (0x0)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
struct FAnimLegIKDefinition
{
	struct FBoneReference IKFootBone;  // 0x0 (0x0)
	struct FBoneReference FKFootBone;  // 0x10 (0x10)
	int32_t NumBonesInLimb;  // 0x20 (0x20)
	float MinRotationAngle;  // 0x24 (0x24)
	enum class EAxis FootBoneForwardAxis;  // 0x28 (0x28)
	enum class EAxis HingeRotationAxis;  // 0x29 (0x29)
	char pad_42_1 : 7;  // 0x2A (0x2A)
	bool bEnableRotationLimit : 1;  // 0x2A (0x2A)
	char pad_43_1 : 7;  // 0x2B (0x2B)
	bool bEnableKneeTwistCorrection : 1;  // 0x2B (0x2B)


}; 
 
 // ScriptStruct AnimGraphRuntime.SequencePlayerReference
// Size: 0x10(Inherited: 0x10)
struct FSequencePlayerReference : FAnimNodeReference
{


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimLegIKData
struct FAnimLegIKData
{
	char pad_0[224];  // 0x0 (0x0)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// Size: 0xF8(Inherited: 0xC8)
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase
{
	float ReachPrecision;  // 0xC8 (0xC8)
	int32_t MaxIterations;  // 0xCC (0xCC)
	struct TArray<struct FAnimLegIKDefinition> LegsDefinition;  // 0xD0 (0xD0)
	char pad_224[24];  // 0xE0 (0xE0)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// Size: 0x250(Inherited: 0xC8)
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify;  // 0xC8 (0xC8)
	char pad_216[8];  // 0xD8 (0xD8)
	struct FBoneSocketTarget LookAtTarget;  // 0xE0 (0xE0)
	struct FVector LookAtLocation;  // 0x170 (0x170)
	struct FAxis LookAt_Axis;  // 0x188 (0x188)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool bUseLookUpAxis : 1;  // 0x1A8 (0x1A8)
	enum class EInterpolationBlend InterpolationType;  // 0x1A9 (0x1A9)
	char pad_426[6];  // 0x1AA (0x1AA)
	struct FAxis LookUp_Axis;  // 0x1B0 (0x1B0)
	float LookAtClamp;  // 0x1D0 (0x1D0)
	float InterpolationTime;  // 0x1D4 (0x1D4)
	float InterpolationTriggerThreashold;  // 0x1D8 (0x1D8)
	char pad_476[116];  // 0x1DC (0x1DC)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// Size: 0x128(Inherited: 0xC8)
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToObserve;  // 0xC8 (0xC8)
	enum class EBoneControlSpace DisplaySpace;  // 0xD8 (0xD8)
	char pad_217_1 : 7;  // 0xD9 (0xD9)
	bool bRelativeToRefPose : 1;  // 0xD9 (0xD9)
	char pad_218[6];  // 0xDA (0xDA)
	struct FVector Translation;  // 0xE0 (0xE0)
	struct FRotator Rotation;  // 0xF8 (0xF8)
	struct FVector Scale;  // 0x110 (0x110)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// Size: 0xD8(Inherited: 0xC8)
struct FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase
{
	char pad_200[16];  // 0xC8 (0xC8)


}; 
 
 // ScriptStruct AnimGraphRuntime.SimSpaceSettings
struct FSimSpaceSettings
{
	float WorldAlpha;  // 0x0 (0x0)
	float VelocityScaleZ;  // 0x4 (0x4)
	float MaxLinearVelocity;  // 0x8 (0x8)
	float MaxAngularVelocity;  // 0xC (0xC)
	float MaxLinearAcceleration;  // 0x10 (0x10)
	float MaxAngularAcceleration;  // 0x14 (0x14)
	float ExternalLinearDrag;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct FVector ExternalLinearDragV;  // 0x20 (0x20)
	struct FVector ExternalLinearVelocity;  // 0x38 (0x38)
	struct FVector ExternalAngularVelocity;  // 0x50 (0x50)


}; 
 
 // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference
struct FGetAnimNodeReference
{
	struct UAnimInstance* Instance;  // 0x0 (0x0)
	int32_t Index;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FAnimNodeReference ReturnValue;  // 0x10 (0x10)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// Size: 0x9A0(Inherited: 0xC8)
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase
{
	struct UPhysicsAsset* OverridePhysicsAsset;  // 0xC8 (0xC8)
	char pad_208[296];  // 0xD0 (0xD0)
	struct FVector OverrideWorldGravity;  // 0x1F8 (0x1F8)
	struct FVector ExternalForce;  // 0x210 (0x210)
	struct FVector ComponentLinearAccScale;  // 0x228 (0x228)
	struct FVector ComponentLinearVelScale;  // 0x240 (0x240)
	struct FVector ComponentAppliedLinearAccClamp;  // 0x258 (0x258)
	struct FSimSpaceSettings SimSpaceSettings;  // 0x270 (0x270)
	float CachedBoundsScale;  // 0x2D8 (0x2D8)
	struct FBoneReference BaseBoneRef;  // 0x2DC (0x2DC)
	enum class ECollisionChannel OverlapChannel;  // 0x2EC (0x2EC)
	uint8_t SimulationSpace;  // 0x2ED (0x2ED)
	char pad_750_1 : 7;  // 0x2EE (0x2EE)
	bool bForceDisableCollisionBetweenConstraintBodies : 1;  // 0x2EE (0x2EE)
	char pad_751_1 : 7;  // 0x2EF (0x2EF)
	bool bUseExternalClothCollision : 1;  // 0x2EF (0x2EF)
	char pad_752[1];  // 0x2F0 (0x2F0)
	char bEnableWorldGeometry : 1;  // 0x2F1 (0x2F1)
	char bOverrideWorldGravity : 1;  // 0x2F1 (0x2F1)
	char bTransferBoneVelocities : 1;  // 0x2F1 (0x2F1)
	char bFreezeIncomingPoseOnStart : 1;  // 0x2F1 (0x2F1)
	char bClampLinearTranslationLimitToRefPose : 1;  // 0x2F1 (0x2F1)
	char pad_753_1 : 3;  // 0x2F1 (0x2F1)
	char pad_754[3];  // 0x2F2 (0x2F2)
	float WorldSpaceMinimumScale;  // 0x2F4 (0x2F4)
	float EvaluationResetTime;  // 0x2F8 (0x2F8)
	char pad_764[1];  // 0x2FC (0x2FC)
	uint8_t SimulationTiming;  // 0x2FD (0x2FD)
	char pad_766[1698];  // 0x2FE (0x2FE)


}; 
 
 // ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
struct FSplineIKCachedBoneData
{
	struct FBoneReference bone;  // 0x0 (0x0)
	int32_t RefSkeletonIndex;  // 0x10 (0x10)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// Size: 0x270(Inherited: 0xC8)
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase
{
	struct FBoneReference StartBone;  // 0xC8 (0xC8)
	struct FBoneReference EndBone;  // 0xD8 (0xD8)
	uint8_t BoneAxis;  // 0xE8 (0xE8)
	char pad_233_1 : 7;  // 0xE9 (0xE9)
	bool bAutoCalculateSpline : 1;  // 0xE9 (0xE9)
	char pad_234[2];  // 0xEA (0xEA)
	int32_t PointCount;  // 0xEC (0xEC)
	struct TArray<struct FTransform> ControlPoints;  // 0xF0 (0xF0)
	float Roll;  // 0x100 (0x100)
	float TwistStart;  // 0x104 (0x104)
	float TwistEnd;  // 0x108 (0x108)
	char pad_268[4];  // 0x10C (0x10C)
	struct FAlphaBlend TwistBlend;  // 0x110 (0x110)
	float Stretch;  // 0x140 (0x140)
	float Offset;  // 0x144 (0x144)
	char pad_328[296];  // 0x148 (0x148)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// Size: 0x158(Inherited: 0xC8)
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase
{
	struct FBoneReference SpringBone;  // 0xC8 (0xC8)
	float MaxDisplacement;  // 0xD8 (0xD8)
	float SpringStiffness;  // 0xDC (0xDC)
	float SpringDamping;  // 0xE0 (0xE0)
	float ErrorResetThresh;  // 0xE4 (0xE4)
	char pad_232[108];  // 0xE8 (0xE8)
	char bLimitDisplacement : 1;  // 0x154 (0x154)
	char bTranslateX : 1;  // 0x154 (0x154)
	char bTranslateY : 1;  // 0x154 (0x154)
	char bTranslateZ : 1;  // 0x154 (0x154)
	char bRotateX : 1;  // 0x154 (0x154)
	char bRotateY : 1;  // 0x154 (0x154)
	char bRotateZ : 1;  // 0x154 (0x154)
	char pad_340_1 : 1;  // 0x154 (0x154)
	char pad_341[4];  // 0x155 (0x155)


}; 
 
 // ScriptStruct AnimGraphRuntime.RotationLimit
struct FRotationLimit
{
	struct FVector LimitMin;  // 0x0 (0x0)
	struct FVector LimitMax;  // 0x18 (0x18)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_Trail
// Size: 0x2A0(Inherited: 0xC8)
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase
{
	char pad_200[104];  // 0xC8 (0xC8)
	struct FBoneReference TrailBone;  // 0x130 (0x130)
	int32_t ChainLength;  // 0x140 (0x140)
	enum class EAxis ChainBoneAxis;  // 0x144 (0x144)
	char bInvertChainBoneAxis : 1;  // 0x145 (0x145)
	char bLimitStretch : 1;  // 0x145 (0x145)
	char bLimitRotation : 1;  // 0x145 (0x145)
	char bUsePlanarLimit : 1;  // 0x145 (0x145)
	char bActorSpaceFakeVel : 1;  // 0x145 (0x145)
	char bReorientParentToChild : 1;  // 0x145 (0x145)
	char pad_325_1 : 2;  // 0x145 (0x145)
	char pad_326[3];  // 0x146 (0x146)
	float MaxDeltaTime;  // 0x148 (0x148)
	float RelaxationSpeedScale;  // 0x14C (0x14C)
	struct FRuntimeFloatCurve TrailRelaxationSpeed;  // 0x150 (0x150)
	struct FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor;  // 0x1D8 (0x1D8)
	struct TArray<struct FRotationLimit> RotationLimits;  // 0x208 (0x208)
	struct TArray<struct FVector> RotationOffsets;  // 0x218 (0x218)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits;  // 0x228 (0x228)
	float StretchLimit;  // 0x238 (0x238)
	char pad_572[4];  // 0x23C (0x23C)
	struct FVector FakeVelocity;  // 0x240 (0x240)
	struct FBoneReference BaseJoint;  // 0x258 (0x258)
	float LastBoneRotationAnimAlphaBlend;  // 0x268 (0x268)
	char pad_620[52];  // 0x26C (0x26C)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// Size: 0x168(Inherited: 0xC8)
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase
{
	struct FReferenceBoneFrame BaseFrame;  // 0xC8 (0xC8)
	struct FReferenceBoneFrame TwistFrame;  // 0xF8 (0xF8)
	struct FAxis TwistPlaneNormalAxis;  // 0x128 (0x128)
	float RangeMax;  // 0x148 (0x148)
	float RemappedMin;  // 0x14C (0x14C)
	float RemappedMax;  // 0x150 (0x150)
	struct FAnimCurveParam Curve;  // 0x154 (0x154)
	char pad_352[8];  // 0x160 (0x160)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// Size: 0x270(Inherited: 0xC8)
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase
{
	struct FBoneReference IKBone;  // 0xC8 (0xC8)
	float StartStretchRatio;  // 0xD8 (0xD8)
	float MaxStretchScale;  // 0xDC (0xDC)
	struct FVector EffectorLocation;  // 0xE0 (0xE0)
	char pad_248[8];  // 0xF8 (0xF8)
	struct FBoneSocketTarget EffectorTarget;  // 0x100 (0x100)
	struct FVector JointTargetLocation;  // 0x190 (0x190)
	char pad_424[8];  // 0x1A8 (0x1A8)
	struct FBoneSocketTarget JointTarget;  // 0x1B0 (0x1B0)
	struct FAxis TwistAxis;  // 0x240 (0x240)
	enum class EBoneControlSpace EffectorLocationSpace;  // 0x260 (0x260)
	enum class EBoneControlSpace JointTargetLocationSpace;  // 0x261 (0x261)
	char bAllowStretching : 1;  // 0x262 (0x262)
	char bTakeRotationFromEffectorSpace : 1;  // 0x262 (0x262)
	char bMaintainEffectorRelRot : 1;  // 0x262 (0x262)
	char bAllowTwist : 1;  // 0x262 (0x262)
	char pad_610_1 : 4;  // 0x262 (0x262)
	char pad_611[14];  // 0x263 (0x263)


}; 
 
 // ScriptStruct AnimGraphRuntime.IKFootPelvisPullDownSolver
struct FIKFootPelvisPullDownSolver
{
	struct FVectorRK4SpringInterpolator PelvisAdjustmentInterp;  // 0x0 (0x0)
	char pad_8[88];  // 0x8 (0x8)
	float PelvisAdjustmentInterpAlpha;  // 0x60 (0x60)
	float PelvisAdjustmentMaxDistance;  // 0x64 (0x64)
	float PelvisAdjustmentErrorTolerance;  // 0x68 (0x68)
	int32_t PelvisAdjustmentMaxIter;  // 0x6C (0x6C)


}; 
 
 // ScriptStruct AnimGraphRuntime.WarpingVectorValue
struct FWarpingVectorValue
{
	uint8_t Mode;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector Value;  // 0x8 (0x8)


}; 
 
 // ScriptStruct AnimGraphRuntime.LinkedAnimGraphReference
// Size: 0x10(Inherited: 0x10)
struct FLinkedAnimGraphReference : FAnimNodeReference
{


}; 
 
 // ScriptStruct AnimGraphRuntime.RBFEntry
struct FRBFEntry
{
	struct TArray<float> Values;  // 0x0 (0x0)


}; 
 
 // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext
struct FConvertToPoseContext
{
	struct FAnimExecutionContext Context;  // 0x0 (0x0)
	uint8_t Result;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FAnimPoseContext ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// Size: 0x20(Inherited: 0x20)
struct FAnimNode_StateResult : FAnimNode_Root
{


}; 
 
 // Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayer
struct FConvertToBlendSpacePlayer
{
	struct FAnimNodeReference Node;  // 0x0 (0x0)
	uint8_t Result;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FBlendSpacePlayerReference ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayerPure
struct FConvertToBlendSpacePlayerPure
{
	struct FAnimNodeReference Node;  // 0x0 (0x0)
	struct FBlendSpacePlayerReference BlendSpacePlayer;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Result : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetBlendSpace
struct FGetBlendSpace
{
	struct FBlendSpacePlayerReference BlendSpacePlayer;  // 0x0 (0x0)
	struct UBlendSpace* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate
struct FGetPlayRate
{
	struct FSequencePlayerReference SequencePlayer;  // 0x0 (0x0)
	float ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPosition
struct FGetPosition
{
	struct FBlendSpacePlayerReference BlendSpacePlayer;  // 0x0 (0x0)
	struct FVector ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition
struct FGetStartPosition
{
	struct FSequencePlayerReference SequencePlayer;  // 0x0 (0x0)
	float ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpace
struct FSetBlendSpace
{
	struct FBlendSpacePlayerReference BlendSpacePlayer;  // 0x0 (0x0)
	struct UBlendSpace* BlendSpace;  // 0x10 (0x10)
	struct FBlendSpacePlayerReference ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpaceWithInertialBlending
struct FSetBlendSpaceWithInertialBlending
{
	struct FAnimUpdateContext UpdateContext;  // 0x0 (0x0)
	struct FBlendSpacePlayerReference BlendSpacePlayer;  // 0x10 (0x10)
	struct UBlendSpace* BlendSpace;  // 0x20 (0x20)
	float BlendTime;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct FBlendSpacePlayerReference ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetLoop
struct FSetLoop
{
	struct FBlendSpacePlayerReference BlendSpacePlayer;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bLoop : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FBlendSpacePlayerReference ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate
struct FSetPlayRate
{
	struct FSequencePlayerReference SequencePlayer;  // 0x0 (0x0)
	float PlayRate;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FSequencePlayerReference ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetResetPlayTimeWhenBlendSpaceChanges
struct FSetResetPlayTimeWhenBlendSpaceChanges
{
	struct FBlendSpacePlayerReference BlendSpacePlayer;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool bReset : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FBlendSpacePlayerReference ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AnimGraphRuntime.BlendSpacePlayerLibrary.ShouldResetPlayTimeWhenBlendSpaceChanges
struct FShouldResetPlayTimeWhenBlendSpaceChanges
{
	struct FBlendSpacePlayerReference BlendSpacePlayer;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBlendPerBonePure
struct FConvertToLayeredBlendPerBonePure
{
	struct FAnimNodeReference Node;  // 0x0 (0x0)
	struct FLayeredBoneBlendReference LayeredBoneBlend;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Result : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBoneBlend
struct FConvertToLayeredBoneBlend
{
	struct FAnimNodeReference Node;  // 0x0 (0x0)
	uint8_t Result;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FLayeredBoneBlendReference ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AnimGraphRuntime.LayeredBoneBlendLibrary.GetNumPoses
struct FGetNumPoses
{
	struct FLayeredBoneBlendReference LayeredBoneBlend;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function AnimGraphRuntime.LayeredBoneBlendLibrary.SetBlendMask
struct FSetBlendMask
{
	struct FAnimUpdateContext UpdateContext;  // 0x0 (0x0)
	struct FLayeredBoneBlendReference LayeredBoneBlend;  // 0x10 (0x10)
	int32_t PoseIndex;  // 0x20 (0x20)
	struct FName BlendMaskName;  // 0x24 (0x24)
	char pad_44[4];  // 0x2C (0x2C)
	struct FLayeredBoneBlendReference ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachine
struct FConvertToAnimationStateMachine
{
	struct FAnimNodeReference Node;  // 0x0 (0x0)
	struct FAnimationStateMachineReference AnimationState;  // 0x10 (0x10)
	uint8_t Result;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachinePure
struct FConvertToAnimationStateMachinePure
{
	struct FAnimNodeReference Node;  // 0x0 (0x0)
	struct FAnimationStateMachineReference AnimationState;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Result : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult
struct FConvertToAnimationStateResult
{
	struct FAnimNodeReference Node;  // 0x0 (0x0)
	struct FAnimationStateResultReference AnimationState;  // 0x10 (0x10)
	uint8_t Result;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure
struct FConvertToAnimationStateResultPure
{
	struct FAnimNodeReference Node;  // 0x0 (0x0)
	struct FAnimationStateResultReference AnimationState;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Result : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemaining
struct FGetRelevantAnimTimeRemaining
{
	struct FAnimUpdateContext UpdateContext;  // 0x0 (0x0)
	struct FAnimationStateResultReference Node;  // 0x10 (0x10)
	float ReturnValue;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
struct FOnMontageBlendingOut
{
	struct UAnimMontage* Montage;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bInterrupted : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemainingFraction
struct FGetRelevantAnimTimeRemainingFraction
{
	struct FAnimUpdateContext UpdateContext;  // 0x0 (0x0)
	struct FAnimationStateResultReference Node;  // 0x10 (0x10)
	float ReturnValue;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // Function AnimGraphRuntime.AnimationStateMachineLibrary.GetState
struct FGetState
{
	struct FAnimUpdateContext UpdateContext;  // 0x0 (0x0)
	struct FAnimationStateMachineReference Node;  // 0x10 (0x10)
	struct FName ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn
struct FIsStateBlendingIn
{
	struct FAnimUpdateContext UpdateContext;  // 0x0 (0x0)
	struct FAnimationStateResultReference Node;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut
struct FIsStateBlendingOut
{
	struct FAnimUpdateContext UpdateContext;  // 0x0 (0x0)
	struct FAnimationStateResultReference Node;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function AnimGraphRuntime.AnimationStateMachineLibrary.SetState
struct FSetState
{
	struct FAnimUpdateContext UpdateContext;  // 0x0 (0x0)
	struct FAnimationStateMachineReference Node;  // 0x10 (0x10)
	struct FName TargetState;  // 0x20 (0x20)
	float Duration;  // 0x28 (0x28)
	enum class ETransitionLogicType BlendType;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)
	struct UBlendProfile* BlendProfile;  // 0x30 (0x30)
	uint8_t AlphaBlendOption;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct UCurveFloat* CustomBlendCurve;  // 0x40 (0x40)


}; 
 
 // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext
struct FConvertToComponentSpacePoseContext
{
	struct FAnimExecutionContext Context;  // 0x0 (0x0)
	uint8_t Result;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FAnimComponentSpacePoseContext ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime
struct FAdvanceTime
{
	struct FAnimUpdateContext UpdateContext;  // 0x0 (0x0)
	struct FSequenceEvaluatorReference SequenceEvaluator;  // 0x10 (0x10)
	float PlayRate;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct FSequenceEvaluatorReference ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext
struct FConvertToInitializationContext
{
	struct FAnimExecutionContext Context;  // 0x0 (0x0)
	uint8_t Result;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FAnimInitializationContext ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
struct FK2_LookAt
{
	struct FTransform CurrentTransform;  // 0x0 (0x0)
	struct FVector TargetPosition;  // 0x60 (0x60)
	struct FVector LookAtVector;  // 0x78 (0x78)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool bUseUpVector : 1;  // 0x90 (0x90)
	char pad_145[7];  // 0x91 (0x91)
	struct FVector UpVector;  // 0x98 (0x98)
	float ClampConeInDegree;  // 0xB0 (0xB0)
	char pad_180[12];  // 0xB4 (0xB4)
	struct FTransform ReturnValue;  // 0xC0 (0xC0)


}; 
 
 // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext
struct FConvertToUpdateContext
{
	struct FAnimExecutionContext Context;  // 0x0 (0x0)
	uint8_t Result;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FAnimUpdateContext ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha
struct FGetAlpha
{
	struct FSkeletalControlReference SkeletalControl;  // 0x0 (0x0)
	float ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance
struct FGetAnimInstance
{
	struct FAnimExecutionContext Context;  // 0x0 (0x0)
	struct UAnimInstance* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight
struct FGetCurrentWeight
{
	struct FAnimUpdateContext Context;  // 0x0 (0x0)
	float ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime
struct FGetDeltaTime
{
	struct FAnimUpdateContext Context;  // 0x0 (0x0)
	float ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection
struct FCalculateDirection
{
	struct FVector Velocity;  // 0x0 (0x0)
	struct FRotator BaseRotation;  // 0x18 (0x18)
	float ReturnValue;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
struct FK2_CalculateVelocityFromSockets
{
	float DeltaSeconds;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct USkeletalMeshComponent* Component;  // 0x8 (0x8)
	struct FName SocketOrBoneName;  // 0x10 (0x10)
	struct FName ReferenceSocketOrBone;  // 0x18 (0x18)
	enum class ERelativeTransformSpace SocketSpace;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct FVector OffsetInBoneSpace;  // 0x28 (0x28)
	struct FPositionHistory History;  // 0x40 (0x40)
	int32_t NumberOfSamples;  // 0x70 (0x70)
	float VelocityMin;  // 0x74 (0x74)
	float VelocityMax;  // 0x78 (0x78)
	uint8_t EasingType;  // 0x7C (0x7C)
	char pad_125[3];  // 0x7D (0x7D)
	struct FRuntimeFloatCurve CustomCurve;  // 0x80 (0x80)
	float ReturnValue;  // 0x108 (0x108)
	char pad_268[4];  // 0x10C (0x10C)


}; 
 
 // Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
struct FK2_DirectionBetweenSockets
{
	struct USkeletalMeshComponent* Component;  // 0x0 (0x0)
	struct FName SocketOrBoneNameFrom;  // 0x8 (0x8)
	struct FName SocketOrBoneNameTo;  // 0x10 (0x10)
	struct FVector ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
struct FK2_DistanceBetweenTwoSocketsAndMapRange
{
	struct USkeletalMeshComponent* Component;  // 0x0 (0x0)
	struct FName SocketOrBoneNameA;  // 0x8 (0x8)
	enum class ERelativeTransformSpace SocketSpaceA;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	struct FName SocketOrBoneNameB;  // 0x14 (0x14)
	enum class ERelativeTransformSpace SocketSpaceB;  // 0x1C (0x1C)
	char pad_29_1 : 7;  // 0x1D (0x1D)
	bool bRemapRange : 1;  // 0x1D (0x1D)
	char pad_30[2];  // 0x1E (0x1E)
	float InRangeMin;  // 0x20 (0x20)
	float InRangeMax;  // 0x24 (0x24)
	float OutRangeMin;  // 0x28 (0x28)
	float OutRangeMax;  // 0x2C (0x2C)
	float ReturnValue;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
struct FK2_EndProfilingTimer
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bLog : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FString LogPrefix;  // 0x8 (0x8)
	float ReturnValue;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph
struct FConvertToLinkedAnimGraph
{
	struct FAnimNodeReference Node;  // 0x0 (0x0)
	uint8_t Result;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FLinkedAnimGraphReference ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
struct FK2_MakePerlinNoiseAndRemap
{
	float Value;  // 0x0 (0x0)
	float RangeOutMin;  // 0x4 (0x4)
	float RangeOutMax;  // 0x8 (0x8)
	float ReturnValue;  // 0xC (0xC)


}; 
 
 // Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
struct FK2_MakePerlinNoiseVectorAndRemap
{
	float X;  // 0x0 (0x0)
	float Y;  // 0x4 (0x4)
	float Z;  // 0x8 (0x8)
	float RangeOutMinX;  // 0xC (0xC)
	float RangeOutMaxX;  // 0x10 (0x10)
	float RangeOutMinY;  // 0x14 (0x14)
	float RangeOutMaxY;  // 0x18 (0x18)
	float RangeOutMinZ;  // 0x1C (0x1C)
	float RangeOutMaxZ;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	struct FVector ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
struct FK2_TwoBoneIK
{
	struct FVector RootPos;  // 0x0 (0x0)
	struct FVector JointPos;  // 0x18 (0x18)
	struct FVector EndPos;  // 0x30 (0x30)
	struct FVector JointTarget;  // 0x48 (0x48)
	struct FVector Effector;  // 0x60 (0x60)
	struct FVector OutJointPos;  // 0x78 (0x78)
	struct FVector OutEndPos;  // 0x90 (0x90)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool bAllowStretching : 1;  // 0xA8 (0xA8)
	char pad_169[3];  // 0xA9 (0xA9)
	float StartStretchRatio;  // 0xAC (0xAC)
	float MaxStretchScale;  // 0xB0 (0xB0)
	char pad_180[4];  // 0xB4 (0xB4)


}; 
 
 // Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure
struct FConvertToLinkedAnimGraphPure
{
	struct FAnimNodeReference Node;  // 0x0 (0x0)
	struct FLinkedAnimGraphReference LinkedAnimGraph;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Result : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance
struct FGetLinkedAnimInstance
{
	struct FLinkedAnimGraphReference Node;  // 0x0 (0x0)
	struct UAnimInstance* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance
struct FHasLinkedAnimInstance
{
	struct FLinkedAnimGraphReference Node;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
struct FCreateProxyObjectForPlayMontage
{
	struct USkeletalMeshComponent* InSkeletalMeshComponent;  // 0x0 (0x0)
	struct UAnimMontage* MontageToPlay;  // 0x8 (0x8)
	float PlayRate;  // 0x10 (0x10)
	float StartingPosition;  // 0x14 (0x14)
	struct FName StartingSection;  // 0x18 (0x18)
	struct UPlayMontageCallbackProxy* ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
struct FOnMontageEnded
{
	struct UAnimMontage* Montage;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bInterrupted : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
struct FOnNotifyBeginReceived
{
	struct FName NotifyName;  // 0x0 (0x0)
	struct FBranchingPointNotifyPayload BranchingPointNotifyPayload;  // 0x8 (0x8)


}; 
 
 // Function AnimGraphRuntime.SkeletalControlLibrary.SetAlpha
struct FSetAlpha
{
	struct FSkeletalControlReference SkeletalControl;  // 0x0 (0x0)
	float Alpha;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FSkeletalControlReference ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator
struct FConvertToSequenceEvaluator
{
	struct FAnimNodeReference Node;  // 0x0 (0x0)
	uint8_t Result;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FSequenceEvaluatorReference ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime
struct FGetAccumulatedTime
{
	struct FSequencePlayerReference SequencePlayer;  // 0x0 (0x0)
	float ReturnValue;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)


}; 
 
 // Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence
struct FGetSequence
{
	struct FSequencePlayerReference SequencePlayer;  // 0x0 (0x0)
	struct UAnimSequenceBase* SequenceBase;  // 0x10 (0x10)
	struct FSequencePlayerReference ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending
struct FSetSequenceWithInertialBlending
{
	struct FAnimUpdateContext UpdateContext;  // 0x0 (0x0)
	struct FSequencePlayerReference SequencePlayer;  // 0x10 (0x10)
	struct UAnimSequenceBase* Sequence;  // 0x20 (0x20)
	float BlendTime;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct FSequencePlayerReference ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer
struct FConvertToSequencePlayer
{
	struct FAnimNodeReference Node;  // 0x0 (0x0)
	uint8_t Result;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FSequencePlayerReference ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure
struct FConvertToSequencePlayerPure
{
	struct FAnimNodeReference Node;  // 0x0 (0x0)
	struct FSequencePlayerReference SequencePlayer;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Result : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 // Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation
struct FGetLoopAnimation
{
	struct FSequencePlayerReference SequencePlayer;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime
struct FSetAccumulatedTime
{
	struct FSequencePlayerReference SequencePlayer;  // 0x0 (0x0)
	float Time;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FSequencePlayerReference ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition
struct FSetStartPosition
{
	struct FSequencePlayerReference SequencePlayer;  // 0x0 (0x0)
	float StartPosition;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct FSequencePlayerReference ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl
struct FConvertToSkeletalControl
{
	struct FAnimNodeReference Node;  // 0x0 (0x0)
	uint8_t Result;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct FSkeletalControlReference ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure
struct FConvertToSkeletalControlPure
{
	struct FAnimNodeReference Node;  // 0x0 (0x0)
	struct FSkeletalControlReference SkeletalControl;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool Result : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)


}; 
 
 