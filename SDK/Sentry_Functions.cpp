#include "pch.h"
#include "SDK.h"

struct FString USentryId::ToString(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryId.ToString");

	FToString parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USentryBreadcrumb::SetType(struct FString Type){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryBreadcrumb.SetType");

	FSetType parms{};	
	parms.Type = Type;

	ProcessEvent(fn, &parms);
}

void USentryBreadcrumb::SetMessage(struct FString Message){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryBreadcrumb.SetMessage");

	FSetMessage parms{};	
	parms.Message = Message;

	ProcessEvent(fn, &parms);
}

void USentryBreadcrumb::SetLevel(uint8_t Level){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryBreadcrumb.SetLevel");

	FSetLevel parms{};	
	parms.Level = Level;

	ProcessEvent(fn, &parms);
}

void USentryBreadcrumb::SetData(struct TMap<struct FString, struct FString>& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryBreadcrumb.SetData");

	FSetData parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void USentryBreadcrumb::SetCategory(struct FString Category){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryBreadcrumb.SetCategory");

	FSetCategory parms{};	
	parms.Category = Category;

	ProcessEvent(fn, &parms);
}

struct FString USentryBreadcrumb::GetType(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryBreadcrumb.GetType");

	FGetType parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString USentryBreadcrumb::GetMessage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryBreadcrumb.GetMessage");

	FGetMessage parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t USentryBreadcrumb::GetLevel(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryBreadcrumb.GetLevel");

	FGetLevel parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TMap<struct FString, struct FString> USentryBreadcrumb::GetData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryBreadcrumb.GetData");

	FGetData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString USentryBreadcrumb::GetCategory(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryBreadcrumb.GetCategory");

	FGetCategory parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USentryAttachment::InitializeWithPath(struct FString Path, struct FString Filename, struct FString ContentType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryAttachment.InitializeWithPath");

	FInitializeWithPath parms{};	
	parms.Path = Path;
	parms.Filename = Filename;
	parms.ContentType = ContentType;

	ProcessEvent(fn, &parms);
}

void USentryAttachment::InitializeWithData(struct TArray<char>& Data, struct FString Filename, struct FString ContentType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryAttachment.InitializeWithData");

	FInitializeWithData parms{};	
	parms.Data = Data;
	parms.Filename = Filename;
	parms.ContentType = ContentType;

	ProcessEvent(fn, &parms);
}

struct FString USentryAttachment::GetPath(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryAttachment.GetPath");

	FGetPath parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString USentryAttachment::GetFilename(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryAttachment.GetFilename");

	FGetFilename parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<char> USentryAttachment::GetData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryAttachment.GetData");

	FGetData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString USentryAttachment::GetContentType(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryAttachment.GetContentType");

	FGetContentType parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USentryEvent::SetMessage(struct FString Message){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryEvent.SetMessage");

	FSetMessage parms{};	
	parms.Message = Message;

	ProcessEvent(fn, &parms);
}

void USentryEvent::SetLevel(uint8_t Level){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryEvent.SetLevel");

	FSetLevel parms{};	
	parms.Level = Level;

	ProcessEvent(fn, &parms);
}

struct FString USentryEvent::GetMessage(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryEvent.GetMessage");

	FGetMessage parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t USentryEvent::GetLevel(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryEvent.GetLevel");

	FGetLevel parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USentryScope::SetTagValue(struct FString Key, struct FString Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.SetTagValue");

	FSetTagValue parms{};	
	parms.Key = Key;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void USentryScope::SetTags(struct TMap<struct FString, struct FString>& Tags){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.SetTags");

	FSetTags parms{};	
	parms.Tags = Tags;

	ProcessEvent(fn, &parms);
}

void USentryScope::SetLevel(uint8_t Level){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.SetLevel");

	FSetLevel parms{};	
	parms.Level = Level;

	ProcessEvent(fn, &parms);
}

void USentryScope::SetFingerprint(struct TArray<struct FString>& Fingerprint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.SetFingerprint");

	FSetFingerprint parms{};	
	parms.Fingerprint = Fingerprint;

	ProcessEvent(fn, &parms);
}

void USentryScope::SetExtraValue(struct FString Key, struct FString Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.SetExtraValue");

	FSetExtraValue parms{};	
	parms.Key = Key;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void USentryScope::SetExtras(struct TMap<struct FString, struct FString>& Extras){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.SetExtras");

	FSetExtras parms{};	
	parms.Extras = Extras;

	ProcessEvent(fn, &parms);
}

void USentryScope::SetEnvironment(struct FString Environment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.SetEnvironment");

	FSetEnvironment parms{};	
	parms.Environment = Environment;

	ProcessEvent(fn, &parms);
}

void USentryScope::SetDist(struct FString Dist){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.SetDist");

	FSetDist parms{};	
	parms.Dist = Dist;

	ProcessEvent(fn, &parms);
}

void USentryScope::SetContext(struct FString Key, struct TMap<struct FString, struct FString>& Values){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.SetContext");

	FSetContext parms{};	
	parms.Key = Key;
	parms.Values = Values;

	ProcessEvent(fn, &parms);
}

void USentryScope::RemoveTag(struct FString Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.RemoveTag");

	FRemoveTag parms{};	
	parms.Key = Key;

	ProcessEvent(fn, &parms);
}

void USentryScope::RemoveExtra(struct FString Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.RemoveExtra");

	FRemoveExtra parms{};	
	parms.Key = Key;

	ProcessEvent(fn, &parms);
}

void USentryScope::RemoveContext(struct FString Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.RemoveContext");

	FRemoveContext parms{};	
	parms.Key = Key;

	ProcessEvent(fn, &parms);
}

struct FString USentryScope::GetTagValue(struct FString Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.GetTagValue");

	FGetTagValue parms{};	
	parms.Key = Key;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TMap<struct FString, struct FString> USentryScope::GetTags(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.GetTags");

	FGetTags parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

uint8_t USentryScope::GetLevel(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.GetLevel");

	FGetLevel parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TArray<struct FString> USentryScope::GetFingerprint(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.GetFingerprint");

	FGetFingerprint parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString USentryScope::GetExtraValue(struct FString Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.GetExtraValue");

	FGetExtraValue parms{};	
	parms.Key = Key;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TMap<struct FString, struct FString> USentryScope::GetExtras(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.GetExtras");

	FGetExtras parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString USentryScope::GetEnvironment(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.GetEnvironment");

	FGetEnvironment parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString USentryScope::GetDist(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.GetDist");

	FGetDist parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USentryScope::ClearBreadcrumbs(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.ClearBreadcrumbs");

	FClearBreadcrumbs parms{};	

	ProcessEvent(fn, &parms);
}

void USentryScope::ClearAttachments(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.ClearAttachments");

	FClearAttachments parms{};	

	ProcessEvent(fn, &parms);
}

void USentryScope::Clear(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.Clear");

	FClear parms{};	

	ProcessEvent(fn, &parms);
}

void USentryScope::AddBreadcrumb(struct USentryBreadcrumb* Breadcrumb){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.AddBreadcrumb");

	FAddBreadcrumb parms{};	
	parms.Breadcrumb = Breadcrumb;

	ProcessEvent(fn, &parms);
}

void USentryScope::AddAttachment(struct USentryAttachment* Attachment){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryScope.AddAttachment");

	FAddAttachment parms{};	
	parms.Attachment = Attachment;

	ProcessEvent(fn, &parms);
}

void USentrySubsystem::SetUser(struct USentryUser* User){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.SetUser");

	FSetUser parms{};	
	parms.User = User;

	ProcessEvent(fn, &parms);
}

void USentrySubsystem::SetTag(struct FString Key, struct FString Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.SetTag");

	FSetTag parms{};	
	parms.Key = Key;
	parms.Value = Value;

	ProcessEvent(fn, &parms);
}

void USentrySubsystem::SetLevel(uint8_t Level){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.SetLevel");

	FSetLevel parms{};	
	parms.Level = Level;

	ProcessEvent(fn, &parms);
}

void USentrySubsystem::SetContext(struct FString Key, struct TMap<struct FString, struct FString>& Values){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.SetContext");

	FSetContext parms{};	
	parms.Key = Key;
	parms.Values = Values;

	ProcessEvent(fn, &parms);
}

void USentrySubsystem::RemoveUser(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.RemoveUser");

	FRemoveUser parms{};	

	ProcessEvent(fn, &parms);
}

void USentrySubsystem::RemoveTag(struct FString Key){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.RemoveTag");

	FRemoveTag parms{};	
	parms.Key = Key;

	ProcessEvent(fn, &parms);
}

void USentrySubsystem::InitializeWithSettings(struct FDelegate& OnConfigureSettings){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.InitializeWithSettings");

	FInitializeWithSettings parms{};	
	parms.OnConfigureSettings = OnConfigureSettings;

	ProcessEvent(fn, &parms);
}

void USentrySubsystem::Initialize(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.Initialize");

	FInitialize parms{};	

	ProcessEvent(fn, &parms);
}

void USentrySubsystem::ConfigureScope(struct FDelegate& OnConfigureScope){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.ConfigureScope");

	FConfigureScope parms{};	
	parms.OnConfigureScope = OnConfigureScope;

	ProcessEvent(fn, &parms);
}

void USentrySubsystem::Close(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.Close");

	FClose parms{};	

	ProcessEvent(fn, &parms);
}

void USentrySubsystem::ClearBreadcrumbs(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.ClearBreadcrumbs");

	FClearBreadcrumbs parms{};	

	ProcessEvent(fn, &parms);
}

void USentrySubsystem::CaptureUserFeedbackWithParams(struct USentryId* EventId, struct FString Email, struct FString Comments, struct FString Name){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.CaptureUserFeedbackWithParams");

	FCaptureUserFeedbackWithParams parms{};	
	parms.EventId = EventId;
	parms.Email = Email;
	parms.Comments = Comments;
	parms.Name = Name;

	ProcessEvent(fn, &parms);
}

void USentrySubsystem::CaptureUserFeedback(struct USentryUserFeedback* UserFeedback){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.CaptureUserFeedback");

	FCaptureUserFeedback parms{};	
	parms.UserFeedback = UserFeedback;

	ProcessEvent(fn, &parms);
}

struct USentryId* USentrySubsystem::CaptureMessageWithScope(struct FString Message, struct FDelegate& OnConfigureScope, uint8_t Level){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.CaptureMessageWithScope");

	FCaptureMessageWithScope parms{};	
	parms.Message = Message;
	parms.OnConfigureScope = OnConfigureScope;
	parms.Level = Level;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct USentryId* USentrySubsystem::CaptureMessage(struct FString Message, uint8_t Level){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.CaptureMessage");

	FCaptureMessage parms{};	
	parms.Message = Message;
	parms.Level = Level;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct USentryId* USentrySubsystem::CaptureEventWithScope(struct USentryEvent* Event, struct FDelegate& OnConfigureScope){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.CaptureEventWithScope");

	FCaptureEventWithScope parms{};	
	parms.Event = Event;
	parms.OnConfigureScope = OnConfigureScope;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct USentryId* USentrySubsystem::CaptureEvent(struct USentryEvent* Event){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.CaptureEvent");

	FCaptureEvent parms{};	
	parms.Event = Event;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USentrySubsystem::AddBreadcrumbWithParams(struct FString Message, struct FString Category, struct FString Type, struct TMap<struct FString, struct FString>& Data, uint8_t Level){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.AddBreadcrumbWithParams");

	FAddBreadcrumbWithParams parms{};	
	parms.Message = Message;
	parms.Category = Category;
	parms.Type = Type;
	parms.Data = Data;
	parms.Level = Level;

	ProcessEvent(fn, &parms);
}

void USentrySubsystem::AddBreadcrumb(struct USentryBreadcrumb* Breadcrumb){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.AddBreadcrumb");

	FAddBreadcrumb parms{};	
	parms.Breadcrumb = Breadcrumb;

	ProcessEvent(fn, &parms);
}

struct TArray<char> USentryLibrary::StringToBytesArray(struct FString InString){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryLibrary.StringToBytesArray");

	FStringToBytesArray parms{};	
	parms.InString = InString;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString USentryLibrary::SaveStringToFile(struct FString InString, struct FString Filename){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryLibrary.SaveStringToFile");

	FSaveStringToFile parms{};	
	parms.InString = InString;
	parms.Filename = Filename;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct USentryUserFeedback* USentryLibrary::CreateSentryUserFeedback(struct USentryId* EventId, struct FString Name, struct FString Email, struct FString Comments){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryLibrary.CreateSentryUserFeedback");

	FCreateSentryUserFeedback parms{};	
	parms.EventId = EventId;
	parms.Name = Name;
	parms.Email = Email;
	parms.Comments = Comments;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct USentryUser* USentryLibrary::CreateSentryUser(struct FString Email, struct FString ID, struct FString UserName, struct FString IpAddress, struct TMap<struct FString, struct FString>& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryLibrary.CreateSentryUser");

	FCreateSentryUser parms{};	
	parms.Email = Email;
	parms.ID = ID;
	parms.UserName = UserName;
	parms.IpAddress = IpAddress;
	parms.Data = Data;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct USentryEvent* USentryLibrary::CreateSentryEvent(struct FString Message, uint8_t Level){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryLibrary.CreateSentryEvent");

	FCreateSentryEvent parms{};	
	parms.Message = Message;
	parms.Level = Level;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct USentryBreadcrumb* USentryLibrary::CreateSentryBreadcrumb(struct FString Message, struct FString Type, struct FString Category, struct TMap<struct FString, struct FString>& Data, uint8_t Level){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryLibrary.CreateSentryBreadcrumb");

	FCreateSentryBreadcrumb parms{};	
	parms.Message = Message;
	parms.Type = Type;
	parms.Category = Category;
	parms.Data = Data;
	parms.Level = Level;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct USentryAttachment* USentryLibrary::CreateSentryAttachmentWithPath(struct FString Path, struct FString Filename, struct FString ContentType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryLibrary.CreateSentryAttachmentWithPath");

	FCreateSentryAttachmentWithPath parms{};	
	parms.Path = Path;
	parms.Filename = Filename;
	parms.ContentType = ContentType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct USentryAttachment* USentryLibrary::CreateSentryAttachmentWithData(struct TArray<char>& Data, struct FString Filename, struct FString ContentType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryLibrary.CreateSentryAttachmentWithData");

	FCreateSentryAttachmentWithData parms{};	
	parms.Data = Data;
	parms.Filename = Filename;
	parms.ContentType = ContentType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString USentryLibrary::ByteArrayToString(struct TArray<char>& Array){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryLibrary.ByteArrayToString");

	FByteArrayToString parms{};	
	parms.Array = Array;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USentryUser::SetUsername(struct FString UserName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryUser.SetUsername");

	FSetUsername parms{};	
	parms.UserName = UserName;

	ProcessEvent(fn, &parms);
}

void USentryUser::SetIpAddress(struct FString IpAddress){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryUser.SetIpAddress");

	FSetIpAddress parms{};	
	parms.IpAddress = IpAddress;

	ProcessEvent(fn, &parms);
}

void USentryUser::SetId(struct FString ID){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryUser.SetId");

	FSetId parms{};	
	parms.ID = ID;

	ProcessEvent(fn, &parms);
}

void USentryUser::SetEmail(struct FString Email){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryUser.SetEmail");

	FSetEmail parms{};	
	parms.Email = Email;

	ProcessEvent(fn, &parms);
}

void USentryUser::SetData(struct TMap<struct FString, struct FString>& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryUser.SetData");

	FSetData parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

struct FString USentryUser::GetUsername(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryUser.GetUsername");

	FGetUsername parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString USentryUser::GetIpAddress(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryUser.GetIpAddress");

	FGetIpAddress parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString USentryUser::GetId(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryUser.GetId");

	FGetId parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString USentryUser::GetEmail(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryUser.GetEmail");

	FGetEmail parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct TMap<struct FString, struct FString> USentryUser::GetData(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryUser.GetData");

	FGetData parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void USentryUserFeedback::SetName(struct FString Name){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryUserFeedback.SetName");

	FSetName parms{};	
	parms.Name = Name;

	ProcessEvent(fn, &parms);
}

void USentryUserFeedback::SetEmail(struct FString Email){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryUserFeedback.SetEmail");

	FSetEmail parms{};	
	parms.Email = Email;

	ProcessEvent(fn, &parms);
}

void USentryUserFeedback::SetComment(struct FString Comments){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryUserFeedback.SetComment");

	FSetComment parms{};	
	parms.Comments = Comments;

	ProcessEvent(fn, &parms);
}

void USentryUserFeedback::Initialize(struct USentryId* EventId){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryUserFeedback.Initialize");

	FInitialize parms{};	
	parms.EventId = EventId;

	ProcessEvent(fn, &parms);
}

struct FString USentryUserFeedback::GetName(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryUserFeedback.GetName");

	FGetName parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString USentryUserFeedback::GetEmail(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryUserFeedback.GetEmail");

	FGetEmail parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString USentryUserFeedback::GetComment(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Sentry.SentryUserFeedback.GetComment");

	FGetComment parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

