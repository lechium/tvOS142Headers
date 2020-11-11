/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIPageControlVisualProvider.h>

@class UIImage, NSMutableArray, UIVisualEffectView, _UILegibilitySettings;

@interface _UILegacyPageControlVisualProvider : _UIPageControlVisualProvider {

	UIImage* _currentPageImage;
	UIImage* _pageImage;
	NSMutableArray* _currentPageImages;
	NSMutableArray* _pageImages;
	UIVisualEffectView* _backgroundVisualEffectView;
	NSMutableArray* _indicators;
	_UILegibilitySettings* __legibilitySettings;

}

@property (setter=_setLegibilitySettings:,getter=_legibilitySettings,nonatomic,retain) _UILegibilitySettings * _legibilitySettings;              //@synthesize _legibilitySettings=__legibilitySettings - In the implementation block
@property (assign,setter=_setLegibilityStyle:,getter=_legibilityStyle,nonatomic) long long _legibilityStyle; 
-(void)prepare;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(id)effectiveContentView;
-(CGSize)sizeForNumberOfPages:(long long)arg1 ;
-(id)_pageIndicatorImageForPage:(long long)arg1 ;
-(id)_pageIndicatorCurrentImageForPage:(long long)arg1 ;
-(void)pruneArchivedSubviews:(id)arg1 ;
-(void)didUpdateNumberOfPages;
-(void)updateDisplayedPageToCurrentPage;
-(void)didUpdatePageIndicatorTintColor;
-(void)didUpdateCurrentPageIndicatorTintColor;
-(id)preferredIndicatorImage;
-(long long)_legibilityStyle;
-(_UILegibilitySettings *)_legibilitySettings;
-(void)_setLegibilityStyle:(long long)arg1 ;
-(void)_setLegibilitySettings:(id)arg1 ;
-(void)invalidateIndicators;
-(void)_drawModernIndicatorInView:(id)arg1 enabled:(BOOL)arg2 ;
-(id)_createModernIndicatorImageFromView:(id)arg1 ;
-(id)_indicatorViewEnabled:(BOOL)arg1 index:(long long)arg2 ;
-(void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 ;
-(void)didEndTrackingWithTouch:(id)arg1 ;
-(void)_hideBackgroundEffectView;
-(double)_indicatorSpacing;
-(void)_cachePageIndicatorImages;
-(CGRect)_modernBounds;
-(BOOL)_hasCustomImageForPage:(long long)arg1 enabled:(BOOL)arg2 ;
-(CGRect)_indicatorFrameAtIndex:(long long)arg1 ;
-(void)_setDisplayedPage:(long long)arg1 ;
-(id)_cachedPageIndicatorCurrentImageForPage:(long long)arg1 ;
-(id)_cachedPageIndicatorImageForPage:(long long)arg1 ;
-(void)_modernTransitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 legible:(BOOL)arg4 ;
-(BOOL)_shouldDrawLegibly;
-(void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 legible:(BOOL)arg4 ;
-(id)_indicatorViewEnabled:(BOOL)arg1 index:(long long)arg2 legible:(BOOL)arg3 ;
-(id)_modernIndicatorImageEnabled:(BOOL)arg1 ;
-(id)_modernColorEnabled:(BOOL)arg1 ;
-(double)_modernCornerRadius;
-(id)defaultActivePageIndicatorImage;
@end

