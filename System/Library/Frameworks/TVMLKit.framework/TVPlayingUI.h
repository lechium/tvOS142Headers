/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIViewController;


@protocol TVPlayingUI <NSObject>
@property (assign,nonatomic) long long resumeMenuBehavior; 
@property (nonatomic,retain) UIViewController * overlayViewController; 
@property (assign,nonatomic) BOOL showsVideoControls; 
@required
-(UIViewController *)overlayViewController;
-(long long)resumeMenuBehavior;
-(void)setResumeMenuBehavior:(long long)arg1;
-(void)setOverlayViewController:(id)arg1;
-(BOOL)showsVideoControls;
-(void)setShowsVideoControls:(BOOL)arg1;

@end

