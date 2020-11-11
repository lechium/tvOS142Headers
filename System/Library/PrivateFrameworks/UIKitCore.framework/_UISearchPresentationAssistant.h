/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDimmingViewDelegate.h>

@protocol _UISearchControllerPresenting, UIViewControllerTransitionCoordinator;
@class UIPresentationController, UIView, UIDimmingView, NSString;

@interface _UISearchPresentationAssistant : NSObject <UIDimmingViewDelegate> {

	UIPresentationController* _searchPresentationController;
	UIView* _searchBarContainerView;
	UIDimmingView* _dimmingView;
	BOOL _isFormSheetPresentation;
	BOOL _presentationWasAnimated;
	UIPresentationController*<_UISearchControllerPresenting> _adaptivePresentationController;
	id<UIViewControllerTransitionCoordinator> _transitioningToSizeCoordinator;

}

@property (assign,nonatomic) BOOL presentationWasAnimated;                                                                         //@synthesize presentationWasAnimated=_presentationWasAnimated - In the implementation block
@property (assign,nonatomic) UIPresentationController*<_UISearchControllerPresenting> adaptivePresentationController;              //@synthesize adaptivePresentationController=_adaptivePresentationController - In the implementation block
@property (nonatomic,retain) id<UIViewControllerTransitionCoordinator> transitioningToSizeCoordinator;                             //@synthesize transitioningToSizeCoordinator=_transitioningToSizeCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)dimmingView;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(id)searchBarContainerView;
-(BOOL)searchBarToBecomeTopAttached;
-(double)resultsControllerContentOffset;
-(double)statusBarAdjustment;
-(BOOL)shouldAccountForStatusBar;
-(UIPresentationController*<_UISearchControllerPresenting>)adaptivePresentationController;
-(id)initWithSearchPresentationController:(id)arg1 ;
-(void)setPresentationWasAnimated:(BOOL)arg1 ;
-(void)ensureAppropriatelySizedSearchBar:(id)arg1 ;
-(void)setAdaptivePresentationController:(UIPresentationController*<_UISearchControllerPresenting>)arg1 ;
-(BOOL)presentationIsPopoverToOverFullScreenAdaptation;
-(id)_searchBarContainerSuperview;
-(CGRect)optimalFrameForSearchBar:(id)arg1 ;
-(BOOL)_currentTransitionIsRotating;
-(BOOL)searchBarWillResizeForScopeBar;
-(id)_searchControllerPresenting;
-(CGRect)_containerFrame;
-(BOOL)_statusBarPreferredHiddenForInterfaceOrientation:(long long)arg1 ;
-(id)locateNavigationController;
-(double)_statusBarHeightChangeDueToRotation;
-(BOOL)_statusBarPreferredHidden;
-(void)removeContainerViewFromSuperview;
-(CGSize)updateSearchBarContainerFrame;
-(BOOL)presentationWasAnimated;
-(id<UIViewControllerTransitionCoordinator>)transitioningToSizeCoordinator;
-(void)setTransitioningToSizeCoordinator:(id<UIViewControllerTransitionCoordinator>)arg1 ;
@end

