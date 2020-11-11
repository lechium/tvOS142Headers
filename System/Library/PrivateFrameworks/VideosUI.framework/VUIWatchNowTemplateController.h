/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/_TVStackTemplateController.h>

@class UIImageView, VUIWatchNowTemplateBackgroundLayer;

@interface VUIWatchNowTemplateController : _TVStackTemplateController {

	BOOL _shouldFocusUpNext;
	BOOL _upNextFocused;
	UIImageView* _backgroundImageView;
	VUIWatchNowTemplateBackgroundLayer* _backgroundImageGradientLayer;
	UIImageView* _gradientImageView;

}

@property (nonatomic,retain) UIImageView * backgroundImageView;                                              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) VUIWatchNowTemplateBackgroundLayer * backgroundImageGradientLayer;              //@synthesize backgroundImageGradientLayer=_backgroundImageGradientLayer - In the implementation block
@property (nonatomic,retain) UIImageView * gradientImageView;                                                //@synthesize gradientImageView=_gradientImageView - In the implementation block
@property (assign,nonatomic) BOOL shouldFocusUpNext;                                                         //@synthesize shouldFocusUpNext=_shouldFocusUpNext - In the implementation block
@property (assign,getter=isUpNextFocused,nonatomic) BOOL upNextFocused;                                      //@synthesize upNextFocused=_upNextFocused - In the implementation block
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(UIImageView *)backgroundImageView;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(BOOL)shouldAdjustForTabBarSafeAreaInsets;
-(id)scrollStopForShowcaseTransition;
-(void)showcaseFactorDidChange;
-(id)scrollStopForEnteringSectionAtIndex:(long long)arg1 fromEdge:(long long)arg2 ;
-(void)_updateBackgroundImage;
-(void)focusUpNextAnimated:(BOOL)arg1 ;
-(BOOL)isUpNextFocused;
-(BOOL)shouldFocusUpNext;
-(BOOL)_doesCollectionViewHasItems;
-(void)setShouldFocusUpNext:(BOOL)arg1 ;
-(UIImageView *)gradientImageView;
-(void)setUpNextFocused:(BOOL)arg1 ;
-(id)_watchNowBannerScrollStop;
-(VUIWatchNowTemplateBackgroundLayer *)backgroundImageGradientLayer;
-(void)setBackgroundImageGradientLayer:(VUIWatchNowTemplateBackgroundLayer *)arg1 ;
-(void)setGradientImageView:(UIImageView *)arg1 ;
@end
