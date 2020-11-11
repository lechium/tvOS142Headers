//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTCoalescableWorkController;

@interface MTLibrary : NSObject
{
    MTCoalescableWorkController *_deleteHiddenPodcastsWorkController;	// 8 = 0x8
    id _cloudClient;	// 16 = 0x10
    _Bool _subscriptionSyncEnabled;	// 24 = 0x18
    _Bool _iTunesMatchEnabled;	// 25 = 0x19
}

+ (unsigned long long)freeSpace;	// IMP=0x000000010000d70c
+ (_Bool)isSupportedUrlString:(id)arg1;	// IMP=0x0000000100009290
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100008430
+ (id)sharedInstance;	// IMP=0x0000000100008358
+ (void)initialize;	// IMP=0x00000001000082e0
- (void).cxx_destruct;	// IMP=0x000000010000d848
@property(nonatomic) _Bool iTunesMatchEnabled; // @synthesize iTunesMatchEnabled=_iTunesMatchEnabled;
@property(readonly, nonatomic, getter=isSubscriptionSyncEnabled) _Bool subscriptionSyncEnabled; // @synthesize subscriptionSyncEnabled=_subscriptionSyncEnabled;
- (id)storeContext;	// IMP=0x000000010000d6b0
- (id)carPlayContext;	// IMP=0x000000010000d654
- (id)resetableImportContext;	// IMP=0x000000010000d5f8
- (id)importContext;	// IMP=0x000000010000d59c
- (id)privateQueueContext;	// IMP=0x000000010000d540
- (id)mainQueueContext;	// IMP=0x000000010000d4e4
- (id)mainOrPrivateContext;	// IMP=0x000000010000d488
- (_Bool)canDeleteEpisode:(id)arg1;	// IMP=0x000000010000d3bc
- (_Bool)setPlayState:(long long)arg1 fromContextActions:(_Bool)arg2 manually:(_Bool)arg3 forUserActionOnEpisode:(id)arg4 saveChanges:(_Bool)arg5;	// IMP=0x000000010000d130
- (_Bool)setPlayState:(long long)arg1 manually:(_Bool)arg2 forUserActionOnEpisode:(id)arg3 saveChanges:(_Bool)arg4;	// IMP=0x000000010000d114
- (_Bool)setPlayed:(_Bool)arg1 manually:(_Bool)arg2 forUserActionOnEpisode:(id)arg3 saveChanges:(_Bool)arg4;	// IMP=0x000000010000d0fc
- (_Bool)setPlayState:(long long)arg1 manually:(_Bool)arg2 forUserActionOnEpisodeUuid:(id)arg3;	// IMP=0x000000010000cf30
- (_Bool)setPlayed:(_Bool)arg1 manually:(_Bool)arg2 forUserActionOnEpisodeUuid:(id)arg3;	// IMP=0x000000010000cd60
- (void)markAsSaved:(_Bool)arg1 forEpisodeUuids:(id)arg2;	// IMP=0x000000010000ca50
- (_Bool)setStationShowGroupOrder:(id)arg1 forStation:(id)arg2;	// IMP=0x000000010000c5f4
- (_Bool)setEpisodesOrder:(id)arg1 forStation:(id)arg2;	// IMP=0x000000010000c198
- (_Bool)setPodcastsOrder:(id)arg1;	// IMP=0x000000010000bcac
- (_Bool)setStationsOrder:(id)arg1;	// IMP=0x000000010000b8a0
- (void)deleteAllTopLevelStationsExcludingFolders;	// IMP=0x000000010000b608
- (void)deleteAllPodcasts;	// IMP=0x000000010000b324
- (void)deleteOrphanedEpisodes;	// IMP=0x000000010000af18
- (void)deleteEpisodes:(id)arg1;	// IMP=0x000000010000af04
- (void)deleteEpisodeUuids:(id)arg1 forced:(_Bool)arg2;	// IMP=0x000000010000aef8
- (void)deleteEpisodeUuids:(id)arg1;	// IMP=0x000000010000aee8
- (void)_deleteEpisodeUuids:(id)arg1 forced:(_Bool)arg2;	// IMP=0x000000010000aed8
- (void)_deleteEpisodes:(id)arg1 forced:(_Bool)arg2 save:(_Bool)arg3;	// IMP=0x000000010000ab48
- (void)_deleteEpisodeUuids:(id)arg1 forced:(_Bool)arg2 save:(_Bool)arg3;	// IMP=0x000000010000aabc
- (void)_deletePodcast:(id)arg1 ctx:(id)arg2;	// IMP=0x000000010000a7f4
- (void)_deletePodcastWithId:(id)arg1 ctx:(id)arg2;	// IMP=0x000000010000a768
- (void)deleteStationWithUuid:(id)arg1;	// IMP=0x000000010000a5c0
- (void)deletePlaylist:(id)arg1;	// IMP=0x000000010000a498
- (void)_deleteHiddenPodcasts;	// IMP=0x000000010000a208
- (void)deleteHiddenPodcastsSynchronously;	// IMP=0x000000010000a1fc
- (void)deleteHiddenPodcasts;	// IMP=0x000000010000a114
- (void)_deletePodcastWithUuid:(id)arg1 forced:(_Bool)arg2 ctx:(id)arg3;	// IMP=0x0000000100009d58
- (void)deleteFromSyncPodcastsWithUuids:(id)arg1;	// IMP=0x0000000100009bd8
- (void)deletePodcastWithUuid:(id)arg1 shouldSave:(_Bool)arg2;	// IMP=0x0000000100009a80
- (void)deletePodcastWithUuid:(id)arg1;	// IMP=0x0000000100009a70
- (_Bool)isSubscribedToPodcastWithUuid:(id)arg1;	// IMP=0x00000001000097cc
- (_Bool)isSubscribedToPodcastWithFeedUrl:(id)arg1;	// IMP=0x00000001000096dc
- (void)markPlaylistsForUpdateForPodcastUuids:(id)arg1;	// IMP=0x00000001000092a4
- (void)disableSubscriptionOnPodcastUuid:(id)arg1 setSyncDirty:(_Bool)arg2;	// IMP=0x0000000100009214
- (void)disableSubscriptionOnPodcastUuid:(id)arg1 setSyncDirty:(_Bool)arg2 ctx:(id)arg3;	// IMP=0x0000000100009098
- (void)disableSubscriptionOnPodcastUuid:(id)arg1;	// IMP=0x0000000100009088
- (void)enableSubscriptionOnPodcastUuid:(id)arg1 setSyncDirty:(_Bool)arg2 ctx:(id)arg3;	// IMP=0x0000000100008f64
- (void)enableSubscriptionOnPodcastUuid:(id)arg1 setSyncDirty:(_Bool)arg2;	// IMP=0x0000000100008e0c
- (void)enableSubscriptionOnPodcastUuid:(id)arg1;	// IMP=0x0000000100008dfc
- (void)finishPlayingEpisodeUuid:(id)arg1;	// IMP=0x0000000100008b2c
- (id)lastUpdatedDateAttributedString;	// IMP=0x00000001000089f8
- (id)lastUpdatedDateString;	// IMP=0x0000000100008804
- (void)_userDefaultsDidChange:(id)arg1;	// IMP=0x0000000100008778
- (void)updateiTunesPlaylistForiTunesMatchState;	// IMP=0x0000000100008644
- (id)copy;	// IMP=0x0000000100008614
- (id)init;	// IMP=0x0000000100008450

@end
