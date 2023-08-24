#pragma once 
#include <CoreUObject_Structs.h>
 
 
 
// Class CoreUObject.UInt16Property
// Size: 0x70(Inherited: 0x70)
struct UUInt16Property : UNumericProperty
{


}; 
 
 


// Class CoreUObject.TextBuffer
// Size: 0x50(Inherited: 0x28)
struct UTextBuffer : UObject
{
	char pad_40[40];  // 0x28 (0x28)


}; 
 
 


// Class CoreUObject.ObjectPropertyBase
// Size: 0x78(Inherited: 0x70)
struct UObjectPropertyBase : UProperty
{
	char pad_112[8];  // 0x70 (0x70)


}; 
 
 


// Class CoreUObject.Object
struct UObject
{
	char pad_0[40];  // 0x0 (0x0)


	void ExecuteUbergraph(int32_t EntryPoint); // Function CoreUObject.Object.ExecuteUbergraph
}; 
 
 


// Class CoreUObject.Interface
// Size: 0x28(Inherited: 0x28)
struct UInterface : UObject
{


}; 
 
 


// Class CoreUObject.PropertyWrapper
// Size: 0x30(Inherited: 0x28)
struct UPropertyWrapper : UObject
{
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 


// Class CoreUObject.NumericProperty
// Size: 0x70(Inherited: 0x70)
struct UNumericProperty : UProperty
{


}; 
 
 


// Class CoreUObject.DynamicClass
// Size: 0x2B0(Inherited: 0x230)
struct UDynamicClass : UClass
{
	char pad_560[128];  // 0x230 (0x230)


}; 
 
 


// Class CoreUObject.Package
// Size: 0x90(Inherited: 0x28)
struct UPackage : UObject
{
	char pad_40[104];  // 0x28 (0x28)


}; 
 
 


// Class CoreUObject.GCObjectReferencer
// Size: 0x70(Inherited: 0x28)
struct UGCObjectReferencer : UObject
{
	char pad_40[72];  // 0x28 (0x28)


}; 
 
 


// Class CoreUObject.StrProperty
// Size: 0x70(Inherited: 0x70)
struct UStrProperty : UProperty
{


}; 
 
 


// Class CoreUObject.LazyObjectProperty
// Size: 0008(Inherited: 0x78)
struct ULazyObjectProperty : UObjectPropertyBase
{


}; 
 
 


// Class CoreUObject.Field
// Size: 0x30(Inherited: 0x28)
struct UField : UObject
{
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 


// Class CoreUObject.WeakObjectProperty
// Size: 0x78(Inherited: 0x78)
struct UWeakObjectProperty : UObjectPropertyBase
{


}; 
 
 


// Class CoreUObject.ArrayProperty
// Size: 0x78(Inherited: 0x70)
struct UArrayProperty : UProperty
{
	char pad_112[8];  // 0x70 (0x70)


}; 
 
 


// Class CoreUObject.EnumProperty
// Size: 0x80(Inherited: 0x70)
struct UEnumProperty : UProperty
{
	char pad_112[16];  // 0x70 (0x70)


}; 
 
 


// Class CoreUObject.Class
// Size: 0x230(Inherited: 0xB0)
struct UClass : UStruct
{
	char pad_176[384];  // 0xB0 (0xB0)


}; 
 
 


// Class CoreUObject.Struct
// Size: 0xB0(Inherited: 0x30)
struct UStruct : UField
{
	char pad_48[128];  // [x30 ([x30)


}; 
 
 


// Class CoreUObject.SoftClassProperty
// Size: 0x80(Inherited: 0x78)
struct USoftClassProperty : USoftObjectProperty
{
	char pad_120[8];  // 0x78 (0x78)


}; 
 
 


// Class CoreUObject.NameProperty
// Size: 0x70(Inherited: 0x70)
struct UNameProperty : UProperty
{


}; 
 
 


// Class CoreUObject.InterfaceProperty
// Size: 0x78(Inherited: 0x70)
struct UInterfaceProperty : UProperty
{
	char pad_112[8];  // 0x70 (0x70)


}; 
 
 


// Class CoreUObject.ScriptStruct
// Size: 0xC0(Inherited: 0xB0)
struct UScriptStruct : UStruct
{
	char pad_176[16];  // 0xB0 (0xB0)


}; 
 
 


// Class CoreUObject.Function
// Size: 0xE0(Inherited: 0xB0)
struct UFunction : UStruct
{
	char pad_176[48];  // 0xB0 (0xB0)


}; 
 
 


// Class CoreUObject.DelegateFunction
// Size: 0xE0(Inherited: 0xE0)
struct UDelegateFunction : UFunction
{


}; 
 
 


// Class CoreUObject.SparseDelegateFunction
// Size: 0xF0(Inherited: 0xE0)
struct USparseDelegateFunction : UDelegateFunction
{
	char pad_224[16];  // 0xE0 (0xE0)


}; 
 
 


// Class CoreUObject.MulticastInlineDelegateProperty
// Size: 0x78(Inherited: 0x78)
struct UMulticastInlineDelegateProperty : UMulticastDelegateProperty
{


}; 
 
 


// Class CoreUObject.PackageMap
// Size: 0xE0(Inherited: 0x28)
struct UPackageMap : UObject
{
	char pad_40[184];  // 0x28 (0x28)


}; 
 
 


// Class CoreUObject.ByteProperty
// Size: 0x78(Inherited: 0x70)
struct UByteProperty : UNumericProperty
{
	char pad_112[8];  // 0x70 (0x70)


}; 
 
 


// Class CoreUObject.Enum
// Size: 0x68(Inherited: 0x30)
struct UEnum : UField
{
	char pad_48[56];  // 0x30 (0x30)


}; 
 
 


// Class CoreUObject.LinkerPlaceholderClass
// Size: 0x3F0(Inherited: 0x230)
struct ULinkerPlaceholderClass : UClass
{
	char pad_560[448];  // 0x230 (0x230)


}; 
 
 


// Class CoreUObject.LinkerPlaceholderExportObject
// Size: 0xF8(Inherited: 0x28)
struct ULinkerPlaceholderExportObject : UObject
{
	char pad_40[208];  // 0x28 (0x28)


}; 
 
 


// Class CoreUObject.LinkerPlaceholderFunction
// Size: 0x2A0(Inherited: 0xE0)
struct ULinkerPlaceholderFunction : UFunction
{
	char pad_224[448];  // 0xE0 (0xE0)


}; 
 
 


// Class CoreUObject.MapProperty
// Size: 0x98(Inherited: 0x70)
struct UMapProperty : UProperty
{
	char pad_112[40];  // 0x70 (0x70)


}; 
 
 


// Class CoreUObject.MetaData
// Size: 0xC8(Inherited: 0x28)
struct UMetaData : UObject
{
	char pad_40[160];  // 0x28 (0x28)


}; 
 
 


// Class CoreUObject.FloatProperty
// Size: 0x70(Inherited: 0x70)
struct UFloatProperty : UNumericProperty
{


}; 
 
 


// Class CoreUObject.ObjectRedirector
// Size: 0x30(Inherited: 0x28)
struct UObjectRedirector : UObject
{
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 


// Class CoreUObject.Property
// Size: 0x70(Inherited: 0x30)
struct UProperty : UField
{
	char pad_48[64];  // 0x30 (0x30)


}; 
 
 


// Class CoreUObject.BoolProperty
// Size: 0x78(Inherited: 0x70)
struct UBoolProperty : UProperty
{
	char pad_112[8];  // 0x70 (0x70)


}; 
 
 


// Class CoreUObject.ObjectProperty
// Size: 0x78(Inherited: 0x78)
struct UObjectProperty : UObjectPropertyBase
{


}; 
 
 


// Class CoreUObject.ClassProperty
// Size: 0x80(Inherited: 0x78)
struct UClassProperty : UObjectProperty
{
	char pad_120[8];  // 0x78 (0x78)


}; 
 
 


// Class CoreUObject.TextProperty
// Size: 0x70(Inherited: 0x70)
struct UTextProperty : UProperty
{


}; 
 
 


// Class CoreUObject.DelegateProperty
// Size: 0x78(Inherited: 0x70)
struct UDelegateProperty : UProperty
{
	char pad_112[8];  // 0x70 (0x70)


}; 
 
 


// Class CoreUObject.DoubleProperty
// Size: 0x70(Inherited: 0x70)
struct UDoubleProperty : UNumericProperty
{


}; 
 
 


// Class CoreUObject.IntProperty
// Size: 0x70(Inherited: 0x70)
struct UIntProperty : UNumericProperty
{


}; 
 
 


// Class CoreUObject.MulticastSparseDelegateProperty
// Size: 0x78(Inherited: 0x78)
struct UMulticastSparseDelegateProperty : UMulticastDelegateProperty
{


}; 
 
 


// Class CoreUObject.Int8Property
// Size: 0x70(Inherited: 0x70)
struct UInt8Property : UNumericProperty
{


}; 
 
 


// Class CoreUObject.Int16Property
// Size: 0x70(Inherited: 0x70)
struct UInt16Property : UNumericProperty
{


}; 
 
 


// Class CoreUObject.Int64Property
// Size: 0x70(Inherited: 0x70)
struct UInt64Property : UNumericProperty
{


}; 
 
 


// Class CoreUObject.UInt64Property
// Size: 0x70(Inherited: 0x70)
struct UUInt64Property : UNumericProperty
{


}; 
 
 


// Class CoreUObject.StructProperty
// Size: 0x78(Inherited: 0x70)
struct UStructProperty : UProperty
{
	char pad_112[8];  // 0x70 (0x70)


}; 
 
 


// Class CoreUObject.MulticastDelegateProperty
// Size: 0x78(Inherited: 0x70)
struct UMulticastDelegateProperty : UProperty
{
	char pad_112[8];  // 0x70 (0x70)


}; 
 
 


// Class CoreUObject.SetProperty
// Size: 0x90(Inherited: 0x70)
struct USetProperty : UProperty
{
	char pad_112[32];  // 0x70 (0x70)


}; 
 
 


// Class CoreUObject.SoftObjectProperty
// Size: 0x78(Inherited: 0x78)
struct USoftObjectProperty : UObjectPropertyBase
{


}; 
 
 


// Class CoreUObject.UInt32Property
// Size: 0x70(Inherited: 0x70)
struct UUInt32Property : UNumericProperty
{


}; 
 
 


// Class CoreUObject.MulticastDelegatePropertyWrapper
// Size: 0x30(Inherited: 0x30)
struct UMulticastDelegatePropertyWrapper : UPropertyWrapper
{


}; 
 
 


// Class CoreUObject.MulticastInlineDelegatePropertyWrapper
// Size: 0x30(Inherited: 0x30)
struct UMulticastInlineDelegatePropertyWrapper : UMulticastDelegatePropertyWrapper
{


}; 
 
 


