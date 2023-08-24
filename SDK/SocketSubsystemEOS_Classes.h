#pragma once 
#include <SocketSubsystemEOS_Structs.h>
 
 
 
// Class SocketSubsystemEOS.NetConnectionEOS
// Size: 0x33A0(Inherited: 0x33A0)
struct UNetConnectionEOS : UIpConnection
{


}; 
 
 


// Class SocketSubsystemEOS.NetDriverEOSBase
// Size: 0x848(Inherited: 0x840)
struct UNetDriverEOSBase : UIpNetDriver
{
	char pad_2112_1 : 7;  // 0x840 (0x840)
	bool bIsPassthrough : 1;  // 0x840 (0x840)
	char pad_2113_1 : 7;  // 0x841 (0x841)
	bool bIsUsingP2PSockets : 1;  // 0x841 (0x841)
	char pad_2114[6];  // 0x842 (0x842)


}; 
 
 


