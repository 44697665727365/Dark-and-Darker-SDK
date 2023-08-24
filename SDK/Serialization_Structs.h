#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct Serialization.StructSerializerNumericTestStruct
struct FStructSerializerNumericTestStruct
{
	int8_t Int8;  // 0x0 (0x0)
	char pad_1[1];  // 0x1 (0x1)
	int16_t Int16;  // 0x2 (0x2)
	int32_t int32;  // 0x4 (0x4)
	int64_t Int64;  // 0x8 (0x8)
	char uint8;  // 0x10 (0x10)
	char pad_17[1];  // 0x11 (0x11)
	uint16_t uint16;  // 0x12 (0x12)
	uint32_t uint32;  // 0x14 (0x14)
	uint64_t UInt64;  // 0x18 (0x18)
	float float;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)
	double Double;  // 0x28 (0x28)


}; 
 
 // ScriptStruct Serialization.StructSerializerBooleanTestStruct
struct FStructSerializerBooleanTestStruct
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool BoolFalse : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool BoolTrue : 1;  // 0x1 (0x1)
	char Bitfield0 : 1;  // 0x2 (0x2)
	char Bitfield1 : 1;  // 0x2 (0x2)
	char Bitfield2Set : 1;  // 0x2 (0x2)
	char Bitfield3 : 1;  // 0x2 (0x2)
	char Bitfield4Set : 1;  // 0x2 (0x2)
	char Bitfield5Set : 1;  // 0x2 (0x2)
	char Bitfield6 : 1;  // 0x2 (0x2)
	char Bitfield7Set : 1;  // 0x2 (0x2)


}; 
 
 // ScriptStruct Serialization.StructSerializerBuiltinTestStruct
struct FStructSerializerBuiltinTestStruct
{
	struct FGuid Guid;  // 0x0 (0x0)
	struct FName Name;  // 0x10 (0x10)
	struct FString String;  // 0x18 (0x18)
	struct FText Text;  // 0x28 (0x28)
	struct FVector Vector;  // 0x40 (0x40)
	char pad_88[8];  // 0x58 (0x58)
	struct FVector4 Vector4;  // 0x60 (0x60)
	struct FRotator Rotator;  // 0x80 (0x80)
	char pad_152[8];  // 0x98 (0x98)
	struct FQuat Quat;  // 0xA0 (0xA0)
	struct FColor Color;  // 0xC0 (0xC0)
	char pad_196[12];  // 0xC4 (0xC4)


}; 
 
 // ScriptStruct Serialization.StructSerializerObjectTestStruct
struct FStructSerializerObjectTestStruct
{
	 RawClass;  // 0x0 (0x0)
	 WrappedClass;  // 0x8 (0x8)
	UMetaData* SubClass;  // 0x10 (0x10)
	struct TSoftClassPtr<UObject> SoftClass;  // 0x18 (0x18)
	struct UObject* RawObject;  // 0x48 (0x48)
	struct UObject* WrappedObject;  // 0x50 (0x50)
	struct TWeakObjectPtr<UMetaData> WeakObject;  // 0x58 (0x58)
	struct TSoftObjectPtr<UMetaData> SoftObject;  // 0x60 (0x60)
	struct FSoftClassPath ClassPath;  // 0x90 (0x90)
	struct FSoftObjectPath ObjectPath;  // 0xB0 (0xB0)


}; 
 
 // ScriptStruct Serialization.StructSerializerByteArray
struct FStructSerializerByteArray
{
	int32_t Dummy1;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<char> ByteArray;  // 0x8 (0x8)
	int32_t Dummy2;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)
	struct TArray<int8_t> Int8Array;  // 0x20 (0x20)
	int32_t Dummy3;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // ScriptStruct Serialization.StructSerializerLWCTypesTest
struct FStructSerializerLWCTypesTest
{
	struct FVector Vector;  // 0x0 (0x0)
	struct FVector2D Vector2D;  // 0x18 (0x18)
	char pad_40[8];  // 0x28 (0x28)
	struct FVector4 Vector4;  // 0x30 (0x30)
	struct FMatrix Matrix;  // 0x50 (0x50)
	struct FPlane Plane;  // 0xD0 (0xD0)
	struct FQuat Quat;  // 0xF0 (0xF0)
	struct FRotator Rotator;  // 0x110 (0x110)
	char pad_296[8];  // 0x128 (0x128)
	struct FTransform Transform;  // 0x130 (0x130)
	struct FBox Box;  // 0x190 (0x190)
	struct FBox2D Box2D;  // 0x1C8 (0x1C8)
	struct FBoxSphereBounds BoxSphereBounds;  // 0x1F0 (0x1F0)
	struct FOrientedBox OrientedBox;  // 0x228 (0x228)
	float float;  // 0x2A0 (0x2A0)
	char pad_676[4];  // 0x2A4 (0x2A4)
	double Double;  // 0x2A8 (0x2A8)
	struct TArray<struct FVector> VectorArray;  // 0x2B0 (0x2B0)
	struct TMap<struct FString, struct FVector> StrToVec;  // 0x2C0 (0x2C0)
	struct TSet<struct FVector> VectorSet;  // 0x310 (0x310)


}; 
 
 // ScriptStruct Serialization.OrientedBoxFloat
