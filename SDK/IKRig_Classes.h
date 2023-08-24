#pragma once 
#include <IKRig_Structs.h>
 
 
 
// Class IKRig.IKRetargetGlobalSettings
// Size: 0x48(Inherited: 0x28)
struct UIKRetargetGlobalSettings : UObject
{
	struct FRetargetGlobalSettings Settings;  // 0x28 (0x28)


}; 
 
 


// Class IKRig.IKRigComponent
// Size: 0xB8(Inherited: 0xA0)
struct UIKRigComponent : UActorComponent
{
	char pad_160[24];  // 0xA0 (0xA0)


	void SetIKRigGoalTransform(struct FName GoalName, struct FTransform Transform, float PositionAlpha, float RotationAlpha); // Function IKRig.IKRigComponent.SetIKRigGoalTransform
	void SetIKRigGoalPositionAndRotation(struct FName GoalName, struct FVector Position, struct FQuat Rotation, float PositionAlpha, float RotationAlpha); // Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation
	void SetIKRigGoal(struct FIKRigGoal& Goal); // Function IKRig.IKRigComponent.SetIKRigGoal
	void ClearAllGoals(); // Function IKRig.IKRigComponent.ClearAllGoals
}; 
 
 


// Class IKRig.IKRig_PBIKBoneSettings
// Size: 0x78(Inherited: 0x28)
struct UIKRig_PBIKBoneSettings : UObject
{
	struct FName bone;  // 0x28 (0x28)
	float RotationStiffness;  // 0x30 (0x30)
	float PositionStiffness;  // 0x34 (0x34)
	uint8_t X;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	float MinX;  // 0x3C (0x3C)
	float MaxX;  // 0x40 (0x40)
	uint8_t Y;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)
	float MinY;  // 0x48 (0x48)
	float MaxY;  // 0x4C (0x4C)
	uint8_t Z;  // 0x50 (0x50)
	char pad_81[3];  // 0x51 (0x51)
	float MinZ;  // 0x54 (0x54)
	float MaxZ;  // 0x58 (0x58)
	char pad_92_1 : 7;  // 0x5C (0x5C)
	bool bUsePreferredAngles : 1;  // 0x5C (0x5C)
	char pad_93[3];  // 0x5D (0x5D)
	struct FVector PreferredAngles;  // 0x60 (0x60)


}; 
 
 


// Class IKRig.IKGoalCreatorInterface
// Size: 0x28(Inherited: 0x28)
struct UIKGoalCreatorInterface : UInterface
{


	void AddIKGoals(struct TMap<struct FName, struct FIKRigGoal>& OutGoals); // Function IKRig.IKGoalCreatorInterface.AddIKGoals
}; 
 
 


// Class IKRig.IKRigEffectorGoal
// Size: 0x100(Inherited: 0x28)
struct UIKRigEffectorGoal : UObject
{
	struct FName GoalName;  // 0x28 (0x28)
	struct FName BoneName;  // 0x30 (0x30)
	float PositionAlpha;  // 0x38 (0x38)
	float RotationAlpha;  // 0x3C (0x3C)
	struct FTransform CurrentTransform;  // 0x40 (0x40)
	struct FTransform InitialTransform;  // 0xA0 (0xA0)


}; 
 
 


// Class IKRig.IKRigDefinition
// Size: 0x108(Inherited: 0x28)
struct UIKRigDefinition : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct TSoftObjectPtr<USkeletalMesh> PreviewSkeletalMesh;  // 0x30 (0x30)
	struct FIKRigSkeleton Skeleton;  // 0x60 (0x60)
	struct TArray<struct UIKRigEffectorGoal*> Goals;  // 0xD0 (0xD0)
	struct TArray<struct UIKRigSolver*> Solvers;  // 0xE0 (0xE0)
	struct FRetargetDefinition RetargetDefinition;  // 0xF0 (0xF0)


}; 
 
 


