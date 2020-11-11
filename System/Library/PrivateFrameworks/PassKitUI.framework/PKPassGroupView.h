/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WLCardViewDelegate.h>
#import <libobjc.A.dylib/PKGroupDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PKPassGroupViewDelegate;
@class NSMutableDictionary, NSMutableArray, UIScrollView, UIPageControl, UIPanGestureRecognizer, UILongPressGestureRecognizer, UIMotionEffectGroup, UIViewController, NSString, PKPassView, PKGroup, PKReusablePassViewQueue;

@interface PKPassGroupView : UIView <WLCardViewDelegate, PKGroupDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	unsigned short _animationCounter;
	unsigned short _pageControlAnimationCounter;
	unsigned short _frontFaceContentModePinningCounter;
	long long _presentationState;
	SCD_Struct_PK22 _layoutState;
	NSMutableDictionary* _passViewsByUniqueID;
	NSMutableArray* _delayedAnimations;
	UIScrollView* _horizontalScrollView;
	UIPageControl* _pageControl;
	double _dimmerValue;
	BOOL _canPan;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UIMotionEffectGroup* _motionEffectGroup;
	BOOL _isAuthenticating;
	id<PKPassGroupViewDelegate> _delegate;
	UIViewController* _detailsVC;
	NSString* _passBeingPresented;
	BOOL _groupWasMarkedDeleted;
	BOOL _passBeingPresentedWasDeleted;
	BOOL _invalidated;
	BOOL _effectivePaused;
	BOOL _modallyPresented;
	BOOL _loaned;
	BOOL _paused;
	PKPassView* _frontmostPassView;
	PKGroup* _group;
	PKReusablePassViewQueue* _passViewQueue;
	UILongPressGestureRecognizer* _pressGestureRecognizer;

}

