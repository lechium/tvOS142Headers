//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface MTStoreInfoUpdater : NSObject
{
    NSOperationQueue *_updateOperationQueue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100164f48
- (void).cxx_destruct;	// IMP=0x0000000100167474
@property(retain, nonatomic) NSOperationQueue *updateOperationQueue; // @synthesize updateOperationQueue=_updateOperationQueue;
- (void)getStoreInfoForEpisodesWithAdamIds:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000100166f14
- (void)getStoreInfoForPodcastWithAdamId:(long long)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000010016677c
- (id)episodesWithMissingAdamIdsForPodcast:(id)arg1 withContext:(id)arg2;	// IMP=0x00000001001665a0
- (_Bool)updateAdamId:(id)arg1 forEpisode:(id)arg2;	// IMP=0x0000000100166474
- (void)updateStoreInfoForEpisodesInPodcast:(id)arg1 withEpisodeIds:(id)arg2 andEpisodesWithGuid:(id)arg3;	// IMP=0x0000000100165b9c
- (void)updateStoreInfoForEpisodesAndPodcast:(id)arg1 skipPodcastLastCheckDate:(_Bool)arg2;	// IMP=0x00000001001654cc
- (void)updateStoreInfoForPodcast:(id)arg1;	// IMP=0x000000010016508c
- (id)init;	// IMP=0x0000000100164fe4

@end
