#pragma once 
#include <TcpSocketPlugin_Structs.h>
 
 
 
// Class TcpSocketPlugin.TcpSocket
// Size: 0x50(Inherited: 0x28)
struct UTcpSocket : UObject
{
	char pad_40[40];  // 0x28 (0x28)


}; 
 
 


// Class TcpSocketPlugin.TcpSocketSettings
// Size: 0x30(Inherited: 0x28)
struct UTcpSocketSettings : UObject
{
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool bPostErrorsToMessageLog : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)


}; 
 
 


