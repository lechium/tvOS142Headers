//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class PBAppCrossFadeAnimationTransaction, UIViewPropertyAnimator;

@interface PBDefaultAppAnimationTransaction : BSTransaction
{
    UIViewPropertyAnimator *_scalePropertyAnimator;	// 8 = 0x8
    UIViewPropertyAnimator *_fadePropertyAnimator;	// 16 = 0x10
    PBAppCrossFadeAnimationTransaction *_crossFadeTransaction;	// 24 = 0x18
    CDStruct_821c97ab _context;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001001a95dc
@property(readonly, nonatomic) PBAppCrossFadeAnimationTransaction *crossFadeTransaction; // @synthesize crossFadeTransaction=_crossFadeTransaction;
@property(readonly, nonatomic) UIViewPropertyAnimator *fadePropertyAnimator; // @synthesize fadePropertyAnimator=_fadePropertyAnimator;
@property(readonly, nonatomic) UIViewPropertyAnimator *scalePropertyAnimator; // @synthesize scalePropertyAnimator=_scalePropertyAnimator;
@property(readonly, nonatomic) CDStruct_821c97ab context; // @synthesize context=_context;
- (void)_startFadeAnimation;	// IMP=0x00000001001a8f9c
- (void)_startScaleAnimation;	// IMP=0x00000001001a89a8
- (void)_startCoordinatedAnimation;	// IMP=0x00000001001a8840
- (void)_startReduceMotionAnimation;	// IMP=0x00000001001a8770
- (void)_didComplete;	// IMP=0x00000001001a8624
- (void)_willFailWithReason:(id)arg1;	// IMP=0x00000001001a848c
- (void)_willInterruptWithReason:(id)arg1;	// IMP=0x00000001001a82f4
- (void)_begin;	// IMP=0x00000001001a8138
- (_Bool)_canBeInterrupted;	// IMP=0x00000001001a8118
- (id)initWithSceneLayoutViewController:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 isResigning:(_Bool)arg4;	// IMP=0x00000001001a7f70

@end

