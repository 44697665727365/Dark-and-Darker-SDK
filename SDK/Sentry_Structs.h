#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function Sentry.SentrySubsystem.AddBreadcrumbWithParams
struct FAddBreadcrumbWithParams
{
	struct FString Message;  // 0x0 (0x0)
	struct FString Category;  // 0x10 (0x10)
	struct FString Type;  // 0x20 (0x20)
	struct TMap<struct FString, struct FString> Data;  // 0x30 (0x30)
	uint8_t Level;  // 0x80 (0x80)
	char pad_129[7];  // 0x81 (0x81)


}; 
 
 // Function Sentry.SentryUser.GetData
struct FGetData
{
	struct TMap<struct FString, struct FString> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryBreadcrumb.SetCategory
struct FSetCategory
{
	struct FString Category;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryBreadcrumb.GetType
struct FGetType
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentrySubsystem.CaptureUserFeedbackWithParams
struct FCaptureUserFeedbackWithParams
{
	struct USentryId* EventId;  // 0x0 (0x0)
	struct FString Email;  // 0x8 (0x8)
	struct FString Comments;  // 0x18 (0x18)
	struct FString Name;  // 0x28 (0x28)


}; 
 
 // Function Sentry.SentryUser.GetUsername
struct FGetUsername
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryScope.GetDist
struct FGetDist
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // DelegateFunction Sentry.ConfigureScopeDelegate__DelegateSignature
struct FConfigureScopeDelegate__DelegateSignature
{
	struct USentryScope* Scope;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryUser.GetId
struct FGetId
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryAttachment.GetFilename
struct FGetFilename
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryScope.GetTagValue
struct FGetTagValue
{
	struct FString Key;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x10 (0x10)


}; 
 
 // DelegateFunction Sentry.ConfigureSettingsDelegate__DelegateSignature
struct FConfigureSettingsDelegate__DelegateSignature
{
	struct USentrySettings* Settings;  // 0x0 (0x0)


}; 
 
 // ScriptStruct Sentry.AutomaticBreadcrumbs
struct FAutomaticBreadcrumbs
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bOnMapLoadingStarted : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bOnMapLoaded : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool bOnGameStateClassChanged : 1;  // 0x2 (0x2)
	char pad_3_1 : 7;  // 0x3 (0x3)
	bool bOnGameSessionIDChanged : 1;  // 0x3 (0x3)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bOnUserActivityStringChanged : 1;  // 0x4 (0x4)


}; 
 
 // Function Sentry.SentrySubsystem.ConfigureScope
struct FConfigureScope
{
	struct FDelegate OnConfigureScope;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentrySubsystem.CaptureEventWithScope
struct FCaptureEventWithScope
{
	struct USentryEvent* Event;  // 0x0 (0x0)
	struct FDelegate OnConfigureScope;  // 0x8 (0x8)
	struct USentryId* ReturnValue;  // 0x18 (0x18)


}; 
 
 // ScriptStruct Sentry.TagsPromotion
struct FTagsPromotion
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bPromoteBuildConfiguration : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bPromoteTargetType : 1;  // 0x1 (0x1)
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool bPromoteEngineMode : 1;  // 0x2 (0x2)
	char pad_3_1 : 7;  // 0x3 (0x3)
	bool bPromoteIsGame : 1;  // 0x3 (0x3)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool bPromoteIsStandalone : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool bPromoteIsUnattended : 1;  // 0x5 (0x5)


}; 
 
 // Function Sentry.SentryUserFeedback.SetName
struct FSetName
{
	struct FString Name;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryScope.GetExtraValue
struct FGetExtraValue
{
	struct FString Key;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Sentry.SentryScope.GetExtras
struct FGetExtras
{
	struct TMap<struct FString, struct FString> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryAttachment.GetPath
struct FGetPath
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryAttachment.GetContentType
struct FGetContentType
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryAttachment.InitializeWithData
struct FInitializeWithData
{
	struct TArray<char> Data;  // 0x0 (0x0)
	struct FString Filename;  // 0x10 (0x10)
	struct FString ContentType;  // 0x20 (0x20)


}; 
 
