/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class TVMediaInfo, UIImage;


@protocol TVMediaController
@property (assign,getter=isPlaybackEnabled,nonatomic) BOOL playbackEnabled; 
@property (assign,nonatomic) BOOL showsVideoControls; 
@property (nonatomic,copy) TVMediaInfo * mediaInfo; 
@property (assign,nonatomic,__weak) id<TVMediaControllerDelegate> delegate; 
@property (nonatomic,readonly) long long state; 
@property (assign,nonatomic) BOOL shouldZoomWhenTransitioningToBackground; 
@property (nonatomic,readonly) UIImage * coverImage; 
@required
-(id<TVMediaControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(long long)state;
-(void)stop;
-(void)pause;
-(void)play;
-(void)setPlaybackEnabled:(BOOL)arg1;
-(BOOL)showsVideoControls;
-(void)setShowsVideoControls:(BOOL)arg1;
-(UIImage *)coverImage;
-(void)setShouldZoomWhenTransitioningToBackground:(BOOL)arg1;
-(void)transitionToForeground:(BOOL)arg1 animated:(BOOL)arg2;
-(TVMediaInfo *)mediaInfo;
-(void)setMediaInfo:(id)arg1;
-(BOOL)isPlaybackEnabled;
-(BOOL)shouldZoomWhenTransitioningToBackground;

@end

