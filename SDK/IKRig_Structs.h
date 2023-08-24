#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation
struct FSetIKRigGoalPositionAndRotation
{
	struct FName GoalName;  // 0x0 (0x0)
	struct FVector Position;  // 0x8 (0x8)
	struct FQuat Rotation;  // 0x20 (0x20)
	float PositionAlpha;  // 0x40 (0x40)
	float RotationAlpha;  // 0x44 (0x44)
	char pad_72[8];  // 0x48 (0x48)


}; 
 
 // ScriptStruct IKRig.RetargetProfile
struct FRetargetProfile
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bApplyTargetRetargetPose : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FName TargetRetargetPoseName;  // 0x4 (0x4)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bApplySourceRetargetPose : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	struct FName SourceRetargetPoseName;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bApplyChainSettings : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct TMap<struct FName, struct FTargetChainSettings> ChainSettings;  // 0x20 (0x20)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool bApplyRootSettings : 1;  // 0x70 (0x70)
	char pad_113[7];  // 0x71 (0x71)
	struct FTargetRootSettings RootSettings;  // 0x78 (0x78)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool bApplyGlobalSettings : 1;  // 0xE0 (0xE0)
	char pad_225[3];  // 0xE1 (0xE1)
	struct FRetargetGlobalSettings GlobalSettings;  // 0xE4 (0xE4)
	char pad_260[4];  // 0x104 (0x104)


}; 
 
 // ScriptStruct IKRig.TargetChainFKSettings
struct FTargetChainFKSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool EnableFK : 1;  // 0x0 (0x0)
	uint8_t RotationMode;  // 0x1 (0x1)
	char pad_2[2];  // 0x2 (0x2)
	float RotationAlpha;  // 0x4 (0x4)
	uint8_t TranslationMode;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	float TranslationAlpha;  // 0xC (0xC)
	float PoleVectorMatching;  // 0x10 (0x10)
	float PoleVectorOffset;  // 0x14 (0x14)


}; 
 
 // ScriptStruct IKRig.RetargetGlobalSettings
struct FRetargetGlobalSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnableRoot : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bEnableFK : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool bEnableIK : 1;  // 0x2 (0x2)
	char pad_3_1 : 7;  // 0x3 (0x3)
	bool bWarping : 1;  // 0x3 (0x3)
	uint8_t DirectionSource;  // 0x4 (0x4)
	uint8_t ForwardDirection;  // 0x8 (0x8)
	struct FName DirectionChain;  // 0xC (0xC)
	float WarpForwards;  // 0x14 (0x14)
	float SidewaysOffset;  // 0x18 (0x18)
	float WarpSplay;  // 0x1C (0x1C)


}; 
 
 // ScriptStruct IKRig.LimbLink
struct FLimbLink
{
	char pad_0[104];  // 0x0 (0x0)


}; 
 
 // ScriptStruct IKRig.TargetRootSettings
struct FTargetRootSettings
{
	float RotationAlpha;  // 0x0 (0x0)
	float TranslationAlpha;  // 0x4 (0x4)
	float BlendToSource;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	struct FVector BlendToSourceWeights;  // 0x10 (0x10)
	float ScaleHorizontal;  // 0x28 (0x28)
	float ScaleVertical;  // 0x2C (0x2C)
	struct FVector TranslationOffset;  // 0x30 (0x30)
	struct FRotator RotationOffset;  // 0x48 (0x48)
	float AffectIKHorizontal;  // 0x60 (0x60)
	float AffectIKVertical;  // 0x64 (0x64)


}; 
 
 // ScriptStruct IKRig.RetargetChainMap
struct FRetargetChainMap
{
	struct FName SourceChain;  // 0x0 (0x0)
	struct FName TargetChain;  // 0x8 (0x8)


}; 
 
 // ScriptStruct IKRig.TargetChainIKSettings
struct FTargetChainIKSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool EnableIK : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float BlendToSource;  // 0x4 (0x4)
	struct FVector BlendToSourceWeights;  // 0x8 (0x8)
	struct FVector StaticOffset;  // 0x20 (0x20)
	struct FVector StaticLocalOffset;  // 0x38 (0x38)
	struct FRotator StaticRotationOffset;  // 0x50 (0x50)
	float Extension;  // 0x68 (0x68)
	char pad_108_1 : 7;  // 0x6C (0x6C)
	bool bAffectedByIKWarping : 1;  // 0x6C (0x6C)
	char pad_109[3];  // 0x6D (0x6D)


}; 
 
 // ScriptStruct IKRig.TargetChainSettings