struct FOrientedBoxFloat
{
	struct FVector3f Center;  // 0x0 (0x0)
	struct FVector3f AxisX;  // 0xC (0xC)
	struct FVector3f AxisY;  // 0x18 (0x18)
	struct FVector3f AxisZ;  // 0x24 (0x24)
	float ExtentX;  // 0x30 (0x30)
	float ExtentY;  // 0x34 (0x34)
	float ExtentZ;  // 0x38 (0x38)


}; 
 
 // ScriptStruct Serialization.StructSerializerNonLWCTypesTest
struct FStructSerializerNonLWCTypesTest
{
	struct FVector3f Vector;  // 0x0 (0x0)
	struct FVector2f Vector2D;  // 0xC (0xC)
	char pad_20[12];  // 0x14 (0x14)
	struct FVector4f Vector4;  // 0x20 (0x20)
	struct FMatrix44f Matrix;  // 0x30 (0x30)
	struct FPlane4f Plane;  // 0x70 (0x70)
	struct FQuat4f Quat;  // 0x80 (0x80)
	struct FRotator3f Rotator;  // 0x90 (0x90)
	char pad_156[4];  // 0x9C (0x9C)
	struct FTransform3f Transform;  // 0xA0 (0xA0)
	struct FBox3f Box;  // 0xD0 (0xD0)
	struct FBox2f Box2D;  // 0xEC (0xEC)
	struct FBoxSphereBounds3f BoxSphereBounds;  // 0x100 (0x100)
	struct FOrientedBoxFloat OrientedBox;  // 0x11C (0x11C)
	float float;  // 0x158 (0x158)
	char pad_348[4];  // 0x15C (0x15C)
	double Double;  // 0x160 (0x160)
	struct TArray<struct FVector3f> VectorArray;  // 0x168 (0x168)
	struct TMap<struct FString, struct FVector3f> StrToVec;  // 0x178 (0x178)
	struct TSet<struct FVector3f> VectorSet;  // 0x1C8 (0x1C8)
	char pad_536[8];  // 0x218 (0x218)


}; 
 
 // ScriptStruct Serialization.StructSerializerArrayTestStruct
struct FStructSerializerArrayTestStruct
{
	struct TArray<int32_t> Int32Array;  // 0x0 (0x0)
	struct TArray<char> ByteArray;  // 0x10 (0x10)
	int32_t StaticSingleElement;  // 0x20 (0x20)
	int32_t StaticInt32Array[3];  // 0x24 (0x24)
	float StaticFloatArray[3];  // 0x30 (0x30)
	char pad_60[4];  // 0x3C (0x3C)
	struct TArray<struct FVector> VectorArray;  // 0x40 (0x40)
	struct TArray<struct FStructSerializerBuiltinTestStruct> StructArray;  // 0x50 (0x50)


}; 
 
 // ScriptStruct Serialization.StructSerializerMapTestStruct
struct FStructSerializerMapTestStruct
{
	struct TMap<int32_t, struct FString> IntToStr;  // 0x0 (0x0)
	struct TMap<struct FString, struct FString> StrToStr;  // 0x50 (0x50)
	struct TMap<struct FString, struct FVector> StrToVec;  // 0xA0 (0xA0)
	struct TMap<struct FString, struct FStructSerializerBuiltinTestStruct> StrToStruct;  // 0xF0 (0xF0)


}; 
 
 // ScriptStruct Serialization.StructSerializerSetTestStruct
struct FStructSerializerSetTestStruct
{
	struct TSet<struct FString> StrSet;  // 0x0 (0x0)
	struct TSet<int32_t> IntSet;  // 0x50 (0x50)
	struct TSet<struct FName> NameSet;  // 0xA0 (0xA0)
	struct TSet<struct FStructSerializerBuiltinTestStruct> StructSet;  // 0xF0 (0xF0)


}; 
 
 // ScriptStruct Serialization.StructSerializerTestStruct
struct FStructSerializerTestStruct
{
	struct FStructSerializerNumericTestStruct Numerics;  // 0x0 (0x0)
	struct FStructSerializerBooleanTestStruct Booleans;  // 0x30 (0x30)
	char pad_51[5];  // 0x33 (0x33)
	struct FStructSerializerObjectTestStruct Objects;  // 0x38 (0x38)
	char pad_264[8];  // 0x108 (0x108)
	struct FStructSerializerBuiltinTestStruct Builtins;  // 0x110 (0x110)
	struct FStructSerializerArrayTestStruct Arrays;  // 0x1E0 (0x1E0)
	struct FStructSerializerMapTestStruct Maps;  // 0x240 (0x240)
	struct FStructSerializerSetTestStruct Sets;  // 0x380 (0x380)
	struct FStructSerializerLWCTypesTest LWCTypes;  // 0x4C0 (0x4C0)


}; 
 
 