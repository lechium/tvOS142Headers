//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTURLSessionManager.h"

@class NSMutableArray, NSObject, _TtC8Podcasts24FeedManagerConfiguration;
@protocol OS_dispatch_queue;

@interface MTBaseFeedManager : MTURLSessionManager
{
    _Bool _sessionTaskStateReloaded;	// 8 = 0x8
    _TtC8Podcasts24FeedManagerConfiguration *_configuration;	// 16 = 0x10
    NSMutableArray *_pendingFeedProcessingBlocks;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_feedProcessingQueue;	// 40 = 0x28
}

+ (void)standardDeviationForEpisodes:(id)arg1 standardDeviation:(double *)arg2 average:(double *)arg3;	// IMP=0x000000010012752c
+ (void)postNotificationName:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000100127400
+ (void)didFinishUpdatingAllFeeds:(_Bool)arg1;	// IMP=0x00000001001272cc
+ (void)removeCompanionStartDateForOngoingFetchOfFeedUrl:(id)arg1;	// IMP=0x0000000100127268
+ (void)didFinishUpdatingFeedUrl:(id)arg1;	// IMP=0x0000000100126fcc
+ (void)setCompanionStartDateForOngoingFetchOfFeedUrl:(id)arg1 cloudSyncUrl:(id)arg2;	// IMP=0x0000000100126ea4
+ (void)didStartUpdatingFeedUrl:(id)arg1 cloudSyncUrl:(id)arg2;	// IMP=0x0000000100126d04
+ (id)_metadataUrl;	// IMP=0x0000000100126ca0
+ (_Bool)isSubscribing;	// IMP=0x0000000100126874
+ (void)saveSubscriptionMetadata;	// IMP=0x0000000100126728
+ (void)removeMetadataForPodcastUuid:(id)arg1;	// IMP=0x00000001001266a4
+ (void)purgeSubscriptionMetadata;	// IMP=0x0000000100126644
+ (unsigned long long)updatingCount;	// IMP=0x0000000100125b54
+ (_Bool)isUpdatingFeedUrl:(id)arg1;	// IMP=0x0000000100125ab0
+ (_Bool)isUpdatingPodcastUuid:(id)arg1;	// IMP=0x00000001001257e0
+ (void)initialize;	// IMP=0x0000000100120a7c
- (void).cxx_destruct;	// IMP=0x00000001001278cc
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *feedProcessingQueue; // @synthesize feedProcessingQueue=_feedProcessingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableArray *pendingFeedProcessingBlocks; // @synthesize pendingFeedProcessingBlocks=_pendingFeedProcessingBlocks;
@property(retain, nonatomic) _TtC8Podcasts24FeedManagerConfiguration *configuration; // @synthesize configuration=_configuration;
@property _Bool sessionTaskStateReloaded; // @synthesize sessionTaskStateReloaded=_sessionTaskStateReloaded;
- (void)_queue_processNextPendingFeedIfPossible;	// IMP=0x0000000100126a20
- (void)_processNextPendingFeedIfPossible;	// IMP=0x0000000100126994
- (void)_addPendingFeedProcessingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010012687c
- (void)restoreBackgroundDownloadTasksWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100126080
- (void)startDownloadForFeedUrl:(id)arg1 cloudSyncFeedUrl:(id)arg2 userInitiated:(_Bool)arg3 useBackgroundFetch:(_Bool)arg4;	// IMP=0x0000000100125ca8
- (_Bool)abortUpdatesIfNetworkUnreachable:(_Bool)arg1;	// IMP=0x0000000100125bc0
- (_Bool)saveAndResetImportContext:(id)arg1 ifNeededForImportCount:(unsigned long long)arg2 totalItemsCount:(unsigned long long)arg3 isLastBatch:(_Bool)arg4;	// IMP=0x0000000100125600
- (_Bool)updatePodcastWithUuid:(id)arg1 withFeed:(id)arg2;	// IMP=0x0000000100123d5c
- (void)task:(id)arg1 didFailWithError:(id)arg2 orStatusCode:(long long)arg3;	// IMP=0x0000000100123474
- (void)updateGizmoLastFetchedDateAndRevisionNumberFor:(id)arg1 forPodcastFeedURL:(id)arg2;	// IMP=0x0000000100123350
- (void)updateCompanionLastFetchedDateFor:(id)arg1 forPodcastFeedURL:(id)arg2;	// IMP=0x0000000100123254
- (_Bool)processFeedWithData:(id)arg1 requestUrl:(id)arg2 useBackgroundFetch:(_Bool)arg3;	// IMP=0x0000000100122604
- (id)importContext;	// IMP=0x0000000100122564
- (void)task:(id)arg1 didCompleteWithDownloadedContentUrl:(id)arg2;	// IMP=0x0000000100121a28
- (_Bool)isFileExpired:(id)arg1 inDirectory:(id)arg2;	// IMP=0x00000001001217e8
- (void)_removeTempFiles;	// IMP=0x0000000100121350
- (_Bool)createPrivateTempDirIfNeeded;	// IMP=0x00000001001211cc
- (id)privatePathForDownload;	// IMP=0x000000010012101c
- (id)temporaryDirectory;	// IMP=0x0000000100120f7c
- (void)_enqueueTempFilesDeletion;	// IMP=0x0000000100120f00
- (void)setSessionCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100120eb0
- (id)init;	// IMP=0x0000000100120c58
- (void)configureSession:(id)arg1;	// IMP=0x0000000100120bcc

@end