struct FTargetChainSettings
{
	struct FTargetChainFKSettings FK;  // 0x0 (0x0)
	struct FTargetChainIKSettings IK;  // 0x18 (0x18)
	struct FTargetChainSpeedPlantSettings SpeedPlanting;  // 0x88 (0x88)


}; 
 
 // ScriptStruct IKRig.TargetChainSpeedPlantSettings
struct FTargetChainSpeedPlantSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool EnableSpeedPlanting : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FName SpeedCurveName;  // 0x4 (0x4)
	float SpeedThreshold;  // 0xC (0xC)
	float UnplantStiffness;  // 0x10 (0x10)
	float UnplantCriticalDamping;  // 0x14 (0x14)


}; 
 
 // ScriptStruct IKRig.AnimNode_IKRig
// Size: 0x1E0(Inherited: 0x58)
struct FAnimNode_IKRig : FAnimNode_CustomProperty
{
	struct FPoseLink Source;  // 0x58 (0x58)
	struct UIKRigDefinition* RigDefinitionAsset;  // 0x68 (0x68)
	struct TArray<struct FIKRigGoal> Goals;  // 0x70 (0x70)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool bStartFromRefPose : 1;  // 0x80 (0x80)
	uint8_t AlphaInputType;  // 0x81 (0x81)
	char pad_130_1 : 7;  // 0x82 (0x82)
	bool bAlphaBoolEnabled : 1;  // 0x82 (0x82)
	char pad_131[1];  // 0x83 (0x83)
	float Alpha;  // 0x84 (0x84)
	struct FInputScaleBias AlphaScaleBias;  // 0x88 (0x88)
	struct FInputAlphaBoolBlend AlphaBoolBlend;  // 0x90 (0x90)
	struct FName AlphaCurveName;  // 0xD8 (0xD8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp;  // 0xE0 (0xE0)
	struct UIKRigProcessor* IKRigProcessor;  // 0x110 (0x110)
	char pad_280[192];  // 0x118 (0x118)
	float ActualAlpha;  // 0x1D8 (0x1D8)
	char pad_476[4];  // 0x1DC (0x1DC)


}; 
 
 // ScriptStruct IKRig.IKRigGoal
struct FIKRigGoal
{
	struct FName Name;  // 0x0 (0x0)
	uint8_t TransformSource;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	struct FBoneReference SourceBone;  // 0xC (0xC)
	char pad_28[4];  // 0x1C (0x1C)
	struct FVector Position;  // 0x20 (0x20)
	struct FRotator Rotation;  // 0x38 (0x38)
	float PositionAlpha;  // 0x50 (0x50)
	float RotationAlpha;  // 0x54 (0x54)
	uint8_t PositionSpace;  // 0x58 (0x58)
	uint8_t RotationSpace;  // 0x59 (0x59)
	char pad_90[6];  // 0x5A (0x5A)
	struct FVector FinalBlendedPosition;  // 0x60 (0x60)
	char pad_120[8];  // 0x78 (0x78)
	struct FQuat FinalBlendedRotation;  // 0x80 (0x80)


}; 
 
 // ScriptStruct IKRig.AnimNode_RetargetPoseFromMesh
// Size: 0x258(Inherited: 0x10)
struct FAnimNode_RetargetPoseFromMesh : FAnimNode_Base
{
	struct TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool bUseAttachedParent : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)
	struct UIKRetargeter* IKRetargeterAsset;  // 0x20 (0x20)
	struct FRetargetProfile CustomRetargetProfile;  // 0x28 (0x28)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool bSuppressWarnings : 1;  // 0x130 (0x130)
	char pad_305_1 : 7;  // 0x131 (0x131)
	bool bCopyCurves : 1;  // 0x131 (0x131)
	char pad_306[6];  // 0x132 (0x132)
	struct UIKRetargetProcessor* Processor;  // 0x138 (0x138)
	char pad_320[280];  // 0x140 (0x140)


}; 
 
 // ScriptStruct IKRig.IKRigGoalContainer
