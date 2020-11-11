/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_MKStackViewDelegate.h>
#import <libobjc.A.dylib/_MKAnimationStackViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol MKStackingViewControllerDelegate;
@class _MKStackView, _MKStackingContentView, NSLayoutConstraint, UIScrollView, NSMapTable, NSArray, NSHashTable, UIView, NSString;

@interface MKStackingViewController : UIViewController <_MKStackViewDelegate, _MKAnimationStackViewDelegate, UIScrollViewDelegate> {

	_MKStackView* _stackView;
	_MKStackingContentView* _contentView;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _stackViewWidthConstraint;
	BOOL _isScrollDisabled;
	unsigned long long _countOfCurrentLayoutInvocations;
	UIScrollView* _scrollView;
	NSMapTable* _viewControllersToPreferredHeightConstraints;
	NSMapTable* _viewsToViewControllers;
	NSArray* _titleViewConstraints;
	BOOL _willRelayoutForPreferredContentSizeChange;
	BOOL _isSettingStackedViews;
	BOOL _contentViewConstraintsAdded;
	NSHashTable* _minimallyVisibleViews;
	BOOL _needsToPerformLayout;
	UIView* _overlayView;
	double _overlayViewOriginY;
	BOOL _mayWantSpearators;
	BOOL _needToCallViewControllerLayoutDelegate;
	NSArray* _viewControllers;
	id<MKStackingViewControllerDelegate> _stackingDelegate;

}

@property (nonatomic,copy) NSArray * viewControllers;                                                   //@synthesize viewControllers=_viewControllers - In the implementation block
@property (assign,nonatomic,__weak) id<MKStackingViewControllerDelegate> stackingDelegate;              //@synthesize stackingDelegate=_stackingDelegate - In the implementation block
@property (assign,getter=isScrollEnabled,nonatomic) BOOL scrollEnabled; 
@property (nonatomic,readonly) UIScrollView * scrollView;                                               //@synthesize scrollView=_scrollView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(NSArray *)viewControllers;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)setViewControllers:(NSArray *)arg1 ;
-(UIScrollView *)scrollView;
-(void)updateViewConstraints;
-(void)_didScroll;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(BOOL)isScrollEnabled;
-(void)stackViewNeedsLayout:(id)arg1 ;
-(double)stackView:(id)arg1 distanceBetweenUpperView:(id)arg2 andLowerView:(id)arg3 ;
-(void)_setScrollEnabled:(BOOL)arg1 forcedUpdate:(BOOL)arg2 ;
-(void)_updateFixedHeightAwareControllers;
-(BOOL)_isSafeToPerformLayout;
-(void)_updateStackViewSubviewsAndChildVCsEntering:(id)arg1 exiting:(id)arg2 ;
-(void)_setUpEnteringViewController:(id)arg1 ;
-(void)_tearDownExitingViewController:(id)arg1 ;
-(id<MKStackingViewControllerDelegate>)stackingDelegate;
-(void)_addPreferredHeightConstraintForViewControllerIfNeeded:(id)arg1 ;
-(void)_removePreferredHeightConstraintFromViewController:(id)arg1 ;
-(void)_setOverlayViewFrame;
-(void)_setPreferredHeight:(double)arg1 forViewController:(id)arg2 ;
-(void)_updateViewControllerVisibilityAfterPositionChange;
-(void)_callViewControllersLayoutDelegateIfNeeded;
-(void)_sendScrollnotification;
-(BOOL)isViewVisbile:(id)arg1 percentageTreshold:(double)arg2 ;
-(double)_titleHeight;
-(double)_fittingHeightForView:(id)arg1 ;
-(double)currentHeight;
-(void)setWidthConstraintConstant:(double)arg1 ;
-(void)setStackingDelegate:(id<MKStackingViewControllerDelegate>)arg1 ;
-(void)setOverlayView:(id)arg1 withOriginY:(double)arg2 ;
-(void)removeOverlayViewAnimated:(BOOL)arg1 ;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
@end

