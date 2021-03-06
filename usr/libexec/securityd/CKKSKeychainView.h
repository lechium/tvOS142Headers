//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKKSChangeFetcherClient-Protocol.h"
#import "CKKSCloudKitAccountStateListener-Protocol.h"
#import "CKKSDatabaseProviderProtocol-Protocol.h"
#import "CKKSPeerUpdateListener-Protocol.h"
#import "OctagonStateMachineEngine-Protocol.h"

@class CKContainer, CKDatabase, CKKSAccountStateTracker, CKKSCloudKitClassDependencies, CKKSCondition, CKKSIncomingQueueOperation, CKKSLaunchSequence, CKKSLockStateTracker, CKKSNearFutureScheduler, CKKSNewTLKOperation, CKKSOperationDependencies, CKKSOutgoingQueueOperation, CKKSProcessReceivedKeysOperation, CKKSReachabilityTracker, CKKSReencryptOutgoingItemsOperation, CKKSResultOperation, CKKSSynchronizeOperation, CKKSZoneChangeFetcher, CKRecordZoneID, NSArray, NSDictionary, NSHashTable, NSMutableSet, NSOperation, NSOperationQueue, NSString, OctagonStateMachine;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKKSKeychainView : NSObject <CKKSCloudKitAccountStateListener, CKKSChangeFetcherClient, CKKSPeerUpdateListener, CKKSDatabaseProviderProtocol, OctagonStateMachineEngine>
{
    _Bool _keyStateMachineRefetched;	// 8 = 0x8
    _Bool _keyStateFullRefetchRequested;	// 9 = 0x9
    _Bool _initiatedLocalScan;	// 10 = 0xa
    _Bool _halted;	// 11 = 0xb
    NSString *_zoneName;	// 16 = 0x10
    long long _accountStatus;	// 24 = 0x18
    CKContainer *_container;	// 32 = 0x20
    CKDatabase *_database;	// 40 = 0x28
    CKKSAccountStateTracker *_accountTracker;	// 48 = 0x30
    CKKSReachabilityTracker *_reachabilityTracker;	// 56 = 0x38
    CKKSCloudKitClassDependencies *_cloudKitClassDependencies;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    CKRecordZoneID *_zoneID;	// 80 = 0x50
    CKKSCondition *_loggedIn;	// 88 = 0x58
    CKKSCondition *_loggedOut;	// 96 = 0x60
    CKKSCondition *_accountStateKnown;	// 104 = 0x68
    long long _trustStatus;	// 112 = 0x70
    CKKSLaunchSequence *_launch;	// 120 = 0x78
    CKKSLockStateTracker *_lockStateTracker;	// 128 = 0x80
    OctagonStateMachine *_stateMachine;	// 136 = 0x88
    CKKSResultOperation *_keyStateReadyDependency;	// 144 = 0x90
    CKKSZoneChangeFetcher *_zoneChangeFetcher;	// 152 = 0x98
    CKKSNearFutureScheduler *_suggestTLKUpload;	// 160 = 0xa0
    CKKSNearFutureScheduler *_requestPolicyCheck;	// 168 = 0xa8
    CKKSIncomingQueueOperation *_lastIncomingQueueOperation;	// 176 = 0xb0
    CKKSNewTLKOperation *_lastNewTLKOperation;	// 184 = 0xb8
    CKKSOutgoingQueueOperation *_lastOutgoingQueueOperation;	// 192 = 0xc0
    CKKSProcessReceivedKeysOperation *_lastProcessReceivedKeysOperation;	// 200 = 0xc8
    CKKSReencryptOutgoingItemsOperation *_lastReencryptOutgoingItemsOperation;	// 208 = 0xd0
    CKKSSynchronizeOperation *_lastSynchronizeOperation;	// 216 = 0xd8
    CKKSResultOperation *_lastFixupOperation;	// 224 = 0xe0
    NSOperation *_holdReencryptOutgoingItemsOperation;	// 232 = 0xe8
    NSOperation *_holdOutgoingQueueOperation;	// 240 = 0xf0
    NSOperation *_holdIncomingQueueOperation;	// 248 = 0xf8
    NSOperation *_holdLocalSynchronizeOperation;	// 256 = 0x100
    CKKSResultOperation *_holdFixupOperation;	// 264 = 0x108
    CKKSNearFutureScheduler *_notifyViewChangedScheduler;	// 272 = 0x110
    CKKSNearFutureScheduler *_notifyViewReadyScheduler;	// 280 = 0x118
    CKKSOperationDependencies *_operationDependencies;	// 288 = 0x120
    NSHashTable *_incomingQueueOperations;	// 296 = 0x128
    NSHashTable *_outgoingQueueOperations;	// 304 = 0x130
    NSHashTable *_scanLocalItemsOperations;	// 312 = 0x138
    Class _notifierClass;	// 320 = 0x140
    CKKSNearFutureScheduler *_outgoingQueueOperationScheduler;	// 328 = 0x148
    CKKSResultOperation *_processIncomingQueueAfterNextUnlockOperation;	// 336 = 0x150
    CKKSResultOperation *_resultsOfNextIncomingQueueOperationOperation;	// 344 = 0x158
    NSOperationQueue *_waitingQueue;	// 352 = 0x160
    NSMutableSet *_resyncRecordsSeen;	// 360 = 0x168
    NSOperationQueue *_operationQueue;	// 368 = 0x170
    CKKSResultOperation *_accountLoggedInDependency;	// 376 = 0x178
    NSArray *_currentTrustStates;	// 384 = 0x180
    NSMutableSet *_currentFetchReasons;	// 392 = 0x188
}

