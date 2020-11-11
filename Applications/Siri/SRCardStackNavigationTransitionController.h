//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

#import "SRCompactNavigationStackLayoutControlling-Protocol.h"
#import "SiriUINavigationTransitioning-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerInteractiveTransitioning-Protocol.h"

@class NSMutableArray, NSString, SRCompactResultView, SRCompactResultViewController, UINavigationController, UIPanGestureRecognizer;
@protocol UIViewControllerAnimatedTransitioning;

@interface SRCardStackNavigationTransitionController : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, SRCompactNavigationStackLayoutControlling, SiriUINavigationTransitioning>
{
    _Bool _gesturing;	// 8 = 0x8
    _Bool _cancelling;	// 9 = 0x9
    long long _operation;	// 16 = 0x10
    SRCompactResultViewController *_compactResultViewController;	// 24 = 0x18
    UIPanGestureRecognizer *_panGestureRecognizer;	// 32 = 0x20
    UINavigationController *_navigationController;	// 40 = 0x28
    NSMutableArray *_recentViewControllers;	// 48 = 0x30
    struct CGRect _fromPlatteredCardViewOriginalFrame;	// 56 = 0x38
    struct CGRect _backgroundEmptyPlatterViewOriginalFrame;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010007845c
@property(retain, nonatomic, getter=_recentViewControllers, setter=_setRecentViewControllers:) NSMutableArray *recentViewControllers; // @synthesize recentViewControllers=_recentViewControllers;
@property(nonatomic, getter=_backgroundEmptyPlatterViewOriginalFrame, setter=_setBackgroundEmptyPlatterViewOriginalFrame:) struct CGRect backgroundEmptyPlatterViewOriginalFrame; // @synthesize backgroundEmptyPlatterViewOriginalFrame=_backgroundEmptyPlatterViewOriginalFrame;
@property(nonatomic, getter=_fromPlatteredCardViewOriginalFrame, setter=_setFromPlatteredCardViewOriginalFrame:) struct CGRect fromPlatteredCardViewOriginalFrame; // @synthesize fromPlatteredCardViewOriginalFrame=_fromPlatteredCardViewOriginalFrame;
@property(nonatomic, getter=_navigationController, setter=_setNavigationController:) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic, getter=_isCancelling, setter=_setCancelling:) _Bool cancelling; // @synthesize cancelling=_cancelling;
@property(nonatomic, getter=_isGesturing, setter=_setGesturing:) _Bool gesturing; // @synthesize gesturing=_gesturing;
@property(retain, nonatomic, getter=_panGestureRecognizer) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(readonly, nonatomic) SRCompactResultViewController *compactResultViewController; // @synthesize compactResultViewController=_compactResultViewController;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
- (void)_panGestureRecognizerDidPan:(id)arg1;	// IMP=0x00000001000780f0
- (struct CGRect)_prepareBackgroundEmptyPlatteredViewForTransitionInContext:(id)arg1;	// IMP=0x0000000100077f6c
- (struct CGRect)_prepareToPlatteredCardViewForTransitionInContext:(id)arg1;	// IMP=0x0000000100077d6c
- (struct CGAffineTransform)_calculateMoveFromPlatteredCardViewToBackgroundAffineTransformForPercentComplete:(double)arg1 withSemanticContentAttribute:(long long)arg2;	// IMP=0x0000000100077cd4
- (struct CGAffineTransform)_prepareFromPlatteredCardViewForTransitionWithContext:(id)arg1;	// IMP=0x0000000100077bd4
- (struct CGRect)_convertFrameForFromPlatteredCardView:(id)arg1 toContainerView:(id)arg2;	// IMP=0x0000000100077aec
- (id)_toPlatteredCardViewGivenToViewController:(id)arg1;	// IMP=0x0000000100077a98
- (id)_fromPlatteredCardViewGivenFromViewController:(id)arg1;	// IMP=0x00000001000779d8
- (unsigned long long)_expectedPopCountForTransitionContext:(id)arg1;	// IMP=0x000000010007792c
- (id)_backgroundPlatteredCardViewForOperation:(long long)arg1 recentViewControllers:(id)arg2;	// IMP=0x0000000100077808
- (id)_safelyExtractSnippetPlatterViewControllerFromViewController:(id)arg1;	// IMP=0x00000001000777a4
- (void)_transitionWithContext:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000772b4
- (void)_animateOnePopTransition:(id)arg1 originalContext:(id)arg2 andComplete:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100076e4c
- (id)_popTransitionContextGivenOriginalContext:(id)arg1 revealedViewController:(id)arg2 poppedViewController:(id)arg3 duration:(double)arg4;	// IMP=0x0000000100076ad0
- (void)_animateMultiPopKeyframe:(unsigned long long)arg1 outOfTotalKeyframes:(unsigned long long)arg2 transitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010007682c
- (void)_recursivelyAnimateNextMultiPopKeyframe:(unsigned long long)arg1 outOfTotalKeyframes:(unsigned long long)arg2 transitionContext:(id)arg3;	// IMP=0x00000001000766b8
- (void)_animatePushTransition:(id)arg1;	// IMP=0x00000001000761a4
- (void)_performPushTransitionFromViewController:(id)arg1 andView:(id)arg2 toViewController:(id)arg3 andView:(id)arg4 inContainerView:(id)arg5 recentViewControllers:(id)arg6 transitionDuration:(double)arg7 animated:(_Bool)arg8 transitionCompletion:(CDUnknownBlockType)arg9 completion:(CDUnknownBlockType)arg10;	// IMP=0x0000000100075c98
@property(readonly, nonatomic, getter=_compactResultView) SRCompactResultView *compactResultView;
- (void)layout;	// IMP=0x0000000100075810
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000100075748
- (double)_transitionDurationForOperation:(long long)arg1 context:(id)arg2;	// IMP=0x00000001000756f4
- (void)animateTransition:(id)arg1;	// IMP=0x0000000100075640
- (void)_animateTransitionForOperation:(long long)arg1 context:(id)arg2;	// IMP=0x00000001000755b4
- (id)interactionControllerForAnimationController:(id)arg1;	// IMP=0x0000000100075584
@property(readonly, nonatomic) id <UIViewControllerAnimatedTransitioning> animationController;
- (void)configureWithNavigationController:(id)arg1;	// IMP=0x0000000100075520
- (id)initWithCompactResultViewController:(id)arg1;	// IMP=0x0000000100075464

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