 // Function Sentry.SentryAttachment.InitializeWithPath
struct FInitializeWithPath
{
	struct FString Path;  // 0x0 (0x0)
	struct FString Filename;  // 0x10 (0x10)
	struct FString ContentType;  // 0x20 (0x20)


}; 
 
 // Function Sentry.SentrySubsystem.CaptureEvent
struct FCaptureEvent
{
	struct USentryEvent* Event;  // 0x0 (0x0)
	struct USentryId* ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function Sentry.SentryBreadcrumb.GetCategory
struct FGetCategory
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryScope.GetLevel
struct FGetLevel
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryLibrary.CreateSentryEvent
struct FCreateSentryEvent
{
	struct FString Message;  // 0x0 (0x0)
	uint8_t Level;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct USentryEvent* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function Sentry.SentryEvent.GetMessage
struct FGetMessage
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryUser.SetData
struct FSetData
{
	struct TMap<struct FString, struct FString> Data;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryScope.SetDist
struct FSetDist
{
	struct FString Dist;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentrySubsystem.RemoveTag
struct FRemoveTag
{
	struct FString Key;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentrySubsystem.SetLevel
struct FSetLevel
{
	uint8_t Level;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryScope.GetTags
struct FGetTags
{
	struct TMap<struct FString, struct FString> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryEvent.SetMessage
struct FSetMessage
{
	struct FString Message;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryBreadcrumb.SetType
struct FSetType
{
	struct FString Type;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryLibrary.StringToBytesArray
struct FStringToBytesArray
{
	struct FString InString;  // 0x0 (0x0)
	struct TArray<char> ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Sentry.SentryId.ToString
struct FToString
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryLibrary.CreateSentryAttachmentWithPath
struct FCreateSentryAttachmentWithPath
{
	struct FString Path;  // 0x0 (0x0)
	struct FString Filename;  // 0x10 (0x10)
	struct FString ContentType;  // 0x20 (0x20)
	struct USentryAttachment* ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function Sentry.SentryLibrary.ByteArrayToString
struct FByteArrayToString
{
	struct TArray<char> Array;  // 0x0 (0x0)
	struct FString ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function Sentry.SentryLibrary.CreateSentryAttachmentWithData
struct FCreateSentryAttachmentWithData
{
	struct TArray<char> Data;  // 0x0 (0x0)
	struct FString Filename;  // 0x10 (0x10)
	struct FString ContentType;  // 0x20 (0x20)
	struct USentryAttachment* ReturnValue;  // 0x30 (0x30)


}; 
 
 // Function Sentry.SentryLibrary.CreateSentryBreadcrumb
struct FCreateSentryBreadcrumb
{
	struct FString Message;  // 0x0 (0x0)
	struct FString Type;  // 0x10 (0x10)
	struct FString Category;  // 0x20 (0x20)
	struct TMap<struct FString, struct FString> Data;  // 0x30 (0x30)
	uint8_t Level;  // 0x80 (0x80)
	char pad_129[7];  // 0x81 (0x81)
	struct USentryBreadcrumb* ReturnValue;  // 0x88 (0x88)


}; 
 
 // Function Sentry.SentryLibrary.CreateSentryUser
struct FCreateSentryUser
{
	struct FString Email;  // 0x0 (0x0)
	struct FString ID;  // 0x10 (0x10)
	struct FString UserName;  // 0x20 (0x20)
	struct FString IpAddress;  // 0x30 (0x30)
	struct TMap<struct FString, struct FString> Data;  // 0x40 (0x40)
	struct USentryUser* ReturnValue;  // 0x90 (0x90)


}; 
 
 // Function Sentry.SentryLibrary.CreateSentryUserFeedback
struct FCreateSentryUserFeedback
{
	struct USentryId* EventId;  // 0x0 (0x0)
	struct FString Name;  // 0x8 (0x8)
	struct FString Email;  // 0x18 (0x18)
	struct FString Comments;  // 0x28 (0x28)
	struct USentryUserFeedback* ReturnValue;  // 0x38 (0x38)


}; 
 
