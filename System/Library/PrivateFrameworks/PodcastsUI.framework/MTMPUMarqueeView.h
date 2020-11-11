/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PodcastsUI/PodcastsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol MTMPUMarqueeViewDelegate;
@class NSUUID, NSPointerArray, UIView, NSArray, NSString;

@interface MTMPUMarqueeView : UIView <CAAnimationDelegate> {

	NSUUID* _currentAnimationID;
	long long _options;
	NSPointerArray* _coordinatedMarqueeViews;
	MTMPUMarqueeView* _primaryMarqueeView;
	BOOL _fadeOnlyWhenAnimating;
	BOOL _marqueeEnabled;
	double _contentGap;
	UIView* _contentView;
	UIView* _animationReferenceView;
	id<MTMPUMarqueeViewDelegate> _delegate;
	double _marqueeDelay;
	double _marqueeScrollRate;
	UIView* _viewForContentSize;
	long long _animationDirection;
	CGSize _contentSize;
	UIEdgeInsets _fadeEdgeInsets;

}

@property (assign,nonatomic) double contentGap;                                         //@synthesize contentGap=_contentGap - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                        //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                    //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) UIView * animationReferenceView;                    //@synthesize animationReferenceView=_animationReferenceView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets fadeEdgeInsets;                               //@synthesize fadeEdgeInsets=_fadeEdgeInsets - In the implementation block
@property (assign,nonatomic) BOOL fadeOnlyWhenAnimating;                                //@synthesize fadeOnlyWhenAnimating=_fadeOnlyWhenAnimating - In the implementation block
@property (assign,nonatomic,__weak) id<MTMPUMarqueeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double marqueeDelay;                                       //@synthesize marqueeDelay=_marqueeDelay - In the implementation block
@property (assign,nonatomic) double marqueeScrollRate;                                  //@synthesize marqueeScrollRate=_marqueeScrollRate - In the implementation block
@property (assign,getter=isMarqueeEnabled,nonatomic) BOOL marqueeEnabled;               //@synthesize marqueeEnabled=_marqueeEnabled - In the implementation block
@property (nonatomic,readonly) NSArray * coordinatedMarqueeViews; 
@property (nonatomic,retain) UIView * viewForContentSize;                               //@synthesize viewForContentSize=_viewForContentSize - In the implementation block
@property (assign,nonatomic) long long animationDirection;                              //@synthesize animationDirection=_animationDirection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MTMPUMarqueeViewDelegate>)delegate;
-(void)setDelegate:(id<MTMPUMarqueeViewDelegate>)arg1 ;
-(double)_duration;
-(void)setFrame:(CGRect)arg1 ;
-(void)animationDidStart:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)contentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)contentView;
-(CGSize)intrinsicContentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)invalidateIntrinsicContentSize;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)setMarqueeEnabled:(BOOL)arg1 ;
-(void)_createMarqueeAnimationIfNeeded;
-(void)_tearDownMarqueeAnimation;
-(long long)animationDirection;
-(void)_applyMarqueeFade;
-(void)setMarqueeEnabled:(BOOL)arg1 withOptions:(long long)arg2 ;
-(void)addCoordinatedMarqueeView:(id)arg1 ;
-(void)_createMarqueeAnimationIfNeededWithMaximumDuration:(double)arg1 beginTime:(double)arg2 ;
-(void)setContentGap:(double)arg1 ;
-(void)setMarqueeDelay:(double)arg1 ;
-(void)setAnimationReferenceView:(UIView *)arg1 ;
-(void)setMarqueeScrollRate:(double)arg1 ;
-(void)setViewForContentSize:(UIView *)arg1 ;
-(void)setAnimationDirection:(long long)arg1 ;
-(NSArray *)coordinatedMarqueeViews;
-(void)resetMarqueePosition;
-(double)contentGap;
-(UIView *)animationReferenceView;
-(UIEdgeInsets)fadeEdgeInsets;
-(void)setFadeEdgeInsets:(UIEdgeInsets)arg1 ;
-(double)marqueeDelay;
-(double)marqueeScrollRate;
-(BOOL)isMarqueeEnabled;
-(UIView *)viewForContentSize;
-(BOOL)fadeOnlyWhenAnimating;
-(void)_applyMarqueeFadeIfNeeded;
-(void)_removeMarqueeFade;
-(void)setFadeOnlyWhenAnimating:(BOOL)arg1 ;
@end