struct FIKRigGoalContainer
{
	char pad_0[16];  // 0x0 (0x0)


}; 
 
 // ScriptStruct IKRig.BoneChain
struct FBoneChain
{
	struct FName ChainName;  // 0x0 (0x0)
	struct FBoneReference StartBone;  // 0x8 (0x8)
	struct FBoneReference EndBone;  // 0x18 (0x18)
	struct FName IKGoalName;  // 0x28 (0x28)


}; 
 
 // Function IKRig.IKGoalCreatorInterface.AddIKGoals
struct FAddIKGoals
{
	struct TMap<struct FName, struct FIKRigGoal> OutGoals;  // 0x0 (0x0)


}; 
 
 // ScriptStruct IKRig.RetargetDefinition
struct FRetargetDefinition
{
	struct FName RootBone;  // 0x0 (0x0)
	struct TArray<struct FBoneChain> BoneChains;  // 0x8 (0x8)


}; 
 
 // ScriptStruct IKRig.GoalBone
struct FGoalBone
{
	char pad_0[16];  // 0x0 (0x0)


}; 
 
 // ScriptStruct IKRig.IKRigInputSkeleton
struct FIKRigInputSkeleton
{
	char pad_0[56];  // 0x0 (0x0)


}; 
 
 // ScriptStruct IKRig.IKRigSkeleton
struct FIKRigSkeleton
{
	struct TArray<struct FName> BoneNames;  // 0x0 (0x0)
	struct TArray<int32_t> ParentIndices;  // 0x10 (0x10)
	struct TArray<struct FName> ExcludedBones;  // 0x20 (0x20)
	struct TArray<struct FTransform> CurrentPoseGlobal;  // 0x30 (0x30)
	struct TArray<struct FTransform> CurrentPoseLocal;  // 0x40 (0x40)
	struct TArray<struct FTransform> RefPoseGlobal;  // 0x50 (0x50)
	char pad_96[16];  // 0x60 (0x60)


}; 
 
 // ScriptStruct IKRig.IKRetargetPose
struct FIKRetargetPose
{
	struct FVector RootTranslationOffset;  // 0x0 (0x0)
	struct TMap<struct FName, struct FQuat> BoneRotationOffsets;  // 0x18 (0x18)


}; 
 
 // ScriptStruct IKRig.LimbSolverSettings
struct FLimbSolverSettings
{
	float ReachPrecision;  // 0x0 (0x0)
	enum class EAxis HingeRotationAxis;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	int32_t MaxIterations;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool bEnableLimit : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	float MinRotationAngle;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool bAveragePull : 1;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)
	float PullDistribution;  // 0x18 (0x18)
	float ReachStepAlpha;  // 0x1C (0x1C)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool bEnableTwistCorrection : 1;  // 0x20 (0x20)
	enum class EAxis EndBoneForwardAxis;  // 0x21 (0x21)
	char pad_34[2];  // 0x22 (0x22)


}; 
 
 // ScriptStruct IKRig.LimbSolver
struct FLimbSolver
{
	char pad_0[24];  // 0x0 (0x0)


}; 
 
 // Function IKRig.IKRigComponent.SetIKRigGoal
struct FSetIKRigGoal
{
	struct FIKRigGoal Goal;  // 0x0 (0x0)


}; 
 
 // Function IKRig.IKRigComponent.SetIKRigGoalTransform
struct FSetIKRigGoalTransform
{
	struct FName GoalName;  // 0x0 (0x0)
	char pad_8[8];  // 0x8 (0x8)
	struct FTransform Transform;  // 0x10 (0x10)
	float PositionAlpha;  // 0x70 (0x70)
	float RotationAlpha;  // 0x74 (0x74)
	char pad_120[8];  // 0x78 (0x78)


}; 
 
 // Function IKRig.IKRetargeter.GetChainSettingsFromRetargetAsset
