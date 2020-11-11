/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Podcasts/MTSingleton.h>

@interface MTEpisodeUnavailableUtil : MTSingleton
+(id)longReasonTextForNoInternet;
+(id)longStringForUnavailableReason:(unsigned long long)arg1 podcastTitle:(id)arg2 ;
+(unsigned long long)unavailableReasonForEpisode:(id)arg1 ;
+(id)stringForUnavailableReason:(unsigned long long)arg1 ;
-(void)_presentErrorDialogWithTitle:(id)arg1 message:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)showDialogForReason:(unsigned long long)arg1 podcastTitle:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

