/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVPlayerViewController.h>

@class IMAVPlayer;

@interface IMAVPlayerVideoViewController : AVPlayerViewController {

	IMAVPlayer* _im_player;

}

@property (assign,nonatomic,__weak) IMAVPlayer * im_player;              //@synthesize im_player=_im_player - In the implementation block
-(id)initWithPlayer:(id)arg1 ;
-(void)setIm_player:(IMAVPlayer *)arg1 ;
-(void)mediaItemDidChange;
-(void)playbackSpeedDidChange;
-(IMAVPlayer *)im_player;
@end