struct FGetChainSettingsFromRetargetAsset
{
	struct UIKRetargeter* RetargetAsset;  // 0x0 (0x0)
	struct FName TargetChainName;  // 0x8 (0x8)
	struct FName OptionalProfileName;  // 0x10 (0x10)
	struct FTargetChainSettings ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function IKRig.IKRetargeter.GetChainSettingsFromRetargetProfile
struct FGetChainSettingsFromRetargetProfile
{
	struct FRetargetProfile RetargetProfile;  // 0x0 (0x0)
	struct FName TargetChainName;  // 0x108 (0x108)
	struct FTargetChainSettings ReturnValue;  // 0x110 (0x110)


}; 
 
 // Function IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset
struct FGetChainUsingGoalFromRetargetAsset
{
	struct UIKRetargeter* RetargetAsset;  // 0x0 (0x0)
	struct FName IKGoalName;  // 0x8 (0x8)
	struct FTargetChainSettings ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetAsset
struct FGetGlobalSettingsFromRetargetAsset
{
	struct UIKRetargeter* RetargetAsset;  // 0x0 (0x0)
	struct FName OptionalProfileName;  // 0x8 (0x8)
	struct FRetargetGlobalSettings OutSettings;  // 0x10 (0x10)


}; 
 
 // Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile
struct FGetGlobalSettingsFromRetargetProfile
{
	struct FRetargetProfile RetargetProfile;  // 0x0 (0x0)
	struct FRetargetGlobalSettings ReturnValue;  // 0x108 (0x108)


}; 
 
 // Function IKRig.IKRetargeter.GetRootSettingsFromRetargetAsset
struct FGetRootSettingsFromRetargetAsset
{
	struct UIKRetargeter* RetargetAsset;  // 0x0 (0x0)
	struct FName OptionalProfileName;  // 0x8 (0x8)
	struct FTargetRootSettings OutSettings;  // 0x10 (0x10)


}; 
 
 // Function IKRig.IKRetargeter.GetRootSettingsFromRetargetProfile
struct FGetRootSettingsFromRetargetProfile
{
	struct FRetargetProfile RetargetProfile;  // 0x0 (0x0)
	struct FTargetRootSettings ReturnValue;  // 0x108 (0x108)


}; 
 
 // Function IKRig.IKRetargeter.SetChainFKSettingsInRetargetProfile
struct FSetChainFKSettingsInRetargetProfile
{
	struct FRetargetProfile RetargetProfile;  // 0x0 (0x0)
	struct FTargetChainFKSettings FKSettings;  // 0x108 (0x108)
	struct FName TargetChainName;  // 0x120 (0x120)


}; 
 
 // Function IKRig.IKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile
struct FSetChainSpeedPlantSettingsInRetargetProfile
{
	struct FRetargetProfile RetargetProfile;  // 0x0 (0x0)
	struct FTargetChainSpeedPlantSettings SpeedPlantSettings;  // 0x108 (0x108)
	struct FName TargetChainName;  // 0x120 (0x120)


}; 
 
 // Function IKRig.IKRetargeter.SetChainIKSettingsInRetargetProfile
struct FSetChainIKSettingsInRetargetProfile
{
	struct FRetargetProfile RetargetProfile;  // 0x0 (0x0)
	struct FTargetChainIKSettings IKSettings;  // 0x108 (0x108)
	struct FName TargetChainName;  // 0x178 (0x178)


}; 
 
 // Function IKRig.IKRetargeter.SetChainSettingsInRetargetProfile
struct FSetChainSettingsInRetargetProfile
{
	struct FRetargetProfile RetargetProfile;  // 0x0 (0x0)
	struct FTargetChainSettings ChainSettings;  // 0x108 (0x108)
	struct FName TargetChainName;  // 0x1A8 (0x1A8)


}; 
 
 // Function IKRig.IKRetargeter.SetGlobalSettingsInRetargetProfile
struct FSetGlobalSettingsInRetargetProfile
{
	struct FRetargetProfile RetargetProfile;  // 0x0 (0x0)
	struct FRetargetGlobalSettings GlobalSettings;  // 0x108 (0x108)


}; 
 
 // Function IKRig.IKRetargeter.SetRootSettingsInRetargetProfile
struct FSetRootSettingsInRetargetProfile
{
	struct FRetargetProfile RetargetProfile;  // 0x0 (0x0)
	struct FTargetRootSettings RootSettings;  // 0x108 (0x108)


}; 
 
 