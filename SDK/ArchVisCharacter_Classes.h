#pragma once 
#include <ArchVisCharacter_Structs.h>
 
 
 
// Class ArchVisCharacter.ArchVisCharacter
// Size: 0x680(Inherited: 0x620)
struct AArchVisCharacter : ACharacter
{
	struct FString LookUpAxisName;  // 0x618 (0x618)
	struct FString LookUpAtRateAxisName;  // 0x628 (0x628)
	struct FString TurnAxisName;  // 0x638 (0x638)
	struct FString TurnAtRateAxisName;  // 0x648 (0x648)
	struct FString MoveForwardAxisName;  // 0x658 (0x658)
	struct FString MoveRightAxisName;  // 0x668 (0x668)
	float MouseSensitivityScale_Pitch;  // 0x678 (0x678)
	float MouseSensitivityScale_Yaw;  // 0x67C (0x67C)


}; 
 
 


// Class ArchVisCharacter.ArchVisCharMovementComponent
// Size: 0xF90(Inherited: 0xF00)
struct UArchVisCharMovementComponent : UCharacterMovementComponent
{
	struct FRotator RotationalAcceleration;  // 0xEF8 (0xEF8)
	struct FRotator RotationalDeceleration;  // 0xF10 (0xF10)
	struct FRotator MaxRotationalVelocity;  // 0xF28 (0xF28)
	float MinPitch;  // 0xF40 (0xF40)
	float MaxPitch;  // 0xF44 (0xF44)
	float WalkingFriction;  // 0xF48 (0xF48)
	float WalkingSpeed;  // 0xF4C (0xF4C)
	float WalkingAcceleration;  // 0xF50 (0xF50)
	char pad_3932[52];  // 0xF5C (0xF5C)


}; 
 
 