// Class IKRig.IKRig_PoleSolverEffector
// Size: 0x40(Inherited: 0x28)
struct UIKRig_PoleSolverEffector : UObject
{
	struct FName GoalName;  // 0x28 (0x28)
	struct FName BoneName;  // 0x30 (0x30)
	float Alpha;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 


// Class IKRig.IKRigProcessor
// Size: 0x148(Inherited: 0x28)
struct UIKRigProcessor : UObject
{
	char pad_40[56];  // 0x28 (0x28)
	struct TArray<struct UIKRigSolver*> Solvers;  // 0x60 (0x60)
	char pad_112[216];  // 0x70 (0x70)


}; 
 
 


// Class IKRig.RetargetRootSettings
// Size: 0xE8(Inherited: 0x28)
struct URetargetRootSettings : UObject
{
	struct FTargetRootSettings Settings;  // 0x28 (0x28)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool RetargetRootTranslation : 1;  // 0x90 (0x90)
	char pad_145[3];  // 0x91 (0x91)
	float GlobalScaleHorizontal;  // 0x94 (0x94)
	float GlobalScaleVertical;  // 0x98 (0x98)
	char pad_156[4];  // 0x9C (0x9C)
	struct FVector BlendToSource;  // 0xA0 (0xA0)
	struct FVector StaticOffset;  // 0xB8 (0xB8)
	struct FRotator StaticRotationOffset;  // 0xD0 (0xD0)


}; 
 
 


// Class IKRig.IKRigSolver
// Size: 0x30(Inherited: 0x28)
struct UIKRigSolver : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bIsEnabled : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 


// Class IKRig.RetargetChainSettings
// Size: 0x170(Inherited: 0x28)
struct URetargetChainSettings : UObject
{
	struct FName SourceChain;  // 0x28 (0x28)
	struct FName TargetChain;  // 0x30 (0x30)
	struct FTargetChainSettings Settings;  // 0x38 (0x38)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool CopyPoseUsingFK : 1;  // 0xD8 (0xD8)
	uint8_t RotationMode;  // 0xD9 (0xD9)
	char pad_218[2];  // 0xDA (0xDA)
	float RotationAlpha;  // 0xDC (0xDC)
	uint8_t TranslationMode;  // 0xE0 (0xE0)
	char pad_225[3];  // 0xE1 (0xE1)
	float TranslationAlpha;  // 0xE4 (0xE4)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool DriveIKGoal : 1;  // 0xE8 (0xE8)
	char pad_233[3];  // 0xE9 (0xE9)
	float BlendToSource;  // 0xEC (0xEC)
	struct FVector BlendToSourceWeights;  // 0xF0 (0xF0)
	struct FVector StaticOffset;  // 0x108 (0x108)
	struct FVector StaticLocalOffset;  // 0x120 (0x120)
	struct FRotator StaticRotationOffset;  // 0x138 (0x138)
	float Extension;  // 0x150 (0x150)
	char pad_340_1 : 7;  // 0x154 (0x154)
	bool UseSpeedCurveToPlantIK : 1;  // 0x154 (0x154)
	char pad_341[3];  // 0x155 (0x155)
	struct FName SpeedCurveName;  // 0x158 (0x158)
	float VelocityThreshold;  // 0x160 (0x160)
	float UnplantStiffness;  // 0x164 (0x164)
	float UnplantCriticalDamping;  // 0x168 (0x168)
	char pad_364[4];  // 0x16C (0x16C)


}; 
 
 


// Class IKRig.IKRetargeter
// Size: 0x218(Inherited: 0x28)
struct UIKRetargeter : UObject
{
	struct TSoftObjectPtr<UIKRigDefinition> SourceIKRigAsset;  // 0x28 (0x28)
	struct TSoftObjectPtr<UIKRigDefinition> TargetIKRigAsset;  // 0x58 (0x58)
	struct TArray<struct FRetargetChainMap> ChainMapping;  // 0x88 (0x88)
	struct TArray<struct URetargetChainSettings*> ChainSettings;  // 0x98 (0x98)
	struct URetargetRootSettings* RootSettings;  // 0xA8 (0xA8)
	struct UIKRetargetGlobalSettings* GlobalSettings;  // 0xB0 (0xB0)
	struct TMap<struct FName, struct FRetargetProfile> Profiles;  // 0xB8 (0xB8)
	struct FName CurrentProfile;  // 0x108 (0x108)
	struct TMap<struct FName, struct FIKRetargetPose> SourceRetargetPoses;  // 0x110 (0x110)
	struct TMap<struct FName, struct FIKRetargetPose> TargetRetargetPoses;  // 0x160 (0x160)
	struct FName CurrentSourceRetargetPose;  // 0x1B0 (0x1B0)
	struct FName CurrentTargetRetargetPose;  // 0x1B8 (0x1B8)
	struct TMap<struct FName, struct FIKRetargetPose> RetargetPoses;  // 0x1C0 (0x1C0)
	struct FName CurrentRetargetPose;  // 0x210 (0x210)


