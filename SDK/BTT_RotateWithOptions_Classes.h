#pragma once 
#include <BTT_RotateWithOptions_Structs.h>
 
 
 
// BlueprintGeneratedClass BTT_RotateWithOptions.BTT_RotateWithOptions_C
// Size: 0x138(Inherited: 0xA8)
struct UBTT_RotateWithOptions_C : UBTTask_BlueprintBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xA8 (0xA8)
	enum class E_RotateOption RotateTo;  // 0xB0 (0xB0)
	uint8_t HitBoxType;  // 0xB1 (0xB1)
	char pad_178[6];  // 0xB2 (0xB2)
	double Angle;  // 0xB8 (0xB8)
	double RotateSpeed;  // 0xC0 (0xC0)
	struct FName TargetActor;  // 0xC8 (0xC8)
	struct FName FloatValue;  // 0xD0 (0xD0)
	struct FVector DestLocation;  // 0xD8 (0xD8)
	struct FRotator DestRotation;  // 0xF0 (0xF0)
	double FinalRotationAngle;  // 0x108 (0x108)
	struct AAIController* Owner Controller;  // 0x110 (0x110)
	struct APawn* Controlled Pawn;  // 0x118 (0x118)
	struct ADCCharacterBase* As DCCharacter Base;  // 0x120 (0x120)
	struct FName Angle Key;  // 0x128 (0x128)
	struct AActor* ;  // 0x130 (0x130)


	void GetFloatRotationValue(); // Function BTT_RotateWithOptions.BTT_RotateWithOptions_C.GetFloatRotationValue
	void GetHitBoxLocation(struct ADCCharacterBase* DCCharacterBase); // Function BTT_RotateWithOptions.BTT_RotateWithOptions_C.GetHitBoxLocation
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_RotateWithOptions.BTT_RotateWithOptions_C.ReceiveExecuteAI
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_RotateWithOptions.BTT_RotateWithOptions_C.ReceiveTickAI
	void ExecuteUbergraph_BTT_RotateWithOptions(int32_t EntryPoint); // Function BTT_RotateWithOptions.BTT_RotateWithOptions_C.ExecuteUbergraph_BTT_RotateWithOptions
}; 
 
 


