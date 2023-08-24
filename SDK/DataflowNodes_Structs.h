#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct DataflowNodes.SkeletalMeshBoneDataflowNode
// Size: 0xE8(Inherited: 0xD0)
struct FSkeletalMeshBoneDataflowNode : FDataflowNode
{
	struct FName BoneName;  // 0xD0 (0xD0)
	struct USkeletalMesh* SkeletalMesh;  // 0xD8 (0xD8)
	int32_t BoneIndexOut;  // 0xE0 (0xE0)
	char pad_228[4];  // 0xE4 (0xE4)


}; 
 
 // ScriptStruct DataflowNodes.GetSkeletalMeshDataflowNode
// Size: 0xE0(Inherited: 0xD0)
struct FGetSkeletalMeshDataflowNode : FDataflowNode
{
	struct USkeletalMesh* SkeletalMesh;  // 0xD0 (0xD0)
	struct FName PropertyName;  // 0xD8 (0xD8)


}; 
 
 // ScriptStruct DataflowNodes.GetStaticMeshDataflowNode
// Size: 0xE0(Inherited: 0xD0)
struct FGetStaticMeshDataflowNode : FDataflowNode
{
	struct UStaticMesh* StaticMesh;  // 0xD0 (0xD0)
	struct FName PropertyName;  // 0xD8 (0xD8)


}; 
 
 