	void SetRootSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetRootSettings& RootSettings); // Function IKRig.IKRetargeter.SetRootSettingsInRetargetProfile
	void SetGlobalSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FRetargetGlobalSettings& GlobalSettings); // Function IKRig.IKRetargeter.SetGlobalSettingsInRetargetProfile
	void SetChainSpeedPlantSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainSpeedPlantSettings& SpeedPlantSettings, struct FName TargetChainName); // Function IKRig.IKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile
	void SetChainSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainSettings& ChainSettings, struct FName TargetChainName); // Function IKRig.IKRetargeter.SetChainSettingsInRetargetProfile
	void SetChainIKSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainIKSettings& IKSettings, struct FName TargetChainName); // Function IKRig.IKRetargeter.SetChainIKSettingsInRetargetProfile
	void SetChainFKSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainFKSettings& FKSettings, struct FName TargetChainName); // Function IKRig.IKRetargeter.SetChainFKSettingsInRetargetProfile
	struct FTargetRootSettings GetRootSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile); // Function IKRig.IKRetargeter.GetRootSettingsFromRetargetProfile
	void GetRootSettingsFromRetargetAsset(struct UIKRetargeter* RetargetAsset, struct FName OptionalProfileName, struct FTargetRootSettings& OutSettings); // Function IKRig.IKRetargeter.GetRootSettingsFromRetargetAsset
	struct FRetargetGlobalSettings GetGlobalSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile); // Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile
	void GetGlobalSettingsFromRetargetAsset(struct UIKRetargeter* RetargetAsset, struct FName OptionalProfileName, struct FRetargetGlobalSettings& OutSettings); // Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetAsset
	struct FTargetChainSettings GetChainUsingGoalFromRetargetAsset(struct UIKRetargeter* RetargetAsset, struct FName IKGoalName); // Function IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset
	struct FTargetChainSettings GetChainSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FName TargetChainName); // Function IKRig.IKRetargeter.GetChainSettingsFromRetargetProfile
	struct FTargetChainSettings GetChainSettingsFromRetargetAsset(struct UIKRetargeter* RetargetAsset, struct FName TargetChainName, struct FName OptionalProfileName); // Function IKRig.IKRetargeter.GetChainSettingsFromRetargetAsset
}; 
 
 


// Class IKRig.IKRig_BodyMover
// Size: 0x80(Inherited: 0x30)
struct UIKRig_BodyMover : UIKRigSolver
{
	struct FName RootBone;  // 0x30 (0x30)
	float PositionAlpha;  // 0x38 (0x38)
	float PositionPositiveX;  // 0x3C (0x3C)
	float PositionNegativeX;  // 0x40 (0x40)
	float PositionPositiveY;  // 0x44 (0x44)
	float PositionNegativeY;  // 0x48 (0x48)
	float PositionPositiveZ;  // 0x4C (0x4C)
	float PositionNegativeZ;  // 0x50 (0x50)
	float RotationAlpha;  // 0x54 (0x54)
	float RotateXAlpha;  // 0x58 (0x58)
	float RotateYAlpha;  // 0x5C (0x5C)
	float RotateZAlpha;  // 0x60 (0x60)
	char pad_100[4];  // 0x64 (0x64)
	struct TArray<struct UIKRig_BodyMoverEffector*> Effectors;  // 0x68 (0x68)
	char pad_120[8];  // 0x78 (0x78)


}; 
 
 


// Class IKRig.IKRetargetProcessor
// Size: 0x370(Inherited: 0x28)
struct UIKRetargetProcessor : UObject
{
	char pad_40[328];  // 0x28 (0x28)
	struct UIKRigProcessor* IKRigProcessor;  // 0x170 (0x170)
	char pad_376[504];  // 0x178 (0x178)


}; 
 
 


// Class IKRig.IKRig_BodyMoverEffector
// Size: 0x40(Inherited: 0x28)
struct UIKRig_BodyMoverEffector : UObject
{
	struct FName GoalName;  // 0x28 (0x28)
	struct FName BoneName;  // 0x30 (0x30)
	float InfluenceMultiplier;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)


}; 
 
 


