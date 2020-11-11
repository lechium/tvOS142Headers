/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UIView.h>

@class AVPlayer, NSString, AVPlayerLayer;

@interface TVPMusicNowPlayingVideoView : UIView {

	BOOL _shouldAutomaticallyAdjustVideoGravity;
	AVPlayer* _player;
	NSString* _videoGravity;

}

@property (nonatomic,readonly) AVPlayerLayer * playerLayer; 
@property (nonatomic,retain) AVPlayer * player;                                       //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) NSString * videoGravity;                                 //@synthesize videoGravity=_videoGravity - In the implementation block
@property (assign,nonatomic) BOOL shouldAutomaticallyAdjustVideoGravity;              //@synthesize shouldAutomaticallyAdjustVideoGravity=_shouldAutomaticallyAdjustVideoGravity - In the implementation block
+(Class)layerClass;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setFrame:(CGRect)arg1 ;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setVideoGravity:(NSString *)arg1 ;
-(AVPlayerLayer *)playerLayer;
-(CGSize)intrinsicContentSize;
-(NSString *)videoGravity;
-(BOOL)shouldAutomaticallyAdjustVideoGravity;
-(void)_setVideoGravity:(id)arg1 ;
-(void)_updateVideoGravityIfPossible;
-(void)setShouldAutomaticallyAdjustVideoGravity:(BOOL)arg1 ;
@end
