//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTReachabilityObserver-Protocol.h"
#import "MZKeyValueStoreControllerDelegate-Protocol.h"

@class MTUniversalPlaybackPositionDataSource, MZKeyValueStoreController, MZUniversalPlaybackPositionStore, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface MTSyncController : NSObject <MZKeyValueStoreControllerDelegate, MTReachabilityObserver>
{
    double _lastOperation;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_syncQueue;	// 16 = 0x10
    _Bool _isRunning;	// 24 = 0x18
    _Bool _uppSyncDirtyFlag;	// 25 = 0x19
    _Bool _resyncWhenDone;	// 26 = 0x1a
    _Bool _resettingToInitialState;	// 27 = 0x1b
    MZUniversalPlaybackPositionStore *_UPPStore;	// 32 = 0x20
    MTUniversalPlaybackPositionDataSource *_UPPDataSource;	// 40 = 0x28
    unsigned long long _backgroundTask;	// 48 = 0x30
    NSOperationQueue *_queue;	// 56 = 0x38
    MZKeyValueStoreController *_cloudSyncController;	// 64 = 0x40
}

+ (_Bool)hasAccountChangedSinceLastSync;	// IMP=0x00000001000c13cc
+ (void)resetAccountIdentifierForLastSync;	// IMP=0x00000001000c13bc
+ (void)setAccountIdentifierForLastSync:(id)arg1;	// IMP=0x00000001000c11f8
+ (id)accountIdentifierForLastSync;	// IMP=0x00000001000c1194
+ (void)resetPlaylistSyncVersion;	// IMP=0x00000001000c1160
+ (void)setPlaylistSyncVersion:(id)arg1;	// IMP=0x00000001000c1080
+ (id)playlistSyncVersion;	// IMP=0x00000001000c0fd8
+ (void)resetPodcastSyncVersion;	// IMP=0x00000001000c0f88
+ (void)setPodcastSyncVersion:(id)arg1;	// IMP=0x00000001000c0e28
+ (id)podcastSyncVersion;	// IMP=0x00000001000c0d80
+ (void)resetMetadataToInitialState;	// IMP=0x00000001000bfe8c
+ (void)mergeArray:(id)arg1 fromArray:(id)arg2 lookupKey:(id)arg3 updateBlock:(CDUnknownBlockType)arg4 insertBlock:(CDUnknownBlockType)arg5 deleteBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000001000bfa40
+ (_Bool)isUserLoggedIn;	// IMP=0x00000001000be484
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000bc6a8
+ (id)sharedInstance;	// IMP=0x00000001000bc5d8
- (void).cxx_destruct;	// IMP=0x00000001000c17b8
@property(nonatomic) _Bool resettingToInitialState; // @synthesize resettingToInitialState=_resettingToInitialState;
@property(nonatomic) _Bool resyncWhenDone; // @synthesize resyncWhenDone=_resyncWhenDone;
@property(retain, nonatomic) MZKeyValueStoreController *cloudSyncController; // @synthesize cloudSyncController=_cloudSyncController;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(nonatomic) _Bool uppSyncDirtyFlag; // @synthesize uppSyncDirtyFlag=_uppSyncDirtyFlag;
@property(retain, nonatomic) MTUniversalPlaybackPositionDataSource *UPPDataSource; // @synthesize UPPDataSource=_UPPDataSource;
@property(retain, nonatomic) MZUniversalPlaybackPositionStore *UPPStore; // @synthesize UPPStore=_UPPStore;
- (void)reachabilityChangedFrom:(_Bool)arg1 to:(_Bool)arg2;	// IMP=0x00000001000c16dc
- (void)updateAccountForLastSync;	// IMP=0x00000001000c15bc
- (_Bool)hasAccountChangedSinceLastSync;	// IMP=0x00000001000c15a0
- (_Bool)hasPlaylistSyncVersion;	// IMP=0x00000001000c1124
@property(retain, nonatomic) NSString *playlistSyncVersion; // @dynamic playlistSyncVersion;
- (_Bool)hasPodcastSyncVersion;	// IMP=0x00000001000c0f4c
- (_Bool)needsInitialSync;	// IMP=0x00000001000c0ecc
@property(retain, nonatomic) NSString *podcastSyncVersion; // @dynamic podcastSyncVersion;
- (void)_finaliseResetToInitial:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c0a84
- (void)_synchronousResetToInitialStateMetadata;	// IMP=0x00000001000c0944
- (void)_synchronousResetToInitialStateDatabase;	// IMP=0x00000001000c0560
- (_Bool)resetToInitialStateForced:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bffe8
- (_Bool)resetToInitialStateForced:(_Bool)arg1;	// IMP=0x00000001000bffd8
- (_Bool)resetToInitialStateIfNeeded;	// IMP=0x00000001000bffc8
- (_Bool)resetToInitialStateIfIncomplete;	// IMP=0x00000001000bfd78
- (id)expandFeedUrls:(id)arg1;	// IMP=0x00000001000bf8a4
- (void)scheduleEpisodeStateGetWithFeedUrls:(id)arg1;	// IMP=0x00000001000bf680
- (void)scheduleEpisodeStatePutWithFeedUrls:(id)arg1;	// IMP=0x00000001000bf45c
- (void)enableAssetDeletionIfPossible:(unsigned long long)arg1;	// IMP=0x00000001000bf458
- (void)enableAssetDeletionIfPossible;	// IMP=0x00000001000bf454
- (void)keyValueStoreController:(id)arg1 transactionDidFinish:(id)arg2;	// IMP=0x00000001000bf36c
- (void)keyValueStoreController:(id)arg1 transaction:(id)arg2 didCancelWithError:(id)arg3;	// IMP=0x00000001000bf264
- (_Bool)keyValueStoreController:(id)arg1 transaction:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x00000001000bf0a0
- (void)syncKeyValues;	// IMP=0x00000001000bef40
- (void)syncTermsVersion;	// IMP=0x00000001000bed18
- (void)syncPlaylists:(int)arg1;	// IMP=0x00000001000beb0c
- (void)syncSubscriptions:(int)arg1;	// IMP=0x00000001000be85c
- (void)syncSubscriptions;	// IMP=0x00000001000be788
- (void)syncEverything;	// IMP=0x00000001000be734
- (_Bool)canScheduleSyncRequest;	// IMP=0x00000001000be524
- (_Bool)isUserLoggedIn;	// IMP=0x00000001000be468
- (_Bool)UPPEnabled;	// IMP=0x00000001000be3c4
- (void)performUniversalPlaybackPositionSync;	// IMP=0x00000001000be1e0
- (id)subscriptionKeys;	// IMP=0x00000001000be16c
- (void)dealloc;	// IMP=0x00000001000be044
- (id)operationInQueueWithType:(int)arg1;	// IMP=0x00000001000bdef4
@property(readonly, nonatomic) _Bool isSyncing;
- (void)setIsRunning:(_Bool)arg1;	// IMP=0x00000001000bddcc
@property(readonly, nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
- (void)addOperation:(id)arg1;	// IMP=0x00000001000bd8bc
- (void)startBackgroundTask;	// IMP=0x00000001000bd668
- (void)applicationWillEnterForeground;	// IMP=0x00000001000bd65c
- (void)endBackgroundTask;	// IMP=0x00000001000bd56c
- (void)applicationDidEnterBackground;	// IMP=0x00000001000bd4dc
- (void)operationFinished:(id)arg1;	// IMP=0x00000001000bd120
- (void)start;	// IMP=0x00000001000bc7d4
- (id)init;	// IMP=0x00000001000bc6c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

