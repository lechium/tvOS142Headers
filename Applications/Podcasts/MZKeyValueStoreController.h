//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSURLProtocolDelegate-Protocol.h"
#import "MZKeyValueStoreDeserializeOperationDelegate-Protocol.h"
#import "MZKeyValueStoreOperationDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class IMURLRequestService, MZKeyValueStoreAuthenticationController, MZKeyValueStoreDeserializer, MZKeyValueStoreTransaction, MZTaskAssertion, NSMutableArray, NSString, NSURL;
@protocol MZKeyValueStoreControllerDelegate, OS_dispatch_queue;

@interface MZKeyValueStoreController : NSObject <MZKeyValueStoreOperationDelegate, MZKeyValueStoreDeserializeOperationDelegate, NSURLSessionTaskDelegate, AMSURLProtocolDelegate>
{
    NSURL *_defaultGetURL;	// 8 = 0x8
    NSURL *_defaultSetURL;	// 16 = 0x10
    NSString *_defaultDomain;	// 24 = 0x18
    _Bool _enabled;	// 32 = 0x20
    MZKeyValueStoreAuthenticationController *_authenticationController;	// 40 = 0x28
    _Bool _canRequestStoreSignIn;	// 48 = 0x30
    _Bool _resolvingError;	// 49 = 0x31
    id <MZKeyValueStoreControllerDelegate> _delegate;	// 56 = 0x38
    NSMutableArray *_pendingTransactions;	// 64 = 0x40
    MZKeyValueStoreTransaction *_currentTransaction;	// 72 = 0x48
    MZKeyValueStoreDeserializer *_currentDeserializer;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 88 = 0x58
    MZTaskAssertion *_backgroundTaskAssertion;	// 96 = 0x60
    IMURLRequestService *_urlRequestService;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000010005e054
@property(retain, nonatomic) IMURLRequestService *urlRequestService; // @synthesize urlRequestService=_urlRequestService;
@property(retain, nonatomic) MZTaskAssertion *backgroundTaskAssertion; // @synthesize backgroundTaskAssertion=_backgroundTaskAssertion;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain, nonatomic) MZKeyValueStoreDeserializer *currentDeserializer; // @synthesize currentDeserializer=_currentDeserializer;
@property(nonatomic, getter=isResolvingError) _Bool resolvingError; // @synthesize resolvingError=_resolvingError;
@property(retain, nonatomic) MZKeyValueStoreTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
@property(retain, nonatomic) NSMutableArray *pendingTransactions; // @synthesize pendingTransactions=_pendingTransactions;
@property _Bool canRequestStoreSignIn; // @synthesize canRequestStoreSignIn=_canRequestStoreSignIn;
@property(readonly, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain) MZKeyValueStoreAuthenticationController *authenticationController; // @synthesize authenticationController=_authenticationController;
@property(copy, nonatomic) NSString *defaultDomain; // @synthesize defaultDomain=_defaultDomain;
@property(retain, nonatomic) NSURL *defaultSetURL; // @synthesize defaultSetURL=_defaultSetURL;
@property(retain, nonatomic) NSURL *defaultGetURL; // @synthesize defaultGetURL=_defaultGetURL;
@property __weak id <MZKeyValueStoreControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deserializeOperationDidFinish:(id)arg1 shouldReschedule:(_Bool)arg2;	// IMP=0x000000010005de6c
- (void)keyValueStoreOperationOperationDidFinish:(id)arg1;	// IMP=0x000000010005de60
- (void)keyValueStoreOperation:(id)arg1 scheduleURLRequest:(id)arg2;	// IMP=0x000000010005ddbc
- (_Bool)AMSURLSession:(id)arg1 task:(id)arg2 shouldFailWithServerError:(id)arg3;	// IMP=0x000000010005dc20
- (_Bool)AMSURLSession:(id)arg1 shouldHandleAuthenticationForAccount:(id)arg2 dialogDictionary:(id)arg3;	// IMP=0x000000010005d980
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010005d72c
- (void)_endBackgroundTask;	// IMP=0x000000010005d670
- (void)_beginBackgroundTask;	// IMP=0x000000010005d3c0
- (void)_delegateTransactionDidFinish:(id)arg1;	// IMP=0x000000010005d2a8
- (void)_delegateTransactionDidCancel:(id)arg1 withError:(id)arg2;	// IMP=0x000000010005d1d8
- (_Bool)_delegateTransactionDidFail:(id)arg1 withError:(id)arg2;	// IMP=0x000000010005d0f4
- (_Bool)_delegateShouldScheduleTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005cff4
- (void)_errorResolutionDefault:(id)arg1 transaction:(id)arg2;	// IMP=0x000000010005cef0
- (void)_errorResolutionCancel:(id)arg1 transaction:(id)arg2;	// IMP=0x000000010005ce60
- (void)_errorResolutionRetry:(id)arg1 transaction:(id)arg2;	// IMP=0x000000010005cd10
- (void)_resolveError:(id)arg1 transaction:(id)arg2 resolution:(int)arg3;	// IMP=0x000000010005cbac
- (void)_enqueueStoreRequest:(id)arg1 withUrlRequest:(id)arg2;	// IMP=0x000000010005c960
- (void)_processOperationOutput:(id)arg1 forRequest:(id)arg2;	// IMP=0x000000010005bdd4
- (void)_transactionDidCancel:(id)arg1 withError:(id)arg2;	// IMP=0x000000010005bc84
- (void)_transactionDidFail:(id)arg1 withError:(id)arg2;	// IMP=0x000000010005baf8
- (void)_currentTransactionDidFinish;	// IMP=0x000000010005b90c
- (id)_scheduleTransactionWithType:(int)arg1 sinceDomainVersion:(id)arg2 URL:(id)arg3 keys:(id)arg4 processor:(id)arg5;	// IMP=0x000000010005b7dc
- (_Bool)_authenticationCanProcessTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005b688
- (_Bool)_clampsCanScheduleTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005b608
- (_Bool)_isTransactionValid:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005b51c
- (_Bool)_isEnabledForTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005b484
- (_Bool)_canScheduleTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005b3e8
- (void)_addPendingTransaction:(id)arg1;	// IMP=0x000000010005b2ec
- (void)_scheduleTransaction:(id)arg1;	// IMP=0x000000010005b160
- (id)_requestForTransaction:(id)arg1;	// IMP=0x000000010005b050
- (void)_processCurrentTransaction;	// IMP=0x000000010005add8
- (void)_processPendingTransactions;	// IMP=0x000000010005acc4
- (void)_cancelTransaction:(id)arg1 error:(id)arg2;	// IMP=0x000000010005aa98
- (void)_cancelAllPendingTransactions:(id)arg1;	// IMP=0x000000010005a7d8
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x000000010005a774
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010005a710
- (_Bool)isIdle;	// IMP=0x000000010005a63c
- (void)reset;	// IMP=0x000000010005a5a0
- (void)resolveError:(id)arg1 transaction:(id)arg2 resolution:(int)arg3;	// IMP=0x000000010005a4b0
- (void)cancelAllTransactionsCancelCode:(long long)arg1;	// IMP=0x000000010005a350
- (void)cancelAllTransactions;	// IMP=0x000000010005a1f4
- (void)cancelScheduledTransaction:(id)arg1;	// IMP=0x000000010005a0f8
- (void)scheduleTransaction:(id)arg1;	// IMP=0x0000000100059f2c
- (id)scheduleSetTransactionWithKeys:(id)arg1 processor:(id)arg2;	// IMP=0x0000000100059e80
- (id)scheduleGetTransactionWithKeys:(id)arg1 processor:(id)arg2;	// IMP=0x0000000100059dd4
- (id)scheduleGetAllTransactionWithSinceDomainVersion:(id)arg1 processor:(id)arg2;	// IMP=0x0000000100059d28
- (void)_networkTypeChangedNotification:(id)arg1;	// IMP=0x0000000100059c68
- (id)clampsController;	// IMP=0x0000000100059c54
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000100059a74
- (_Bool)enabled;	// IMP=0x0000000100059910
- (void)dealloc;	// IMP=0x0000000100059844
- (id)initWithDomain:(id)arg1 baseURLForGETAll:(id)arg2 baseURLForPUTAll:(id)arg3;	// IMP=0x0000000100059638
- (id)scheduleApnSubscriptionTransactionWithDictionary:(id)arg1;	// IMP=0x00000001001130c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
