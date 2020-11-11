/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class MPAVItem;


@protocol MPCQueueItemProviding
@property (nonatomic,retain) MPAVItem * currentItem; 
@required
-(void)setCurrentItem:(id)arg1;
-(MPAVItem *)currentItem;
-(void)playerItemDidBecomeCurrent:(id)arg1;
-(void)playerItemDidResignCurrent:(id)arg1;
-(id)itemForContentItemID:(id)arg1 allowReuse:(BOOL)arg2;
-(id)itemToFollowItem:(id)arg1 direction:(long long)arg2 distance:(long long)arg3 jumpToItem:(BOOL)arg4;
-(BOOL)canSkipInDirection:(long long)arg1 fromQueueItem:(id)arg2;

@end

