/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIView, UIImage;


@protocol TVPMusicNowPlayingBackgroundProvider <NSObject>
@property (nonatomic,readonly) UIView * view; 
@property (getter=isBlurDisabled,nonatomic,readonly) BOOL blurDisabled; 
@property (nonatomic,retain) UIImage * image; 
@optional
-(UIImage *)image;
-(void)setImage:(id)arg1;
-(BOOL)isBlurDisabled;
-(void)beginThrottle;
-(void)endThrottle;

@required
-(UIView *)view;

@end

