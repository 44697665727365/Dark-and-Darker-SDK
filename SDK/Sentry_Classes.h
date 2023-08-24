#pragma once 
#include <Sentry_Structs.h>
 
 
 
// Class Sentry.SentrySettings
// Size: 0xB0(Inherited: 0x28)
struct USentrySettings : UObject
{
	struct FString DsnUrl;  // 0x28 (0x28)
	struct FString Release;  // 0x38 (0x38)
	struct FString Environment;  // 0x48 (0x48)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool InitAutomatically : 1;  // 0x58 (0x58)
	char pad_89_1 : 7;  // 0x59 (0x59)
	bool EnableVerboseLogging : 1;  // 0x59 (0x59)
	struct FAutomaticBreadcrumbs AutomaticBreadcrumbs;  // 0x5A (0x5A)
	struct FTagsPromotion TagsPromotion;  // 0x5F (0x5F)
	char pad_101_1 : 7;  // 0x65 (0x65)
	bool EnableAutoCrashCapturing : 1;  // 0x65 (0x65)
	char pad_102_1 : 7;  // 0x66 (0x66)
	bool UploadSymbolsAutomatically : 1;  // 0x66 (0x66)
	char pad_103[1];  // 0x67 (0x67)
	struct FString ProjectName;  // 0x68 (0x68)
	struct FString OrgName;  // 0x78 (0x78)
	struct FString AuthToken;  // 0x88 (0x88)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool IncludeSources : 1;  // 0x98 (0x98)
	char pad_153[7];  // 0x99 (0x99)
	struct FString CrashReporterUrl;  // 0xA0 (0xA0)


}; 
 
 


// Class Sentry.SentryId
// Size: 0x38(Inherited: 0x28)
struct USentryId : UObject
{
	char pad_40[16];  // 0x28 (0x28)


	struct FString ToString(); // Function Sentry.SentryId.ToString
}; 
 
 


// Class Sentry.SentryBreadcrumb
// Size: 0x38(Inherited: 0x28)
struct USentryBreadcrumb : UObject
{
	char pad_40[16];  // 0x28 (0x28)


	void SetType(struct FString Type); // Function Sentry.SentryBreadcrumb.SetType
	void SetMessage(struct FString Message); // Function Sentry.SentryBreadcrumb.SetMessage
	void SetLevel(uint8_t Level); // Function Sentry.SentryBreadcrumb.SetLevel
	void SetData(struct TMap<struct FString, struct FString>& Data); // Function Sentry.SentryBreadcrumb.SetData
	void SetCategory(struct FString Category); // Function Sentry.SentryBreadcrumb.SetCategory
	struct FString GetType(); // Function Sentry.SentryBreadcrumb.GetType
	struct FString GetMessage(); // Function Sentry.SentryBreadcrumb.GetMessage
	uint8_t GetLevel(); // Function Sentry.SentryBreadcrumb.GetLevel
	struct TMap<struct FString, struct FString> GetData(); // Function Sentry.SentryBreadcrumb.GetData
	struct FString GetCategory(); // Function Sentry.SentryBreadcrumb.GetCategory
}; 
 
 


// Class Sentry.SentryAttachment
// Size: 0x38(Inherited: 0x28)
struct USentryAttachment : UObject
{
	char pad_40[16];  // 0x28 (0x28)


	void InitializeWithPath(struct FString Path, struct FString Filename, struct FString ContentType); // Function Sentry.SentryAttachment.InitializeWithPath
	void InitializeWithData(struct TArray<char>& Data, struct FString Filename, struct FString ContentType); // Function Sentry.SentryAttachment.InitializeWithData
	struct FString GetPath(); // Function Sentry.SentryAttachment.GetPath
	struct FString GetFilename(); // Function Sentry.SentryAttachment.GetFilename
	struct TArray<char> GetData(); // Function Sentry.SentryAttachment.GetData
	struct FString GetContentType(); // Function Sentry.SentryAttachment.GetContentType
}; 
 
 


// Class Sentry.SentryEvent
// Size: 0x38(Inherited: 0x28)
struct USentryEvent : UObject
{
	char pad_40[16];  // 0x28 (0x28)


	void SetMessage(struct FString Message); // Function Sentry.SentryEvent.SetMessage
	void SetLevel(uint8_t Level); // Function Sentry.SentryEvent.SetLevel
	struct FString GetMessage(); // Function Sentry.SentryEvent.GetMessage
	uint8_t GetLevel(); // Function Sentry.SentryEvent.GetLevel
}; 
 
 


// Class Sentry.SentryScope
// Size: 0x38(Inherited: 0x28)
struct USentryScope : UObject
{
	char pad_40[16];  // 0x28 (0x28)


