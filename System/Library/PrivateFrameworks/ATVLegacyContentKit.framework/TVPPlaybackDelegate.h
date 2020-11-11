/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVPPlaybackDelegate <NSObject>
@optional
-(id)player:(id)arg1 filteredSubtitleOptionsFromOptions:(id)arg2;

@required
-(BOOL)player:(id)arg1 shouldSeekToTime:(double*)arg2 playbackDate:(id*)arg3;
-(BOOL)playerShouldPlay:(id)arg1 timeFromWhichToPlay:(double*)arg2;
-(BOOL)playerShouldPause:(id)arg1;
-(BOOL)player:(id)arg1 shouldScanAtRate:(double)arg2;
-(BOOL)player:(id)arg1 shouldChangeMediaInDirection:(long long)arg2;
-(BOOL)player:(id)arg1 shouldChangeToMediaAtIndex:(unsigned long long)arg2;

@end

