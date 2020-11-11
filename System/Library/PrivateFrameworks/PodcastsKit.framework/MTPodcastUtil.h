/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MTPodcastUtil : NSObject
+(id)stringForMostRecentEpisodeCount:(long long)arg1 ;
+(id)stringForUnplayedEpisodeCount:(long long)arg1 titleCase:(BOOL)arg2 ;
+(id)stringForUnplayedEpisodeCount:(long long)arg1 ;
+(id)stringForSavedEpisodeCount:(long long)arg1 ;
+(id)stringForNewEpisodeCount:(long long)arg1 titleCase:(BOOL)arg2 ;
+(id)stringForATVFeedLastChangedForDate:(id)arg1 ;
+(id)stringForEpisodeCount:(long long)arg1 ;
+(id)stringForUnplayedEpisodeCount:(unsigned long long)arg1 withSavedEpisodeCount:(unsigned long long)arg2 ;
+(id)stringForNewEpisodeCount:(long long)arg1 ;
+(id)stringForEpisodesInFeedCount:(long long)arg1 ;
+(id)stringForATVFeedLastChangedForPodcast:(id)arg1 ;
+(unsigned long long)episodeCountForPredicate:(id)arg1 ;
+(id)episodeTitlesForPredicate:(id)arg1 ;
+(unsigned long long)countOfUnplayedEpisodesForPodcastUuid:(id)arg1 ;
@end