 // Function Sentry.SentrySubsystem.InitializeWithSettings
struct FInitializeWithSettings
{
	struct FDelegate OnConfigureSettings;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryLibrary.SaveStringToFile
struct FSaveStringToFile
{
	struct FString InString;  // 0x0 (0x0)
	struct FString Filename;  // 0x10 (0x10)
	struct FString ReturnValue;  // 0x20 (0x20)


}; 
 
 // Function Sentry.SentryScope.AddAttachment
struct FAddAttachment
{
	struct USentryAttachment* Attachment;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentrySubsystem.AddBreadcrumb
struct FAddBreadcrumb
{
	struct USentryBreadcrumb* Breadcrumb;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryScope.GetEnvironment
struct FGetEnvironment
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryScope.GetFingerprint
struct FGetFingerprint
{
	struct TArray<struct FString> ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryScope.SetExtraValue
struct FSetExtraValue
{
	struct FString Key;  // 0x0 (0x0)
	struct FString Value;  // 0x10 (0x10)


}; 
 
 // Function Sentry.SentryScope.RemoveContext
struct FRemoveContext
{
	struct FString Key;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryScope.RemoveExtra
struct FRemoveExtra
{
	struct FString Key;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentrySubsystem.SetContext
struct FSetContext
{
	struct FString Key;  // 0x0 (0x0)
	struct TMap<struct FString, struct FString> Values;  // 0x10 (0x10)


}; 
 
 // Function Sentry.SentrySubsystem.CaptureMessageWithScope
struct FCaptureMessageWithScope
{
	struct FString Message;  // 0x0 (0x0)
	struct FDelegate OnConfigureScope;  // 0x10 (0x10)
	uint8_t Level;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct USentryId* ReturnValue;  // 0x28 (0x28)


}; 
 
 // Function Sentry.SentryScope.SetEnvironment
struct FSetEnvironment
{
	struct FString Environment;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryScope.SetExtras
struct FSetExtras
{
	struct TMap<struct FString, struct FString> Extras;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentrySubsystem.CaptureUserFeedback
struct FCaptureUserFeedback
{
	struct USentryUserFeedback* UserFeedback;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryScope.SetFingerprint
struct FSetFingerprint
{
	struct TArray<struct FString> Fingerprint;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryScope.SetTags
struct FSetTags
{
	struct TMap<struct FString, struct FString> Tags;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryScope.SetTagValue
struct FSetTagValue
{
	struct FString Key;  // 0x0 (0x0)
	struct FString Value;  // 0x10 (0x10)


}; 
 
 // Function Sentry.SentrySubsystem.CaptureMessage
struct FCaptureMessage
{
	struct FString Message;  // 0x0 (0x0)
	uint8_t Level;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct USentryId* ReturnValue;  // 0x18 (0x18)


}; 
 
 // Function Sentry.SentrySubsystem.SetTag
struct FSetTag
{
	struct FString Key;  // 0x0 (0x0)
	struct FString Value;  // 0x10 (0x10)


}; 
 
 // Function Sentry.SentrySubsystem.SetUser
struct FSetUser
{
	struct USentryUser* User;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryUserFeedback.GetEmail
struct FGetEmail
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryUser.GetIpAddress
struct FGetIpAddress
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryUserFeedback.SetEmail
struct FSetEmail
{
	struct FString Email;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryUser.SetId
struct FSetId
{
	struct FString ID;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryUser.SetIpAddress
struct FSetIpAddress
{
	struct FString IpAddress;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryUser.SetUsername
struct FSetUsername
{
	struct FString UserName;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryUserFeedback.GetComment
struct FGetComment
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryUserFeedback.GetName
struct FGetName
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryUserFeedback.Initialize
struct FInitialize
{
	struct USentryId* EventId;  // 0x0 (0x0)


}; 
 
 // Function Sentry.SentryUserFeedback.SetComment
struct FSetComment
{
	struct FString Comments;  // 0x0 (0x0)


}; 
 
 