@property (nonatomic,retain) PKPassView * frontmostPassView;                                       //@synthesize frontmostPassView=_frontmostPassView - In the implementation block
@property (assign,getter=isModallyPresented,nonatomic) BOOL modallyPresented;                      //@synthesize modallyPresented=_modallyPresented - In the implementation block
@property (assign,getter=isLoaned,nonatomic) BOOL loaned;                                          //@synthesize loaned=_loaned - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                          //@synthesize paused=_paused - In the implementation block
@property (nonatomic,readonly) PKGroup * group;                                                    //@synthesize group=_group - In the implementation block
@property (assign,nonatomic,__weak) PKReusablePassViewQueue * passViewQueue;                       //@synthesize passViewQueue=_passViewQueue - In the implementation block
@property (assign,nonatomic) long long presentationState;                                          //@synthesize presentationState=_presentationState - In the implementation block
@property (nonatomic,readonly) unsigned long long displayIndex; 
@property (nonatomic,readonly) UIPageControl * pageControl;                                        //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,readonly) UIOffset offsetForFrontmostPassWhileStacked; 
@property (nonatomic,readonly) UILongPressGestureRecognizer * pressGestureRecognizer;              //@synthesize pressGestureRecognizer=_pressGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<PKPassGroupViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id<PKPassGroupViewDelegate>)delegate;
-(void)setDelegate:(id<PKPassGroupViewDelegate>)arg1 ;
-(BOOL)isPaused;
-(PKGroup *)group;
-(void)setPaused:(BOOL)arg1 ;
-(void)sizeToFit;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(long long)presentationState;
-(void)setPresentationState:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)removeFromSuperview;
-(CGSize)_contentSize;
-(void)layoutSubviews;
-(UIPageControl *)pageControl;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_handleLongPress:(id)arg1 ;
-(void)_handlePress:(id)arg1 ;
-(unsigned long long)displayIndex;
-(void)_updatePausedState;
-(void)setDimmer:(double)arg1 animated:(BOOL)arg2 ;
-(void)presentDiff:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithGroup:(id)arg1 delegate:(id)arg2 presentationState:(long long)arg3 ;
-(void)presentPassWithUniqueID:(id)arg1 ;
-(void)passViewTapped:(id)arg1 ;
-(void)setModallyPresented:(BOOL)arg1 ;
-(void)faceFrameDidChangeForPassView:(id)arg1 ;
-(void)passViewDidResize:(id)arg1 animated:(BOOL)arg2 ;
-(void)passViewExpandButtonTapped:(id)arg1 ;
-(BOOL)isModallyPresented;
-(PKPassView *)frontmostPassView;
-(BOOL)isLoaned;
-(void)_pageControlChanged:(id)arg1 ;
-(void)passView:(id)arg1 deleteButtonPressedForPass:(id)arg2 ;
-(BOOL)passView:(id)arg1 deleteButtonEnabledForPass:(id)arg2 ;
-(void)passView:(id)arg1 willPresentPassDetailsViewController:(id)arg2 ;
-(void)passView:(id)arg1 didPresentPassDetailsViewController:(id)arg2 ;
-(void)setPresentationState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)presentPassWithUniqueID:(id)arg1 withContext:(id)arg2 animated:(BOOL)arg3 ;
-(void)beginPinningFrontFaceContentMode;
-(void)endPinningFrontFaceContentMode;
-(void)markGroupDeleted;
-(void)applyContentModesAnimated:(BOOL)arg1 ;
-(void)updatePageControlFrame;
-(void)setLoaned:(BOOL)arg1 ;
-(UILongPressGestureRecognizer *)pressGestureRecognizer;
-(UIOffset)offsetForFrontmostPassWhileStacked;
-(void)setPassViewExpanded:(BOOL)arg1 forPass:(id)arg2 animated:(BOOL)arg3 ;
-(void)updateToStackWithProgress:(double)arg1 originalPosition:(CGPoint)arg2 timingFunction:(/*^block*/id)arg3 ;
-(void)_updateDelegateResponderCache;
-(void)_addPanAndLongPressGestureRecognizers;
-(void)_updateCachedLayoutState;
-(void)setFrontmostPassViewFromPassIndex:(long long)arg1 ;
-(void)_updateLoadedViews:(BOOL)arg1 ;
-(void)_updatePageControlVisibilityWithDelay:(double)arg1 ;
-(void)_removePanAndLongPressGestureRecognizers;
-(void)layoutSubviewsAnimated:(BOOL)arg1 ;
-(void)_removeDelayedAnimations;
-(void)_beginTrackingAnimation;
-(void)_endTrackingAnimation;
-(void)layoutStackAnimated:(BOOL)arg1 ;
-(void)layoutPagesAnimated:(BOOL)arg1 ;
-(NSRange)_rangeOfVisibleIndices;
-(CGPoint)_stackingPositionForPassViewLayer:(id)arg1 atStackIndex:(unsigned long long)arg2 withSeparation:(BOOL)arg3 ;
-(void)_enumeratePassViewsInStackOrderWithHandler:(/*^block*/id)arg1 ;
-(id)passViewForIndex:(unsigned long long)arg1 ;
-(CGRect)_pagingFrameForCardView:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(double)continuousShadowIndex;
-(long long)_defaultContentModeForIndex:(unsigned long long)arg1 ;
-(id)_loadCardViewForIndex:(unsigned long long)arg1 contentMode:(long long)arg2 ;
-(void)_addDelayedAnimation:(id)arg1 toLayer:(id)arg2 withRemovalAction:(/*^block*/id)arg3 ;
-(void)setFrontmostPassViewFromPassIndex:(long long)arg1 withContext:(id)arg2 animated:(BOOL)arg3 ;
-(void)setFrontmostPassView:(id)arg1 withContext:(id)arg2 animated:(BOOL)arg3 ;
-(NSRange)_rangeOfPagingIndices;
-(void)_applyContentMode:(long long)arg1 toPassView:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateCachedGroupState;
-(void)_updatePageControlWithDisplayIndex;
-(NSRange)_rangeOfFannedIndices;
-(void)_enumerateIndicesInStackOrderWithHandler:(/*^block*/id)arg1 ;
-(void)_enumerateIndicesInFannedOrderWithHandler:(/*^block*/id)arg1 ;
-(void)setFrontmostPassView:(PKPassView *)arg1 ;
-(void)_removeDelayedAnimationTrackerWithKey:(id)arg1 ;
-(void)_preparePageControlForReuse;
-(void)_handlePanGesture:(id)arg1 ;
-(BOOL)_isOurGestureRecognizer:(id)arg1 ;
-(void)_updateFrontmostPassViewIfNecessary;
-(void)dismissBackOfPassIfNecessaryForUniqueID:(id)arg1 ;
-(PKReusablePassViewQueue *)passViewQueue;
-(void)setPassViewQueue:(PKReusablePassViewQueue *)arg1 ;
@end

