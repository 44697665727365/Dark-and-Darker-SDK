#pragma once 
#include <BTT_SetBBValue_Structs.h>
 
 
 
// BlueprintGeneratedClass BTT_SetBBValue.BTT_SetBBValue_C
// Size: 0x120(Inherited: 0xA8)
struct UBTT_SetBBValue_C : UBTTask_BlueprintBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xA8 (0xA8)
	enum class E_Variables Variable Type;  // 0xB0 (0xB0)
	char pad_177[7];  // 0xB1 (0xB1)
	struct FBlackboardKeySelector Select Key;  // 0xB8 (0xB8)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	bool TRUE : 1;  // 0xE0 (0xE0)
	enum class E_FloatValueCalculate FloatCalculate;  // 0xE1 (0xE1)
	char pad_226[6];  // 0xE2 (0xE2)
	double Float Value;  // 0xE8 (0xE8)
	double Random Range Float;  // 0xF0 (0xF0)
	enum class E_FloatValueCalculate IntCalculate;  // 0xF8 (0xF8)
	char pad_249[3];  // 0xF9 (0xF9)
	int32_t Int Value;  // 0xFC (0xFC)
	int32_t Random Range Int;  // 0x100 (0x100)
	char pad_260[4];  // 0x104 (0x104)
	double BlackBoardFloatValue;  // 0x108 (0x108)
	int32_t BlackBoardIntValue;  // 0x110 (0x110)
	int32_t Temp_Int Value;  // 0x114 (0x114)
	double Temp_Float Value;  // 0x118 (0x118)


	void IntSet(); // Function BTT_SetBBValue.BTT_SetBBValue_C.IntSet
	void FloatSet(); // Function BTT_SetBBValue.BTT_SetBBValue_C.FloatSet
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_SetBBValue.BTT_SetBBValue_C.ReceiveExecuteAI
	void ExecuteUbergraph_BTT_SetBBValue(int32_t EntryPoint); // Function BTT_SetBBValue.BTT_SetBBValue_C.ExecuteUbergraph_BTT_SetBBValue
}; 
 
 


