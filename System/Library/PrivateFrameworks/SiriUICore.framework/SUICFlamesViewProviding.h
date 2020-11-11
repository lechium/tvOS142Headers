/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIImage, UIColor;


@protocol SUICFlamesViewProviding <NSObject>
@property (nonatomic,readonly) BOOL isRenderingEnabled; 
@property (assign,nonatomic,__weak) id<SUICFlamesViewProvidingDelegate> flamesDelegate; 
@property (assign,nonatomic) long long mode; 
@property (assign,nonatomic) long long state; 
@property (assign,nonatomic) BOOL showAura; 
@property (assign,nonatomic) BOOL freezesAura; 
@property (assign,nonatomic) BOOL reduceFrameRate; 
@property (assign,nonatomic) BOOL reduceThinkingFramerate; 
@property (assign,nonatomic) CGRect activeFrame; 
@property (nonatomic,retain) UIImage * overlayImage; 
@property (nonatomic,retain) UIColor * dictationColor; 
@property (assign,nonatomic) BOOL renderInBackground; 
@property (assign,nonatomic) BOOL flamesPaused; 
@property (assign,nonatomic) double horizontalScaleFactor; 
@property (assign,nonatomic) BOOL accelerateTransitions; 
@required
-(void)setMode:(long long)arg1;
-(long long)state;
-(void)setState:(long long)arg1;
-(long long)mode;
-(UIImage *)overlayImage;
-(void)setOverlayImage:(id)arg1;
-(void)setRenderInBackground:(BOOL)arg1;
-(void)setActiveFrame:(CGRect)arg1;
-(BOOL)isRenderingEnabled;
-(void)resetAndReinitialize:(BOOL)arg1;
-(void)setRenderingEnabled:(BOOL)arg1 forReason:(id)arg2;
-(id<SUICFlamesViewProvidingDelegate>)flamesDelegate;
-(void)prewarmShadersForCurrentMode;
-(void)fadeOutCurrentAura;
-(void)setFlamesDelegate:(id)arg1;
-(BOOL)showAura;
-(void)setShowAura:(BOOL)arg1;
-(BOOL)freezesAura;
-(void)setFreezesAura:(BOOL)arg1;
-(BOOL)reduceFrameRate;
-(void)setReduceFrameRate:(BOOL)arg1;
-(BOOL)reduceThinkingFramerate;
-(void)setReduceThinkingFramerate:(BOOL)arg1;
-(CGRect)activeFrame;
-(UIColor *)dictationColor;
-(void)setDictationColor:(id)arg1;
-(BOOL)renderInBackground;
-(BOOL)flamesPaused;
-(void)setFlamesPaused:(BOOL)arg1;
-(double)horizontalScaleFactor;
-(void)setHorizontalScaleFactor:(double)arg1;
-(BOOL)accelerateTransitions;
-(void)setAccelerateTransitions:(BOOL)arg1;

@end

