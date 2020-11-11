/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SUICFlamesViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SiriUI/SiriUISiriStatusViewProtocol.h>

@protocol OS_dispatch_queue, SiriUISiriStatusViewDelegate, SiriUISiriStatusViewAnimationDelegate;
@class UIView, UILongPressGestureRecognizer, SUICFlamesView, AVPlayerLayer, AVPlayerLooper, AVQueuePlayer, AVPlayerItem, AVAudioSession, NSObject, UIScreen, SiriUIConfiguration, NSString;

@interface SiriUISiriStatusView : UIView <SUICFlamesViewDelegate, UIGestureRecognizerDelegate, SiriUISiriStatusViewProtocol> {

	UIView* _touchInputView;
	UILongPressGestureRecognizer* _longPressRecognizer;
	UIView* _flamesContainerView;
	SUICFlamesView* _flamesView;
	UIView* _glyphView;
	AVPlayerLayer* _glyphLayer;
	AVPlayerLooper* _glyphPlayerLooper;
	AVQueuePlayer* _glyphQueuePlayer;
	AVPlayerItem* _glyphPlayerItem;
	AVAudioSession* _glyphAudioSession;
	NSObject*<OS_dispatch_queue> _glyphConfigurationQueue;
	double _lastStateChangeTime;
	UIScreen* _screen;
	long long _deferredFlamesViewState;
	SiriUIConfiguration* _configuration;
	BOOL _textInputEnabled;
	BOOL _siriGlyphHidden;
	BOOL _flamesViewDeferred;
	BOOL _inUITrackingMode;
	BOOL _paused;
	long long _mode;
	double _disabledMicOpacity;
	id<SiriUISiriStatusViewDelegate> _delegate;
	double _flamesViewWidth;
	id<SiriUISiriStatusViewAnimationDelegate> _animationDelegate;

}

@property (assign,nonatomic,__weak) id<SiriUISiriStatusViewAnimationDelegate> animationDelegate;              //@synthesize animationDelegate=_animationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long mode;                                                                  //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) double flamesViewWidth;                                                          //@synthesize flamesViewWidth=_flamesViewWidth - In the implementation block
@property (assign,nonatomic) double disabledMicOpacity;                                                       //@synthesize disabledMicOpacity=_disabledMicOpacity - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUISiriStatusViewDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * flamesContainerView; 
@property (assign,nonatomic) BOOL flamesViewDeferred;                                                         //@synthesize flamesViewDeferred=_flamesViewDeferred - In the implementation block
@property (assign,getter=isInUITrackingMode,nonatomic) BOOL inUITrackingMode;                                 //@synthesize inUITrackingMode=_inUITrackingMode - In the implementation block
@property (assign,nonatomic) BOOL paused;                                                                     //@synthesize paused=_paused - In the implementation block
@property (nonatomic,readonly) double statusViewHeight; 
+(CGRect)activeFrameForScreen:(id)arg1 frame:(CGRect)arg2 safeAreaInsets:(UIEdgeInsets)arg3 ;
-(void)dealloc;
-(id<SiriUISiriStatusViewDelegate>)delegate;
-(void)setDelegate:(id<SiriUISiriStatusViewDelegate>)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)paused;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)safeAreaInsets;
-(void)layoutSubviews;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)safeAreaInsetsDidChange;
-(void)setAnimationDelegate:(id<SiriUISiriStatusViewAnimationDelegate>)arg1 ;
-(float)audioLevelForFlamesView:(id)arg1 ;
-(void)fadeOutCurrentAura;
-(id)_flamesView;
-(void)_micButtonTapped:(id)arg1 ;
-(void)_micButtonHeld:(id)arg1 ;
-(void)_handleKeyboardDidShowNotification:(id)arg1 ;
-(void)_handleKeyboardWillHideNotification:(id)arg1 ;
-(void)_animateSiriGlyphHidden:(BOOL)arg1 ;
-(void)_setupOrbIfNeeded:(/*^block*/id)arg1 ;
-(CGRect)_flamesViewFrame;
-(void)_layoutFlamesViewIfNeeded;
-(CGRect)_flamesFrame;
-(double)flamesViewWidth;
-(void)_setFlamesViewState:(long long)arg1 ;
-(void)_attachFlamesViewIfNeeded;
-(CGRect)_siriGlyphTappableRect;
-(void)setupOrbIfNeeded;
-(void)forceMicVisible:(BOOL)arg1 ;
-(void)setFlamesViewWidth:(double)arg1 ;
-(double)disabledMicOpacity;
-(void)setDisabledMicOpacity:(double)arg1 ;
-(UIView *)flamesContainerView;
-(BOOL)flamesViewDeferred;
-(void)setFlamesViewDeferred:(BOOL)arg1 ;
-(BOOL)isInUITrackingMode;
-(void)setInUITrackingMode:(BOOL)arg1 ;
-(double)statusViewHeight;
-(id)initWithFrame:(CGRect)arg1 screen:(id)arg2 textInputEnabled:(BOOL)arg3 configuration:(id)arg4 ;
-(id<SiriUISiriStatusViewAnimationDelegate>)animationDelegate;
@end