- (void).cxx_destruct;	// IMP=0x000000010015126c
@property(retain) NSMutableSet *currentFetchReasons; // @synthesize currentFetchReasons=_currentFetchReasons;
@property(retain) NSArray *currentTrustStates; // @synthesize currentTrustStates=_currentTrustStates;
@property _Bool halted; // @synthesize halted=_halted;
@property(retain) CKKSResultOperation *accountLoggedInDependency; // @synthesize accountLoggedInDependency=_accountLoggedInDependency;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSMutableSet *resyncRecordsSeen; // @synthesize resyncRecordsSeen=_resyncRecordsSeen;
@property(retain) NSOperationQueue *waitingQueue; // @synthesize waitingQueue=_waitingQueue;
@property(retain) CKKSResultOperation *resultsOfNextIncomingQueueOperationOperation; // @synthesize resultsOfNextIncomingQueueOperationOperation=_resultsOfNextIncomingQueueOperationOperation;
@property(retain) CKKSResultOperation *processIncomingQueueAfterNextUnlockOperation; // @synthesize processIncomingQueueAfterNextUnlockOperation=_processIncomingQueueAfterNextUnlockOperation;
@property(retain) CKKSNearFutureScheduler *outgoingQueueOperationScheduler; // @synthesize outgoingQueueOperationScheduler=_outgoingQueueOperationScheduler;
@property(readonly) Class notifierClass; // @synthesize notifierClass=_notifierClass;
@property(retain) NSHashTable *scanLocalItemsOperations; // @synthesize scanLocalItemsOperations=_scanLocalItemsOperations;
@property(retain) NSHashTable *outgoingQueueOperations; // @synthesize outgoingQueueOperations=_outgoingQueueOperations;
@property(retain) NSHashTable *incomingQueueOperations; // @synthesize incomingQueueOperations=_incomingQueueOperations;
@property(readonly) CKKSOperationDependencies *operationDependencies; // @synthesize operationDependencies=_operationDependencies;
@property(retain) CKKSNearFutureScheduler *notifyViewReadyScheduler; // @synthesize notifyViewReadyScheduler=_notifyViewReadyScheduler;
@property(retain) CKKSNearFutureScheduler *notifyViewChangedScheduler; // @synthesize notifyViewChangedScheduler=_notifyViewChangedScheduler;
@property _Bool initiatedLocalScan; // @synthesize initiatedLocalScan=_initiatedLocalScan;
@property(retain) CKKSResultOperation *holdFixupOperation; // @synthesize holdFixupOperation=_holdFixupOperation;
@property(retain) NSOperation *holdLocalSynchronizeOperation; // @synthesize holdLocalSynchronizeOperation=_holdLocalSynchronizeOperation;
@property(retain) NSOperation *holdIncomingQueueOperation; // @synthesize holdIncomingQueueOperation=_holdIncomingQueueOperation;
@property(retain) NSOperation *holdOutgoingQueueOperation; // @synthesize holdOutgoingQueueOperation=_holdOutgoingQueueOperation;
@property(retain) NSOperation *holdReencryptOutgoingItemsOperation; // @synthesize holdReencryptOutgoingItemsOperation=_holdReencryptOutgoingItemsOperation;
@property(retain) CKKSResultOperation *lastFixupOperation; // @synthesize lastFixupOperation=_lastFixupOperation;
@property(retain) CKKSSynchronizeOperation *lastSynchronizeOperation; // @synthesize lastSynchronizeOperation=_lastSynchronizeOperation;
@property(retain) CKKSReencryptOutgoingItemsOperation *lastReencryptOutgoingItemsOperation; // @synthesize lastReencryptOutgoingItemsOperation=_lastReencryptOutgoingItemsOperation;
@property(retain) CKKSProcessReceivedKeysOperation *lastProcessReceivedKeysOperation; // @synthesize lastProcessReceivedKeysOperation=_lastProcessReceivedKeysOperation;
@property(retain) CKKSOutgoingQueueOperation *lastOutgoingQueueOperation; // @synthesize lastOutgoingQueueOperation=_lastOutgoingQueueOperation;
@property(retain) CKKSNewTLKOperation *lastNewTLKOperation; // @synthesize lastNewTLKOperation=_lastNewTLKOperation;
@property(retain) CKKSIncomingQueueOperation *lastIncomingQueueOperation; // @synthesize lastIncomingQueueOperation=_lastIncomingQueueOperation;
@property(retain) CKKSNearFutureScheduler *requestPolicyCheck; // @synthesize requestPolicyCheck=_requestPolicyCheck;
@property(retain) CKKSNearFutureScheduler *suggestTLKUpload; // @synthesize suggestTLKUpload=_suggestTLKUpload;
@property(retain) CKKSZoneChangeFetcher *zoneChangeFetcher; // @synthesize zoneChangeFetcher=_zoneChangeFetcher;
@property(retain) CKKSResultOperation *keyStateReadyDependency; // @synthesize keyStateReadyDependency=_keyStateReadyDependency;
@property _Bool keyStateFullRefetchRequested; // @synthesize keyStateFullRefetchRequested=_keyStateFullRefetchRequested;
@property _Bool keyStateMachineRefetched; // @synthesize keyStateMachineRefetched=_keyStateMachineRefetched;
@property(readonly) OctagonStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(retain) CKKSLaunchSequence *launch; // @synthesize launch=_launch;
@property long long trustStatus; // @synthesize trustStatus=_trustStatus;
@property(retain) CKKSCondition *accountStateKnown; // @synthesize accountStateKnown=_accountStateKnown;
@property(retain) CKKSCondition *loggedOut; // @synthesize loggedOut=_loggedOut;
@property(retain) CKKSCondition *loggedIn; // @synthesize loggedIn=_loggedIn;
@property(readonly) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) CKKSCloudKitClassDependencies *cloudKitClassDependencies; // @synthesize cloudKitClassDependencies=_cloudKitClassDependencies;
@property __weak CKKSReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property __weak CKKSAccountStateTracker *accountTracker; // @synthesize accountTracker=_accountTracker;
@property(readonly) CKDatabase *database; // @synthesize database=_database;
@property(readonly) CKContainer *container; // @synthesize container=_container;
@property long long accountStatus; // @synthesize accountStatus=_accountStatus;
@property(readonly) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (id)fastStatus;	// IMP=0x0000000100150dbc
- (id)status;	// IMP=0x0000000100150c64
- (void)halt;	// IMP=0x0000000100150a4c
- (void)cancelAllOperations;	// IMP=0x0000000100150964
- (void)cancelPendingOperations;	// IMP=0x0000000100150588
- (void)waitForOperationsOfClass:(Class)arg1;	// IMP=0x0000000100150400
- (void)waitUntilAllOperationsAreFinished;	// IMP=0x00000001001503c0
- (_Bool)scheduleOperationWithoutDependencies:(id)arg1;	// IMP=0x00000001001502a8
- (void)scheduleOperation:(id)arg1;	// IMP=0x000000010015016c
- (void)waitForKeyHierarchyReadiness;	// IMP=0x00000001001500ec
- (void)waitForFetchAndIncomingQueueProcessing;	// IMP=0x0000000100150060
- (_Bool)outgoingQueueEmpty:(id *)arg1;	// IMP=0x000000010014ffb4
- (void)trustedPeerSetChanged:(id)arg1;	// IMP=0x000000010014fed4
- (void)selfPeerChanged:(id)arg1;	// IMP=0x000000010014fe1c
- (_Bool)shouldRetryAfterFetchError:(id)arg1;	// IMP=0x000000010014fab8
- (_Bool)ckErrorOrPartialError:(id)arg1 isError:(long long)arg2;	// IMP=0x000000010014f89c
- (void)changesFetched:(id)arg1 deletedRecordIDs:(id)arg2 newChangeToken:(id)arg3 moreComing:(_Bool)arg4 resync:(_Bool)arg5;	// IMP=0x000000010014f6cc
- (id)participateInFetch;	// IMP=0x000000010014f584
- (_Bool)_onQueueZoneIsReadyForFetching;	// IMP=0x000000010014f360
- (_Bool)zoneIsReadyForFetching;	// IMP=0x000000010014f2b4
- (void)receivedItemForWrongView;	// IMP=0x000000010014f274
- (void)setCurrentSyncingPolicy:(id)arg1 policyIsFresh:(_Bool)arg2;	// IMP=0x000000010014f1bc
@property(readonly) _Bool itemSyncingEnabled;
- (void)endTrustedOperation;	// IMP=0x000000010014ef88
- (void)beginTrustedOperation:(id)arg1 suggestTLKUpload:(id)arg2 requestPolicyCheck:(id)arg3;	// IMP=0x000000010014ed48
- (void)handleCKLogout;	// IMP=0x000000010014ec64
- (void)handleCKLogin;	// IMP=0x000000010014ea74
- (void)cloudkitAccountStateChange:(id)arg1 to:(id)arg2;	// IMP=0x000000010014e4dc
- (long long)accountStatusFromCKAccountInfo:(id)arg1;	// IMP=0x000000010014e468
- (id)createAccountLoggedInDependency:(id)arg1;	// IMP=0x000000010014e348
- (void)beginCloudKitOperation;	// IMP=0x000000010014e2f8
- (_Bool)insideSQLTransaction;	// IMP=0x000000010014e2d4
- (void)dispatchSyncWithReadOnlySQLTransaction:(CDUnknownBlockType)arg1;	// IMP=0x000000010014e0e8
- (void)dispatchSyncWithSQLTransaction:(CDUnknownBlockType)arg1;	// IMP=0x000000010014defc
- (_Bool)dispatchSyncWithConnection:(struct __OpaqueSecDbConnection *)arg1 readWriteTxion:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000010014dd7c
- (_Bool)_onqueueErrorOutgoingQueueEntry:(id)arg1 itemError:(id)arg2 error:(id *)arg3;	// IMP=0x000000010014db44
- (_Bool)_onqueueChangeOutgoingQueueEntry:(id)arg1 toState:(id)arg2 error:(id *)arg3;	// IMP=0x000000010014d420
- (_Bool)_onqueueResetAllInflightOQE:(id *)arg1;	// IMP=0x000000010014d074
- (void)_onqueueCKRecordDeviceStateChanged:(id)arg1 resync:(_Bool)arg2;	// IMP=0x000000010014cc14
- (void)_onqueueCKRecordManifestLeafChanged:(id)arg1 resync:(_Bool)arg2;	// IMP=0x000000010014c9f4
- (void)_onqueueCKRecordManifestChanged:(id)arg1 resync:(_Bool)arg2;	// IMP=0x000000010014c7d4
- (void)_onqueueCKRecordCurrentItemPointerChanged:(id)arg1 resync:(_Bool)arg2;	// IMP=0x000000010014c1fc
- (void)_onqueueCKRecordCurrentKeyPointerChanged:(id)arg1 resync:(_Bool)arg2;	// IMP=0x000000010014bc48
- (void)_onqueueCKRecordTLKShareChanged:(id)arg1 resync:(_Bool)arg2;	// IMP=0x000000010014ba80
- (void)_onqueueCKRecordKeyChanged:(id)arg1 resync:(_Bool)arg2;	// IMP=0x000000010014b30c
- (void)_onqueueCKRecordItemChanged:(id)arg1 resync:(_Bool)arg2;	// IMP=0x000000010014a66c
- (_Bool)_onqueueCKRecordChanged:(id)arg1 resync:(_Bool)arg2;	// IMP=0x000000010014a1e8
- (_Bool)_onqueueCKRecordDeleted:(id)arg1 recordType:(id)arg2 resync:(_Bool)arg3;	// IMP=0x000000010014913c
- (_Bool)_onqueueCKWriteFailed:(id)arg1 attemptedRecordsChanged:(id)arg2;	// IMP=0x00000001001484b8
- (id)fetchAndProcessCKChanges:(id)arg1;	// IMP=0x0000000100148374
- (id)resyncLocal;	// IMP=0x0000000100148320
- (id)resyncWithCloud;	// IMP=0x00000001001482cc
- (id)_onqueueCurrentDeviceStateEntry:(id *)arg1;	// IMP=0x00000001001470c0
- (void)xpc24HrNotification;	// IMP=0x0000000100147078
- (id)updateDeviceState:(_Bool)arg1 waitForKeyHierarchyInitialization:(unsigned long long)arg2 ckoperationGroup:(id)arg3;	// IMP=0x0000000100146e94
- (id)scanLocalItems:(id)arg1 ckoperationGroup:(id)arg2 after:(id)arg3;	// IMP=0x0000000100146b14
- (id)scanLocalItems:(id)arg1;	// IMP=0x0000000100146b00
- (id)processIncomingQueue:(_Bool)arg1 after:(id)arg2 policyConsideredAuthoritative:(_Bool)arg3;	// IMP=0x00000001001467e4
- (id)processIncomingQueue:(_Bool)arg1 after:(id)arg2;	// IMP=0x00000001001467d4
- (id)processIncomingQueue:(_Bool)arg1;	// IMP=0x00000001001467c4
- (id)resultsOfNextProcessIncomingQueueOperation;	// IMP=0x000000010014666c
- (void)processIncomingQueueAfterNextUnlock;	// IMP=0x00000001001464bc
- (id)processOutgoingQueueAfter:(id)arg1 requiredDelay:(unsigned long long)arg2 ckoperationGroup:(id)arg3;	// IMP=0x0000000100145f60
- (id)processOutgoingQueueAfter:(id)arg1 ckoperationGroup:(id)arg2;	// IMP=0x0000000100145ef8
- (id)processOutgoingQueue:(id)arg1;	// IMP=0x0000000100145ee4
- (id)findFirstPendingOperation:(id)arg1 ofClass:(Class)arg2;	// IMP=0x0000000100145d44
- (id)findFirstPendingOperation:(id)arg1;	// IMP=0x0000000100145d34
- (_Bool)requiresTLKUpload;	// IMP=0x0000000100145c64
- (void)receiveTLKUploadRecords:(id)arg1;	// IMP=0x0000000100145964
- (id)findKeySet:(_Bool)arg1;	// IMP=0x000000010014572c
- (void)getCurrentItemForAccessGroup:(id)arg1 identifier:(id)arg2 fetchCloudValue:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;	// IMP=0x0000000100145320
- (void)setCurrentItemForAccessGroup:(id)arg1 hash:(id)arg2 accessGroup:(id)arg3 identifier:(id)arg4 replacing:(id)arg5 hash:(id)arg6 complete:(CDUnknownBlockType)arg7;	// IMP=0x0000000100144d80
- (void)handleKeychainEventDbConnection:(struct __OpaqueSecDbConnection *)arg1 source:(unsigned long long)arg2 added:(struct SecDbItem *)arg3 deleted:(struct SecDbItem *)arg4 rateLimiter:(id)arg5;	// IMP=0x0000000100144680
- (_Bool)_onqueueOtherDevicesReportHavingTLKs:(id)arg1 trustStates:(id)arg2;	// IMP=0x00000001001436e8
- (id)tlkMissingOperation:(id)arg1;	// IMP=0x00000001001435cc
- (id)_onqueueNextStateMachineTransition:(id)arg1 flags:(id)arg2 pendingFlags:(id)arg3;	// IMP=0x000000010014068c
- (void)_onqueuePokeKeyStateMachine;	// IMP=0x0000000100140620
- (id)createKeyStateReadyDependency:(id)arg1;	// IMP=0x000000010014048c
- (void)keyStateMachineRequestProcess;	// IMP=0x0000000100140444
- (id)resetCloudKitZone:(id)arg1;	// IMP=0x000000010013ffa0
- (id)resetLocalData;	// IMP=0x000000010013fc84
- (id)performInitializedOperation;	// IMP=0x000000010013fb9c
- (void)ensureKeyStateReadyDependency:(id)arg1;	// IMP=0x000000010013fa90
@property(readonly) NSDictionary *keyHierarchyConditions;
- (id)keyHierarchyState;	// IMP=0x000000010013f9e8
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithContainer:(id)arg1 zoneName:(id)arg2 accountTracker:(id)arg3 lockStateTracker:(id)arg4 reachabilityTracker:(id)arg5 changeFetcher:(id)arg6 zoneModifier:(id)arg7 savedTLKNotifier:(id)arg8 cloudKitClassDependencies:(id)arg9;	// IMP=0x000000010013edec

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

