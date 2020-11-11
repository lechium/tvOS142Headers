/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ANLocalPlaybackSessionServiceInterface <ANAPlaybackSessionServiceInterface>
@required
-(void)playAnnouncementsWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)playAnnouncementsWithOptions:(unsigned long long)arg1 startingAt:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)playAnnouncementsWithIDs:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)stopPlayingAnnouncementsWithCompletionHandler:(/*^block*/id)arg1;
-(void)nextAnnouncementWithCompletionHandler:(/*^block*/id)arg1;
-(void)previousAnnouncementWithCompletionHandler:(/*^block*/id)arg1;

@end

