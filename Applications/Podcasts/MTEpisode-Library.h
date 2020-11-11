//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PodcastsFoundation/MTEpisode.h>

#import "IMMetricsDataSource-Protocol.h"
#import "MTEpisodeIdentifierProvider-Protocol.h"

@class NSString;
@protocol MTEpisodeIdentifier;

@interface MTEpisode (Library) <IMMetricsDataSource, MTEpisodeIdentifierProvider>
+ (_Bool)isExternalMedia:(id)arg1;	// IMP=0x0000000100018828
+ (_Bool)exists:(id)arg1;	// IMP=0x0000000100018654
+ (_Bool)isSaveSupported;	// IMP=0x000000010001864c
+ (long long)downloadSizeLimitForVideo:(_Bool)arg1;	// IMP=0x0000000100018644
+ (long long)downloadSizeLimitForEpisode:(id)arg1;	// IMP=0x0000000100018608
+ (id)timeRemainingStringForEpisode:(id)arg1 abbreviated:(_Bool)arg2;	// IMP=0x000000010001848c
+ (id)timeRemainingStringForEpisode:(id)arg1;	// IMP=0x000000010001847c
+ (id)friendlyPubDateStringForEpisode:(id)arg1 abbreviated:(_Bool)arg2;	// IMP=0x00000001000183cc
+ (id)friendlyPubDateStringForEpisode:(id)arg1;	// IMP=0x00000001000183bc
+ (id)dateLabelDescriptionForEpisode:(id)arg1 download:(id)arg2;	// IMP=0x0000000100018054
+ (id)episodeWithEnclosureURL:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x0000000100017e8c
+ (id)episodeWithMetadataIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x0000000100017cd0
+ (void)prepareForPlatform:(id)arg1;	// IMP=0x0000000100017ccc
+ (id)insertNewEpisodeInManagedObjectContext:(id)arg1;	// IMP=0x0000000100017b44
+ (id)insertNewEpisodeInManagedObjectContext:(id)arg1 title:(id)arg2 podcast:(id)arg3 pubDate:(id)arg4 byteSize:(long long)arg5 guid:(id)arg6 uti:(id)arg7 contentId:(long long)arg8 enclosureUrl:(id)arg9 playStateSource:(int)arg10 importSource:(int)arg11;	// IMP=0x00000001000178f4
+ (id)sortDescriptorsForSeasonsWithOldestEpisodesFirst:(_Bool)arg1;	// IMP=0x000000010012c40c
+ (id)sortDescriptorsForListenNowLatestEpisodes;	// IMP=0x000000010012c3fc
+ (id)sortDescriptorsForListenNow;	// IMP=0x000000010012c2a0
+ (id)sortDescriptorsForTitle;	// IMP=0x000000010012c16c
+ (id)sortDescriptorsForRecentlyPlayed;	// IMP=0x000000010012c108
+ (id)sortDescriptorsForLastDatePlayedAscending:(_Bool)arg1;	// IMP=0x000000010012bfd0
+ (id)sortDescriptorsForPubDateAscending:(_Bool)arg1;	// IMP=0x000000010012be98
+ (id)predicateForUserSetTopLevelEpisodes;	// IMP=0x000000010014d580
+ (id)predicateForIsTopLevel;	// IMP=0x000000010014d534
+ (id)predicateForEpisodesWithSeasonNumbersOnPodcastUuid:(id)arg1;	// IMP=0x000000010014d484
+ (id)predicateForSeasonNumber:(long long)arg1;	// IMP=0x000000010014d3c0
+ (id)predicateForHasSeasonNumber;	// IMP=0x000000010014d37c
+ (id)predicateForEpisodeTitle:(id)arg1 onPodcastUuid:(id)arg2;	// IMP=0x000000010014d2f8
+ (id)predicateForEpisodeGuid:(id)arg1 onPodcastUuid:(id)arg2;	// IMP=0x000000010014d274
+ (id)predicateForEpisodeStoreTrackIds:(id)arg1;	// IMP=0x000000010014d10c
+ (id)predicateForEpisodeStoreTrackId:(long long)arg1;	// IMP=0x000000010014d010
+ (id)predicateForMyEpisodesOnPodcastUuid:(id)arg1 ctx:(id)arg2;	// IMP=0x000000010014cfac
+ (id)predicateForEpisodesOnUnplayedTabOnPodcastUuid:(id)arg1 ctx:(id)arg2;	// IMP=0x000000010014cdd4
+ (id)predicateForUserEpisodesOnPodcastUuid:(id)arg1 ctx:(id)arg2;	// IMP=0x000000010014cbfc
+ (id)predicateForEpisodesInStationShow:(id)arg1;	// IMP=0x000000010014cba8
+ (id)predicateForNewEpisodesOnPodcastUuid:(id)arg1;	// IMP=0x000000010014cb18
+ (id)predicateForEpisodesPublishedThisMonth;	// IMP=0x000000010014c928
+ (id)predicateForEpisodesPublishedThisWeek;	// IMP=0x000000010014c738
+ (id)predicateForEpisodesPublishedToday;	// IMP=0x000000010014c5a4
+ (id)predicateForPlaylistEpisodes;	// IMP=0x000000010014c560
+ (id)predicateForUserEpisodesOnPodcastUuid:(id)arg1 episodeLimit:(long long)arg2 deletePlayedEpisodes:(_Bool)arg3;	// IMP=0x000000010014c444
+ (id)predicateForEpisodesOnSavedTabForPodcastUuid:(id)arg1;	// IMP=0x000000010014c35c
+ (id)predicateForEpisodesInFeedForPodcastUuid:(id)arg1;	// IMP=0x000000010014c2cc
+ (id)predicateForEpisodesOnUnplayedTabOnPodcastUuid:(id)arg1 episodeLimit:(long long)arg2 deletePlayedEpisodes:(_Bool)arg3;	// IMP=0x000000010014c19c
+ (id)predicateForMyEpisodesOnPodcastUuid:(id)arg1 episodeLimit:(long long)arg2 deletePlayedEpisodes:(_Bool)arg3;	// IMP=0x000000010014c190
+ (id)predicateForEpisodesIsFromiTunesSyncOnPodcastUuid:(id)arg1;	// IMP=0x000000010014c100
+ (id)predicateForRecentlyPlayedEpisodesToBeDeletedOnPodcastUuid:(id)arg1 deletePlayedEpisodes:(_Bool)arg2;	// IMP=0x000000010014bf48
+ (id)predicateForOtherEpisodesOnPodcastUuid:(id)arg1 limittedEpisodesPredicate:(id)arg2 deletePlayedEpisodes:(_Bool)arg3;	// IMP=0x000000010014bc8c
+ (id)predicateForEpisodeTypeFilter:(long long)arg1;	// IMP=0x000000010014bb18
+ (id)predicateForEpisodeType:(long long)arg1;	// IMP=0x000000010014ba44
+ (id)predicateForEpisodesImportedAfterDate:(id)arg1;	// IMP=0x000000010014b9f0
+ (id)predicateForEpisodeTitle:(id)arg1;	// IMP=0x000000010014b9ac
+ (id)predicateForHasValidPersistentId:(_Bool)arg1;	// IMP=0x000000010014b938
+ (id)predicateForPersistentIds:(id)arg1;	// IMP=0x000000010014b8f4
+ (id)predicateForPersistentId:(id)arg1;	// IMP=0x000000010014b8b0
+ (id)predicateForFeedURLs:(id)arg1;	// IMP=0x000000010014b814
+ (id)predicateForFeedURL:(id)arg1;	// IMP=0x000000010014b7c0
+ (id)predicateForEpisodeGuids:(id)arg1;	// IMP=0x000000010014b734
+ (id)predicateForEpisodeGuid:(id)arg1;	// IMP=0x000000010014b6f0
+ (id)predicateForEpisodeUuids:(id)arg1;	// IMP=0x000000010014b664
+ (id)predicateForEpisodeUuid:(id)arg1;	// IMP=0x000000010014b620
+ (id)predicateForHasBeenPlayed;	// IMP=0x000000010014b58c
+ (id)predicateForRecentlyPlayed;	// IMP=0x000000010014b450
+ (id)predicateForExternalType:(_Bool)arg1;	// IMP=0x000000010014b3c0
+ (id)predicateForMetadataFirstSyncEligible:(_Bool)arg1;	// IMP=0x000000010014b330
+ (id)predicateForAudio:(_Bool)arg1;	// IMP=0x000000010014b2a0
+ (id)predicateForVideo:(_Bool)arg1;	// IMP=0x000000010014b210
+ (id)predicateForFeedDeleted:(_Bool)arg1;	// IMP=0x000000010014b180
+ (id)predicateForIsFromiTunesSync:(_Bool)arg1;	// IMP=0x000000010014b0f0
+ (id)predicateForDownloaded:(_Bool)arg1;	// IMP=0x000000010014b084
+ (id)predicateForPlayStateManuallySet:(_Bool)arg1;	// IMP=0x000000010014aff4
+ (id)predicateForListenNowLatestEpisodes;	// IMP=0x000000010014ae0c
+ (id)predicateForListenNowForPodcastUuid:(id)arg1;	// IMP=0x000000010014ac7c
+ (id)predicateForListenNow;	// IMP=0x000000010014ab60
+ (id)predicateForUserEpisodes;	// IMP=0x000000010014aacc
+ (id)predicateForEpisodesOnUnplayedTab;	// IMP=0x000000010014aa38
+ (id)predicateForPreviouslyPlayedHidingFutureTimestamps;	// IMP=0x000000010014a9ac
+ (id)predicateForHidingFuturePlayedTimestamps;	// IMP=0x000000010014a8d4
+ (id)predicateForPreviouslyPlayed;	// IMP=0x000000010014a7e4
+ (id)predicateForVisuallyPlayed:(_Bool)arg1;	// IMP=0x000000010014a6e0
+ (id)predicateForIsBackCatalogItem;	// IMP=0x000000010014a5f4
+ (id)predicateForBacklog:(_Bool)arg1;	// IMP=0x000000010014a564
+ (id)predicateForSavedTab:(_Bool)arg1;	// IMP=0x000000010014a498
+ (id)predicateForUserEpisode:(_Bool)arg1;	// IMP=0x000000010014a408
+ (id)predicateForUnplayedTabFlag:(_Bool)arg1;	// IMP=0x000000010014a378
+ (id)predicateForPlayed:(_Bool)arg1;	// IMP=0x000000010014a2b0
+ (id)predicateForExplicit:(_Bool)arg1;	// IMP=0x000000010014a220
+ (id)predicateForSentNotification:(_Bool)arg1;	// IMP=0x000000010014a190
+ (id)predicateForIsNew:(_Bool)arg1;	// IMP=0x000000010014a100
+ (id)predicateForSuppressAutoDownload:(_Bool)arg1;	// IMP=0x000000010014a070
+ (id)predicateForSaved:(_Bool)arg1;	// IMP=0x0000000100149fe0
+ (id)predicateForPodcastIsSubscribed:(_Bool)arg1;	// IMP=0x0000000100149f50
+ (id)predicateForPodcastIsHidden:(_Bool)arg1;	// IMP=0x0000000100149ec0
+ (id)predicateForSavedEpisodesOnPodcastUuid:(id)arg1;	// IMP=0x0000000100149e30
+ (id)predicateForAllEpisodesOnPodcastUuid:(id)arg1 includeNonAudioEpisodes:(_Bool)arg2;	// IMP=0x0000000100149d6c
+ (id)predicateForAllEpisodesOnPodcastUuid:(id)arg1;	// IMP=0x0000000100149d28
+ (id)predicateForLimittedEpisodesOnPodcastUuid:(id)arg1 determinedByLimit:(long long)arg2 deletePlayedEpisodes:(_Bool)arg3;	// IMP=0x0000000100149b54
+ (id)predicateForEpisodesDeterminedByLimitSettings:(long long)arg1;	// IMP=0x0000000100149984
+ (id)userDefaultPropertiesAffectingPredicates;	// IMP=0x00000001001498cc
+ (id)artworkForEpisodeUuid:(id)arg1 size:(struct CGSize)arg2 triggerDownload:(_Bool)arg3;	// IMP=0x00000001001603a0
+ (id)artworkForEpisodeUuid:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0000000100160390
- (id)metricsContentIdentifier;	// IMP=0x000000010001ad88
- (void)setStoreTrackId:(long long)arg1;	// IMP=0x000000010001acd8
- (_Bool)isCurrentPlayerItem;	// IMP=0x000000010001ac4c
- (_Bool)isSaved;	// IMP=0x000000010001ac40
- (void)setSaved:(_Bool)arg1;	// IMP=0x000000010001aad4
- (void)setListenNowEpisode:(_Bool)arg1;	// IMP=0x000000010001a764
- (void)setLastDatePlayed:(double)arg1;	// IMP=0x000000010001a654
- (void)updateListenNowSortingDate;	// IMP=0x000000010001a448
- (void)setPlayhead:(float)arg1;	// IMP=0x000000010001a344
- (void)setPlayState:(long long)arg1 manually:(_Bool)arg2 source:(int)arg3;	// IMP=0x0000000100019d64
- (void)setPlayed:(_Bool)arg1 manually:(_Bool)arg2 source:(int)arg3;	// IMP=0x0000000100019d4c
- (void)incremementPlayCount;	// IMP=0x0000000100019d14
- (void)setPlayCount:(long long)arg1;	// IMP=0x0000000100019c44
- (void)setMetadataFirstSyncEligible:(_Bool)arg1;	// IMP=0x0000000100019b80
- (void)didChangePersistentID;	// IMP=0x0000000100019a64
- (void)setAssetURL:(id)arg1;	// IMP=0x000000010001991c
- (void)setUti:(id)arg1;	// IMP=0x0000000100019744
- (id)playedTextForCarplay;	// IMP=0x00000001000194d8
- (id)playedText;	// IMP=0x0000000100019364
- (void)setItemDescription:(id)arg1;	// IMP=0x00000001000190fc
- (void)setItunesSubtitle:(id)arg1;	// IMP=0x0000000100018fd4
- (_Bool)isInPodcastDetailsUnplayedTab;	// IMP=0x0000000100018ed4
- (_Bool)isInMyEpisodes;	// IMP=0x0000000100018dd4
- (unsigned long long)reasonForNotPlayable;	// IMP=0x0000000100018dbc
- (_Bool)isPlayable;	// IMP=0x0000000100018d98
- (_Bool)isRestricted;	// IMP=0x0000000100018d48
- (_Bool)isShareable;	// IMP=0x0000000100018cdc
- (void)setAuthor:(id)arg1;	// IMP=0x0000000100018bc8
- (void)setTitle:(id)arg1;	// IMP=0x0000000100018ab4
- (void)setGuid:(id)arg1;	// IMP=0x00000001000189c4
- (_Bool)isLatestEpisodeInPodcast;	// IMP=0x00000001000e4af8
- (_Bool)isInUserEpisodes;	// IMP=0x00000001000e49f8
- (void)setPodcast:(id)arg1;	// IMP=0x00000001000e48d8
- (_Bool)isEpisodeVisited;	// IMP=0x000000010010aed0
@property(readonly, nonatomic) id <MTEpisodeIdentifier> episodeIdentifier;
- (void)updateUPPTimestamp;	// IMP=0x000000010014e044
- (void)updateUPPIdentifierIfNeeded;	// IMP=0x000000010014df20
- (void)_setValue:(id)arg1 forKey:(id)arg2 asynchronously:(_Bool)arg3;	// IMP=0x0000000100159484
- (id)lazyDescriptionWithHTML:(_Bool)arg1;	// IMP=0x000000010015934c
- (id)playStatusImageForDarkBackground:(_Bool)arg1;	// IMP=0x0000000100160728
- (id)playStatusImageForTheme:(id)arg1;	// IMP=0x0000000100160638
- (id)playStatusImage;	// IMP=0x0000000100160628
- (id)artworkWithSize:(struct CGSize)arg1;	// IMP=0x000000010016050c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

