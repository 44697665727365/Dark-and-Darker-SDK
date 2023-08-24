#pragma once 
#include <BP_DeathSkull_Common_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_DeathSkull_Common.BP_DeathSkull_Common_C
// Size: 0x1254(Inherited: 0x11B8)
struct ABP_DeathSkull_Common_C : ABP_DCMonsterBaseWithOptions_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x11B8 (0x11B8)
	struct UBP_DCHitBox_C* BP_DCHitBox4;  // 0x11C0 (0x11C0)
	struct UBP_DCHitBox_C* BP_DCHitBox3;  // 0x11C8 (0x11C8)
	struct UBP_DCHitBox_C* BP_DCHitBox2;  // 0x11D0 (0x11D0)
	struct UBP_DCHitBox_C* BP_DCHitBox1;  // 0x11D8 (0x11D8)
	struct UMaterialBillboardComponent* GlowingEye_R_Attack;  // 0x11E0 (0x11E0)
	struct UMaterialBillboardComponent* GlowingEye_L_Attack;  // 0x11E8 (0x11E8)
	struct UMaterialBillboardComponent* GlowingEye_R_Normal;  // 0x11F0 (0x11F0)
	struct UMaterialBillboardComponent* GlowingEye_L_Normal;  // 0x11F8 (0x11F8)
	struct UBP_DCHitBox_C* BP_DCHitBox;  // 0x1200 (0x1200)
	double GlowingTick;  // 0x1208 (0x1208)
	double MSESizeX;  // 0x1210 (0x1210)
	double MSESizeY;  // 0x1218 (0x1218)
	char pad_4640_1 : 7;  // 0x1220 (0x1220)
	bool SWITCH : 1;  // 0x1220 (0x1220)
	char pad_4641[7];  // 0x1221 (0x1221)
	struct UMaterialInterface* MaterialSprite;  // 0x1228 (0x1228)
	double GlowingScale;  // 0x1230 (0x1230)
	char pad_4664_1 : 7;  // 0x1238 (0x1238)
	bool OnRedEyes : 1;  // 0x1238 (0x1238)
	char pad_4665[7];  // 0x1239 (0x1239)
	double BigGlowingTime;  // 0x1240 (0x1240)
	double SmallGlowingTime;  // 0x1248 (0x1248)
	char pad_4688_1 : 7;  // 0x1250 (0x1250)
	bool OnGlowing : 1;  // 0x1250 (0x1250)
	char pad_4689_1 : 7;  // 0x1251 (0x1251)
	bool OnDead : 1;  // 0x1251 (0x1251)
	char pad_4690_1 : 7;  // 0x1252 (0x1252)
	bool IsAttack : 1;  // 0x1252 (0x1252)
	char pad_4691_1 : 7;  // 0x1253 (0x1253)
	bool IsTargetHit : 1;  // 0x1253 (0x1253)


	void SetAttackByCollisionOption(bool OnAttack); // Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.SetAttackByCollisionOption
	void CheckRemainDistanceByVelocity3D(struct FVector MoveDirection, double DeltaTime, double RemainDist, double& ResultDistance); // Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.CheckRemainDistanceByVelocity3D
	void CheckRemainDistanceByVelocity2D(struct FVector MoveDirection, double DeltaTime, double RemainDist, double& ResultDistance); // Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.CheckRemainDistanceByVelocity2D
	void OnRep_OnDead(); // Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.OnRep_OnDead
	void UpdateGlowing(double DeltaTime, double MaxGlowingTime, double MinGlowingTime, double GlowingScale); // Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.UpdateGlowing
	void OnRep_OnRedEyes(); // Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.OnRep_OnRedEyes
	void OnGlowingEyes(bool OnAttack); // Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.OnGlowingEyes
	void Added_F10CF2AE44EF117381976A8D8A3D55AF(); // Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.Added_F10CF2AE44EF117381976A8D8A3D55AF
	void ReceiveTick(float DeltaSeconds); // Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.ReceiveTick
	void OnBeforeDeath(); // Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.OnBeforeDeath
	void OnSetAI(); // Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.OnSetAI
	void ExecuteUbergraph_BP_DeathSkull_Common(int32_t EntryPoint); // Function BP_DeathSkull_Common.BP_DeathSkull_Common_C.ExecuteUbergraph_BP_DeathSkull_Common
}; 
 
 