	void SetTagValue(struct FString Key, struct FString Value); // Function Sentry.SentryScope.SetTagValue
	void SetTags(struct TMap<struct FString, struct FString>& Tags); // Function Sentry.SentryScope.SetTags
	void SetLevel(uint8_t Level); // Function Sentry.SentryScope.SetLevel
	void SetFingerprint(struct TArray<struct FString>& Fingerprint); // Function Sentry.SentryScope.SetFingerprint
	void SetExtraValue(struct FString Key, struct FString Value); // Function Sentry.SentryScope.SetExtraValue
	void SetExtras(struct TMap<struct FString, struct FString>& Extras); // Function Sentry.SentryScope.SetExtras
	void SetEnvironment(struct FString Environment); // Function Sentry.SentryScope.SetEnvironment
	void SetDist(struct FString Dist); // Function Sentry.SentryScope.SetDist
	void SetContext(struct FString Key, struct TMap<struct FString, struct FString>& Values); // Function Sentry.SentryScope.SetContext
	void RemoveTag(struct FString Key); // Function Sentry.SentryScope.RemoveTag
	void RemoveExtra(struct FString Key); // Function Sentry.SentryScope.RemoveExtra
	void RemoveContext(struct FString Key); // Function Sentry.SentryScope.RemoveContext
	struct FString GetTagValue(struct FString Key); // Function Sentry.SentryScope.GetTagValue
	struct TMap<struct FString, struct FString> GetTags(); // Function Sentry.SentryScope.GetTags
	uint8_t GetLevel(); // Function Sentry.SentryScope.GetLevel
	struct TArray<struct FString> GetFingerprint(); // Function Sentry.SentryScope.GetFingerprint
	struct FString GetExtraValue(struct FString Key); // Function Sentry.SentryScope.GetExtraValue
	struct TMap<struct FString, struct FString> GetExtras(); // Function Sentry.SentryScope.GetExtras
	struct FString GetEnvironment(); // Function Sentry.SentryScope.GetEnvironment
	struct FString GetDist(); // Function Sentry.SentryScope.GetDist
	void ClearBreadcrumbs(); // Function Sentry.SentryScope.ClearBreadcrumbs
	void ClearAttachments(); // Function Sentry.SentryScope.ClearAttachments
	void Clear(); // Function Sentry.SentryScope.Clear
	void AddBreadcrumb(struct USentryBreadcrumb* Breadcrumb); // Function Sentry.SentryScope.AddBreadcrumb
	void AddAttachment(struct USentryAttachment* Attachment); // Function Sentry.SentryScope.AddAttachment
}; 
 
 


// Class Sentry.SentrySubsystem
// Size: 0x68(Inherited: 0x30)
struct USentrySubsystem : UGameInstanceSubsystem
{
	char pad_48[56];  // 0x30 (0x30)


	void SetUser(struct USentryUser* User); // Function Sentry.SentrySubsystem.SetUser
	void SetTag(struct FString Key, struct FString Value); // Function Sentry.SentrySubsystem.SetTag
	void SetLevel(uint8_t Level); // Function Sentry.SentrySubsystem.SetLevel
	void SetContext(struct FString Key, struct TMap<struct FString, struct FString>& Values); // Function Sentry.SentrySubsystem.SetContext
	void RemoveUser(); // Function Sentry.SentrySubsystem.RemoveUser
	void RemoveTag(struct FString Key); // Function Sentry.SentrySubsystem.RemoveTag
	void InitializeWithSettings(struct FDelegate& OnConfigureSettings); // Function Sentry.SentrySubsystem.InitializeWithSettings
	void Initialize(); // Function Sentry.SentrySubsystem.Initialize
	void ConfigureScope(struct FDelegate& OnConfigureScope); // Function Sentry.SentrySubsystem.ConfigureScope
	void Close(); // Function Sentry.SentrySubsystem.Close
	void ClearBreadcrumbs(); // Function Sentry.SentrySubsystem.ClearBreadcrumbs
	void CaptureUserFeedbackWithParams(struct USentryId* EventId, struct FString Email, struct FString Comments, struct FString Name); // Function Sentry.SentrySubsystem.CaptureUserFeedbackWithParams
	void CaptureUserFeedback(struct USentryUserFeedback* UserFeedback); // Function Sentry.SentrySubsystem.CaptureUserFeedback
	struct USentryId* CaptureMessageWithScope(struct FString Message, struct FDelegate& OnConfigureScope, uint8_t Level); // Function Sentry.SentrySubsystem.CaptureMessageWithScope
	struct USentryId* CaptureMessage(struct FString Message, uint8_t Level); // Function Sentry.SentrySubsystem.CaptureMessage
	struct USentryId* CaptureEventWithScope(struct USentryEvent* Event, struct FDelegate& OnConfigureScope); // Function Sentry.SentrySubsystem.CaptureEventWithScope
	struct USentryId* CaptureEvent(struct USentryEvent* Event); // Function Sentry.SentrySubsystem.CaptureEvent
	void AddBreadcrumbWithParams(struct FString Message, struct FString Category, struct FString Type, struct TMap<struct FString, struct FString>& Data, uint8_t Level); // Function Sentry.SentrySubsystem.AddBreadcrumbWithParams
	void AddBreadcrumb(struct USentryBreadcrumb* Breadcrumb); // Function Sentry.SentrySubsystem.AddBreadcrumb
}; 
 
 


