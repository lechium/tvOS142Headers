//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MZKeyValueStoreControllerDelegate-Protocol.h"
#import "MZKeyValueStoreTransactionProcessing-Protocol.h"

@class MZKeyValueStoreController, MZKeyValueStoreTransaction, MZUPPAsynchronousTask, MZUPPBagContext, NSError, NSMutableDictionary, NSString;
@protocol MZUniversalPlaybackPositionDataSource, MZUniversalPlaybackPositionTransactionContext, OS_dispatch_queue;

@interface MZUniversalPlaybackPositionSyncHandler : NSObject <MZKeyValueStoreControllerDelegate, MZKeyValueStoreTransactionProcessing>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_syncOperationQueue;	// 16 = 0x10
    _Bool _canRequestStoreSignIn;	// 24 = 0x18
    _Bool _syncInProgress;	// 25 = 0x19
    _Bool _canceled;	// 26 = 0x1a
    MZKeyValueStoreController *_kvsController;	// 32 = 0x20
    id <MZUniversalPlaybackPositionDataSource> _dataSource;	// 40 = 0x28
    id <MZUniversalPlaybackPositionTransactionContext> _dataSourceTransactionContext;	// 48 = 0x30
    MZUPPBagContext *_bagContext;	// 56 = 0x38
    MZUPPAsynchronousTask *_task;	// 64 = 0x40
    NSString *_responseDomainVersion;	// 72 = 0x48
    NSMutableDictionary *m_etadataItemsFromDataSource;	// 80 = 0x50
    NSMutableDictionary *_metadataItemsFromKVSStorage;	// 88 = 0x58
    NSMutableDictionary *_metadataItemsToCommitToDataSource;	// 96 = 0x60
    NSMutableDictionary *_metadataItemsToCommitToKVSStorage;	// 104 = 0x68
    NSMutableDictionary *_reportedItemVersionForIdentifier;	// 112 = 0x70
    MZKeyValueStoreTransaction *currentKVSTransaction;	// 120 = 0x78
    NSError *_fatalSyncError;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000010004f5a4
@property(retain) NSError *fatalSyncError; // @synthesize fatalSyncError=_fatalSyncError;
@property _Bool canceled; // @synthesize canceled=_canceled;
@property _Bool syncInProgress; // @synthesize syncInProgress=_syncInProgress;
@property(retain) MZKeyValueStoreTransaction *currentKVSTransaction; // @synthesize currentKVSTransaction;
@property(retain) NSMutableDictionary *reportedItemVersionForIdentifier; // @synthesize reportedItemVersionForIdentifier=_reportedItemVersionForIdentifier;
@property(retain) NSMutableDictionary *metadataItemsToCommitToKVSStorage; // @synthesize metadataItemsToCommitToKVSStorage=_metadataItemsToCommitToKVSStorage;
@property(retain) NSMutableDictionary *metadataItemsToCommitToDataSource; // @synthesize metadataItemsToCommitToDataSource=_metadataItemsToCommitToDataSource;
@property(retain) NSMutableDictionary *metadataItemsFromKVSStorage; // @synthesize metadataItemsFromKVSStorage=_metadataItemsFromKVSStorage;
@property(retain) NSMutableDictionary *metadataItemsFromDataSource; // @synthesize metadataItemsFromDataSource=m_etadataItemsFromDataSource;
@property(nonatomic) _Bool canRequestStoreSignIn; // @synthesize canRequestStoreSignIn=_canRequestStoreSignIn;
@property(retain) NSString *responseDomainVersion; // @synthesize responseDomainVersion=_responseDomainVersion;
@property(retain) MZUPPAsynchronousTask *task; // @synthesize task=_task;
@property(retain) MZUPPBagContext *bagContext; // @synthesize bagContext=_bagContext;
@property(retain) id <MZUniversalPlaybackPositionTransactionContext> dataSourceTransactionContext; // @synthesize dataSourceTransactionContext=_dataSourceTransactionContext;
@property(retain) id <MZUniversalPlaybackPositionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain) MZKeyValueStoreController *kvsController; // @synthesize kvsController=_kvsController;
- (id)sinceDomainVersionForTransaction:(id)arg1;	// IMP=0x000000010004f41c
- (id)keysForTransaction:(id)arg1;	// IMP=0x000000010004f3c8
- (void)transaction:(id)arg1 mergeData:(id)arg2 forKey:(id)arg3 domainVersion:(id)arg4 version:(id)arg5 mismatch:(_Bool)arg6 finishedBlock:(CDUnknownBlockType)arg7;	// IMP=0x000000010004f03c
- (void)transaction:(id)arg1 didProcessResponseWithDomainVersion:(id)arg2;	// IMP=0x000000010004f038
- (void)transaction:(id)arg1 willProcessResponseWithDomainVersion:(id)arg2;	// IMP=0x000000010004efc8
- (id)dataForSetTransaction:(id)arg1 key:(id)arg2 version:(id *)arg3;	// IMP=0x000000010004eed4
- (id)versionForGetTransaction:(id)arg1 key:(id)arg2;	// IMP=0x000000010004eecc
- (void)keyValueStoreController:(id)arg1 transactionDidFinish:(id)arg2;	// IMP=0x000000010004eebc
- (void)keyValueStoreController:(id)arg1 transaction:(id)arg2 didCancelWithError:(id)arg3;	// IMP=0x000000010004ee6c
- (_Bool)keyValueStoreController:(id)arg1 transaction:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x000000010004ed58
- (_Bool)keyValueStoreController:(id)arg1 shouldScheduleTransaction:(id)arg2;	// IMP=0x000000010004ed50
- (void)_signalKVSTransactionCompletion:(id)arg1 withError:(id)arg2;	// IMP=0x000000010004ec70
- (void)_signalKVSTransactionCompletion:(id)arg1;	// IMP=0x000000010004ec10
- (id)_synchronouslyRunKVSTransaction:(id)arg1;	// IMP=0x000000010004ea88
- (id)newKVSGetAllTransactionSinceDomainVersion:(id)arg1;	// IMP=0x000000010004ea18
- (id)newKVSGetAllTransactionWithMetadataItems:(id)arg1;	// IMP=0x000000010004e9ac
- (id)newKVSPutAllTransactionWithMetadataItems:(id)arg1;	// IMP=0x000000010004e7bc
- (id)newKVSTransactionWithType:(int)arg1 keys:(id)arg2;	// IMP=0x000000010004e690
- (void)_mergeMetadataItemsFromGetResponse;	// IMP=0x000000010004e0f4
- (int)_mergeMetadataItemFromSetResponse:(id)arg1;	// IMP=0x000000010004dc3c
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010004da08
- (void)cancel;	// IMP=0x000000010004d9f8
- (void)timeout;	// IMP=0x000000010004d970
- (void)cancelWithError:(id)arg1;	// IMP=0x000000010004d7cc
- (_Bool)_shouldStop;	// IMP=0x000000010004d678
- (_Bool)_synchronize:(id *)arg1;	// IMP=0x000000010004c698
- (void)_dataSourceCancelTransaction;	// IMP=0x000000010004c600
- (void)_resetState;	// IMP=0x000000010004c4c4
- (id)initWithDataSource:(id)arg1 bagContext:(id)arg2 andTask:(id)arg3;	// IMP=0x000000010004c194

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
