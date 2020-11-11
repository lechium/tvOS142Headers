/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPAVQueueControllerDelegate <NSObject>
@required
-(void)queueControllerDidChangeContents:(id)arg1;
-(void)queueController:(id)arg1 failedToLoadItem:(id)arg2;
-(void)queueController:(id)arg1 didChangeContentsWithReplacementPlaybackContext:(id)arg2;
-(void)queueController:(id)arg1 didChangeRepeatType:(long long)arg2;
-(void)queueController:(id)arg1 didChangeShuffleType:(long long)arg2;
-(void)queueController:(id)arg1 didChangeActionAtQueueEnd:(long long)arg2;
-(void)queueController:(id)arg1 didIncrementVersionForSegment:(id)arg2;

@end