// Class Sentry.SentryLibrary
// Size: 0x28(Inherited: 0x28)
struct USentryLibrary : UBlueprintFunctionLibrary
{


	struct TArray<char> StringToBytesArray(struct FString InString); // Function Sentry.SentryLibrary.StringToBytesArray
	struct FString SaveStringToFile(struct FString InString, struct FString Filename); // Function Sentry.SentryLibrary.SaveStringToFile
	struct USentryUserFeedback* CreateSentryUserFeedback(struct USentryId* EventId, struct FString Name, struct FString Email, struct FString Comments); // Function Sentry.SentryLibrary.CreateSentryUserFeedback
	struct USentryUser* CreateSentryUser(struct FString Email, struct FString ID, struct FString UserName, struct FString IpAddress, struct TMap<struct FString, struct FString>& Data); // Function Sentry.SentryLibrary.CreateSentryUser
	struct USentryEvent* CreateSentryEvent(struct FString Message, uint8_t Level); // Function Sentry.SentryLibrary.CreateSentryEvent
	struct USentryBreadcrumb* CreateSentryBreadcrumb(struct FString Message, struct FString Type, struct FString Category, struct TMap<struct FString, struct FString>& Data, uint8_t Level); // Function Sentry.SentryLibrary.CreateSentryBreadcrumb
	struct USentryAttachment* CreateSentryAttachmentWithPath(struct FString Path, struct FString Filename, struct FString ContentType); // Function Sentry.SentryLibrary.CreateSentryAttachmentWithPath
	struct USentryAttachment* CreateSentryAttachmentWithData(struct TArray<char>& Data, struct FString Filename, struct FString ContentType); // Function Sentry.SentryLibrary.CreateSentryAttachmentWithData
	struct FString ByteArrayToString(struct TArray<char>& Array); // Function Sentry.SentryLibrary.ByteArrayToString
}; 
 
 


// Class Sentry.SentryUser
// Size: 0x38(Inherited: 0x28)
struct USentryUser : UObject
{
	char pad_40[16];  // 0x28 (0x28)


	void SetUsername(struct FString UserName); // Function Sentry.SentryUser.SetUsername
	void SetIpAddress(struct FString IpAddress); // Function Sentry.SentryUser.SetIpAddress
	void SetId(struct FString ID); // Function Sentry.SentryUser.SetId
	void SetEmail(struct FString Email); // Function Sentry.SentryUser.SetEmail
	void SetData(struct TMap<struct FString, struct FString>& Data); // Function Sentry.SentryUser.SetData
	struct FString GetUsername(); // Function Sentry.SentryUser.GetUsername
	struct FString GetIpAddress(); // Function Sentry.SentryUser.GetIpAddress
	struct FString GetId(); // Function Sentry.SentryUser.GetId
	struct FString GetEmail(); // Function Sentry.SentryUser.GetEmail
	struct TMap<struct FString, struct FString> GetData(); // Function Sentry.SentryUser.GetData
}; 
 
 


// Class Sentry.SentryUserFeedback
// Size: 0x38(Inherited: 0x28)
struct USentryUserFeedback : UObject
{
	char pad_40[16];  // 0x28 (0x28)


	void SetName(struct FString Name); // Function Sentry.SentryUserFeedback.SetName
	void SetEmail(struct FString Email); // Function Sentry.SentryUserFeedback.SetEmail
	void SetComment(struct FString Comments); // Function Sentry.SentryUserFeedback.SetComment
	void Initialize(struct USentryId* EventId); // Function Sentry.SentryUserFeedback.Initialize
	struct FString GetName(); // Function Sentry.SentryUserFeedback.GetName
	struct FString GetEmail(); // Function Sentry.SentryUserFeedback.GetEmail
	struct FString GetComment(); // Function Sentry.SentryUserFeedback.GetComment
}; 
 
 


