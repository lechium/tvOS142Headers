/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_queue, PKTapToRadarDelegate;
@class ACAccountStore, NSString, NSOperationQueue, NSMutableDictionary, NSMutableArray, NSURLSession, NSObject, NSSet, NSURLSessionConfiguration;

@interface PKWebService : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {

	ACAccountStore* _accountStore;
	unsigned long long _taskIDCounter;
	NSString* _webServiceSessionMarker;
	NSOperationQueue* _delegateOperationQueue;
	NSMutableDictionary* _webServiceTasks;
	NSMutableDictionary* _diagnosticReasonsByTaskID;
	NSMutableDictionary* _tasksMetadata;
	NSMutableArray* _diagnosticReasons;
	NSURLSession* _urlSession;
	NSObject*<OS_dispatch_queue> _diagnosticReasonsQueue;
	os_unfair_lock_s _stateLock;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	NSSet* _sensitiveKeys;
	id<PKTapToRadarDelegate> _tapToRadarDelegate;

}

@property (readonly) NSURLSessionConfiguration * sessionConfiguration; 
@property (nonatomic,readonly) NSString * webServiceSessionMarker; 
@property (assign,nonatomic,__weak) id<PKTapToRadarDelegate> tapToRadarDelegate;              //@synthesize tapToRadarDelegate=_tapToRadarDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedCookieStorage;
-(void)invalidate;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 taskIsWaitingForConnectivity:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_accountStore;
-(id)urlSession;
-(NSURLSessionConfiguration *)sessionConfiguration;
-(void)setUrlSession:(id)arg1 ;
-(unsigned long long)nextTaskID;
-(void)performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addDiagnosticReason:(id)arg1 ;
-(void)removeDiagnosticReason:(id)arg1 ;
-(void)refreshSessionWithConfiguration:(id)arg1 ;
-(id)initWithTapToRadarDelegate:(id)arg1 ;
-(void)handleResponse:(id)arg1 withError:(id)arg2 data:(id)arg3 task:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)forbiddenErrorWithResponse:(id)arg1 ;
-(BOOL)canBypassTrustExtendedValidation;
-(void)logResponse:(id)arg1 withData:(id)arg2 ;
-(void)handleAuthenticationFailureWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleWillPerformHTTPRedirectionWithResponse:(id)arg1 originalRequest:(id)arg2 redirectHandler:(/*^block*/id)arg3 ;
-(id)logFacility;
-(void)resetWebServiceSessionMarker;
-(void)_associateDiagnosticReasonsWithTaskID:(unsigned long long)arg1 ;
-(void)performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 retries:(unsigned long long)arg3 authHandling:(BOOL)arg4 cacheResponse:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)_urlRequestTaggedWithWebServiceSessionMarkerHeader:(id)arg1 ;
-(id)_urlRequestTaggedWithDiagnosticReasonHeader:(id)arg1 forTaskID:(unsigned long long)arg2 ;
-(id)_urlRequestTaggedWithUniqueRequestIdentifier:(id)arg1 ;
-(void)logRequest:(id)arg1 ;
-(void)processRetryRequest:(id)arg1 responseData:(id)arg2 orginalRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_cleanUpDiagnosticReasonsForTaskID:(unsigned long long)arg1 ;
-(BOOL)_trustPassesExtendedValidation:(SecTrustRef)arg1 ;
-(NSString *)webServiceSessionMarker;
-(id)_redactLogsWithData:(id)arg1 ;
-(void)_redactLogsFromJSONObject:(id)arg1 ;
-(void)performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 cacheResponse:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 retries:(unsigned long long)arg3 authHandling:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(unsigned long long)webServiceTaskIdentifierForTaskIdentifier:(long long)arg1 ;
-(void)diagnosticSessionWithReason:(id)arg1 sessionHandler:(/*^block*/id)arg2 ;
-(id<PKTapToRadarDelegate>)tapToRadarDelegate;
-(void)setTapToRadarDelegate:(id<PKTapToRadarDelegate>)arg1 ;
@end

