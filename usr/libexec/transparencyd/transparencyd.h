//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "transparencyd_protocol-Protocol.h"

@class KTContextStore, KTLogClient, KTPublicKeyStore, TransparencyManagedDataStoreController, TransparencyTranscript;
@protocol OS_dispatch_workloop;

@interface transparencyd : NSObject <transparencyd_protocol>
{
    NSObject<OS_dispatch_workloop> *_workloop;	// 8 = 0x8
    KTLogClient *_ktLogClient;	// 16 = 0x10
    KTContextStore *_workloopContextStore;	// 24 = 0x18
    KTContextStore *_xpcContextStore;	// 32 = 0x20
    KTPublicKeyStore *_keyStore;	// 40 = 0x28
    TransparencyManagedDataStoreController *_dataStoreController;	// 48 = 0x30
    TransparencyTranscript *_transcript;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100008360
@property(retain) TransparencyTranscript *transcript; // @synthesize transcript=_transcript;
@property(retain) TransparencyManagedDataStoreController *dataStoreController; // @synthesize dataStoreController=_dataStoreController;
@property(retain) KTPublicKeyStore *keyStore; // @synthesize keyStore=_keyStore;
@property(retain) KTContextStore *xpcContextStore; // @synthesize xpcContextStore=_xpcContextStore;
@property(retain) KTContextStore *workloopContextStore; // @synthesize workloopContextStore=_workloopContextStore;
@property(retain) KTLogClient *ktLogClient; // @synthesize ktLogClient=_ktLogClient;
@property(retain) NSObject<OS_dispatch_workloop> *workloop; // @synthesize workloop=_workloop;
- (void)logMetric:(id)arg1 withName:(id)arg2;	// IMP=0x0000000100008248
- (void)logResultForEvent:(id)arg1 hardFailure:(_Bool)arg2 result:(id)arg3 withAttributes:(id)arg4;	// IMP=0x0000000100008190
- (void)logResultForEvent:(id)arg1 hardFailure:(_Bool)arg2 result:(id)arg3;	// IMP=0x00000001000080f4
- (void)noteEventNamed:(id)arg1;	// IMP=0x0000000100008084
- (void)logSoftFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;	// IMP=0x0000000100007ff8
- (void)logHardFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;	// IMP=0x0000000100007f6c
- (void)logSuccessForEventNamed:(id)arg1;	// IMP=0x0000000100007efc
- (void)runDutyCycle:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007cac
- (void)runDutyCycleForActivity:(id)arg1;	// IMP=0x0000000100007a84
- (void)resetRequestToPending:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010000769c
- (void)forceValidateUUID:(id)arg1 uri:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000100006dbc
- (void)forceApplicationConfig:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006c00
- (void)forceApplicationKeysDownload:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001000069a4
- (void)forceApplicationKeysFetch:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006704
- (void)forceConfigUpdate:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006544
- (void)copyApplicationTranscript:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001000062d4
- (void)copyDaemonState:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006088
- (void)clearPublicKeyStoreState:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005f94
- (void)clearLogClientConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005ebc
- (void)copyLogClientConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005d00
- (void)copyKeyStoreStateFromDisk:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005b3c
- (void)copyKeyStoreState:(CDUnknownBlockType)arg1;	// IMP=0x00000001000059a4
- (void)copyApplicationState:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005708
- (void)copyDataStoreStatistics:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005604
- (void)clearApplicationState:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005424
- (void)convertToSelfRequest:(id)arg1 serverDatas:(id)arg2 syncedDatas:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 updateCompletionBlock:(CDUnknownBlockType)arg6;	// IMP=0x0000000100004ac8
- (void)validateEnrollmentUriResult:(id)arg1 uuid:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100004364
- (void)validateEnrollmentUri:(id)arg1 application:(id)arg2 accountID:(id)arg3 loggableData:(id)arg4 queryRequest:(id)arg5 queryResponse:(id)arg6 promiseCompletionBlock:(CDUnknownBlockType)arg7;	// IMP=0x0000000100003b38
- (void)validateSelfUriResult:(id)arg1 uuid:(id)arg2 syncedDatas:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100003270
- (void)validatePeerUriResult:(id)arg1 uuid:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010000299c
- (void)validatePeerUri:(id)arg1 application:(id)arg2 accountID:(id)arg3 loggableDatas:(id)arg4 queryRequest:(id)arg5 queryResponse:(id)arg6 promiseCompletionBlock:(CDUnknownBlockType)arg7;	// IMP=0x0000000100001fac
- (_Bool)validLoggableDatas:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100001d8c
- (_Bool)dataStoreFailedToLoad:(id *)arg1;	// IMP=0x0000000100001c44
- (id)xpcDataStore;	// IMP=0x0000000100001bf0
- (id)dataStore;	// IMP=0x0000000100001b9c
- (void)logFinishFailureEvent:(id)arg1 error:(id)arg2;	// IMP=0x0000000100001b14
- (void)logFinishSuccessEvent:(id)arg1;	// IMP=0x0000000100001aa8
- (void)logStartEvent:(id)arg1;	// IMP=0x0000000100001a3c
- (void)runAsynchronousTransactionName:(const char *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000001000018a4
- (id)cleanseErrorForXPC:(id)arg1;	// IMP=0x000000010000186c
- (id)initWithKTLogClient:(id)arg1 dataStoreController:(id)arg2 keyStore:(id)arg3 transcript:(id)arg4 workloop:(id)arg5;	// IMP=0x00000001000014a8
- (id)init;	// IMP=0x0000000100001284

@end