// Class IKRig.IKRig_LimbEffector
// Size: 0x38(Inherited: 0x28)
struct UIKRig_LimbEffector : UObject
{
	struct FName GoalName;  // 0x28 (0x28)
	struct FName BoneName;  // 0x30 (0x30)


}; 
 
 


// Class IKRig.IKRig_LimbSolver
// Size: 0x90(Inherited: 0x30)
struct UIKRig_LimbSolver : UIKRigSolver
{
	struct FName RootName;  // 0x30 (0x30)
	float ReachPrecision;  // 0x38 (0x38)
	enum class EAxis HingeRotationAxis;  // 0x3C (0x3C)
	char pad_61[3];  // 0x3D (0x3D)
	int32_t MaxIterations;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool bEnableLimit : 1;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)
	float MinRotationAngle;  // 0x48 (0x48)
	char pad_76_1 : 7;  // 0x4C (0x4C)
	bool bAveragePull : 1;  // 0x4C (0x4C)
	char pad_77[3];  // 0x4D (0x4D)
	float PullDistribution;  // 0x50 (0x50)
	float ReachStepAlpha;  // 0x54 (0x54)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool bEnableTwistCorrection : 1;  // 0x58 (0x58)
	enum class EAxis EndBoneForwardAxis;  // 0x59 (0x59)
	char pad_90[6];  // 0x5A (0x5A)
	struct UIKRig_LimbEffector* Effector;  // 0x60 (0x60)
	char pad_104[40];  // 0x68 (0x68)


}; 
 
 


// Class IKRig.IKRig_FBIKEffector
// Size: 0x48(Inherited: 0x28)
struct UIKRig_FBIKEffector : UObject
{
	struct FName GoalName;  // 0x28 (0x28)
	struct FName BoneName;  // 0x30 (0x30)
	float StrengthAlpha;  // 0x38 (0x38)
	float PullChainAlpha;  // 0x3C (0x3C)
	float PinRotation;  // 0x40 (0x40)
	int32_t IndexInSolver;  // 0x44 (0x44)


}; 
 
 


// Class IKRig.IKRigPBIKSolver
// Size: 0xD0(Inherited: 0x30)
struct UIKRigPBIKSolver : UIKRigSolver
{
	struct FName RootBone;  // 0x30 (0x30)
	int32_t Iterations;  // 0x38 (0x38)
	float MassMultiplier;  // 0x3C (0x3C)
	float MinMassMultiplier;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool bAllowStretch : 1;  // 0x44 (0x44)
	uint8_t RootBehavior;  // 0x45 (0x45)
	char pad_70_1 : 7;  // 0x46 (0x46)
	bool bStartSolveFromInputPose : 1;  // 0x46 (0x46)
	char pad_71[1];  // 0x47 (0x47)
	struct TArray<struct UIKRig_FBIKEffector*> Effectors;  // 0x48 (0x48)
	struct TArray<struct UIKRig_PBIKBoneSettings*> BoneSettings;  // 0x58 (0x58)
	char pad_104[104];  // 0x68 (0x68)


}; 
 
 


// Class IKRig.IKRig_PoleSolver
// Size: 0x68(Inherited: 0x30)
struct UIKRig_PoleSolver : UIKRigSolver
{
	struct FName RootName;  // 0x30 (0x30)
	struct FName EndName;  // 0x38 (0x38)
	struct UIKRig_PoleSolverEffector* Effector;  // 0x40 (0x40)
	char pad_72[32];  // 0x48 (0x48)


}; 
 
 


// Class IKRig.IKRig_SetTransformEffector
// Size: 0x30(Inherited: 0x28)
struct UIKRig_SetTransformEffector : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bEnablePosition : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool bEnableRotation : 1;  // 0x29 (0x29)
	char pad_42[2];  // 0x2A (0x2A)
	float Alpha;  // 0x2C (0x2C)


}; 
 
 


// Class IKRig.IKRig_SetTransform
// Size: 0x50(Inherited: 0x30)
struct UIKRig_SetTransform : UIKRigSolver
{
	struct FName Goal;  // 0x30 (0x30)
	struct FName RootBone;  // 0x38 (0x38)
	struct UIKRig_SetTransformEffector* Effector;  // 0x40 (0x40)
	char pad_72[8];  // 0x48 (0x48)


}; 
 
 


