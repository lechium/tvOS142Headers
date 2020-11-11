//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKNetworkRequestManagerSessionDelegate, NSDictionary, NSMutableDictionary, NSOperationQueue, NSURLSession, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

@interface GKNetworkRequestManager : NSObject
{
    _Bool _firstUnlockedState;	// 8 = 0x8
    _Bool _reportedExessiveRequests;	// 9 = 0x9
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    NSURLSessionConfiguration *_backgroundConfig;	// 24 = 0x18
    NSURLSession *_backgroundSession;	// 32 = 0x20
    GKNetworkRequestManagerSessionDelegate *_sessionDelegate;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_stateQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_handlerQueue;	// 56 = 0x38
    long long _currentState;	// 64 = 0x40
    NSDictionary *_serviceDependancyMappings;	// 72 = 0x48
    NSMutableDictionary *_existingTasks;	// 80 = 0x50
}

+ (id)taskWithRequest:(id)arg1 description:(id)arg2 session:(id)arg3;	// IMP=0x00000001001d4190
+ (id)uuidFromTask:(id)arg1;	// IMP=0x00000001001d412c
+ (id)networkRequestFromNsurlTask:(id)arg1;	// IMP=0x00000001001d1510
+ (Class)networkRequestClass:(id)arg1;	// IMP=0x00000001001d1340
+ (id)commonNetworkRequestManager;	// IMP=0x00000001001d04d4
+ (id)dictionaryFromTaskDescription:(id)arg1;	// IMP=0x00000001001cf960
- (void).cxx_destruct;	// IMP=0x00000001001d4c04
@property(nonatomic) _Bool reportedExessiveRequests; // @synthesize reportedExessiveRequests=_reportedExessiveRequests;
@property(retain, nonatomic) NSMutableDictionary *existingTasks; // @synthesize existingTasks=_existingTasks;
@property(retain, nonatomic) NSDictionary *serviceDependancyMappings; // @synthesize serviceDependancyMappings=_serviceDependancyMappings;
@property(nonatomic) _Bool firstUnlockedState; // @synthesize firstUnlockedState=_firstUnlockedState;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(retain, nonatomic) GKNetworkRequestManagerSessionDelegate *sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
@property(retain, nonatomic) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property(retain, nonatomic) NSURLSessionConfiguration *backgroundConfig; // @synthesize backgroundConfig=_backgroundConfig;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (id)networkRequestManagerStateQueue;	// IMP=0x00000001001d4b34
- (void)issuePending;	// IMP=0x00000001001d4514
- (id)pendingLocation;	// IMP=0x00000001001d447c
- (id)resultsLocation;	// IMP=0x00000001001d43e4
- (void)writeToNetwork:(id)arg1 clientProxy:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001d3750
- (void)setupSessionsAsync;	// IMP=0x00000001001d27d0
- (void)handleTaskFinished:(id)arg1;	// IMP=0x00000001001d2144
- (void)addNetworkRequest:(id)arg1 description:(id)arg2 clientProxy:(id)arg3;	// IMP=0x00000001001d1bcc
- (_Bool)managerReady;	// IMP=0x00000001001d1b20
- (id)dictionaryForBagAndPlayer:(id)arg1 createIfNotPresent:(_Bool)arg2 description:(id)arg3;	// IMP=0x00000001001d1778
- (long long)relatedTasksExistForBagKey:(id)arg1;	// IMP=0x00000001001d0d1c
- (void)cancelCurrentTasks;	// IMP=0x00000001001d07fc
- (id)currentExistingTasks;	// IMP=0x00000001001d0690
- (id)init;	// IMP=0x00000001001d0558
- (_Bool)beforeFirstUnlock;	// IMP=0x00000001001d0448
- (void)writeToPendingStore:(id)arg1 fileName:(id)arg2;	// IMP=0x00000001001cfecc
- (id)contentsOfPendingStore:(id)arg1;	// IMP=0x00000001001cfdbc
- (void)cleanUpPendingStore:(id)arg1;	// IMP=0x00000001001cfcd0
- (id)pathToTempFile:(id)arg1 fileName:(id)arg2;	// IMP=0x00000001001cfc48
- (id)filePathToTempFile:(id)arg1 fileName:(id)arg2;	// IMP=0x00000001001cfba4

@end

