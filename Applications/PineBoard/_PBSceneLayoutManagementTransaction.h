//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class PBApplicationSceneViewController, PBOpenApplicationRequest, PBSceneLayoutViewController;

@interface _PBSceneLayoutManagementTransaction : BSTransaction
{
    _Bool _resigning;	// 8 = 0x8
    _Bool _animated;	// 9 = 0x9
    PBOpenApplicationRequest *_openAppRequest;	// 16 = 0x10
    PBSceneLayoutViewController *_sceneLayoutViewController;	// 24 = 0x18
    PBApplicationSceneViewController *_fromViewController;	// 32 = 0x20
    PBApplicationSceneViewController *_toViewController;	// 40 = 0x28
    BSTransaction *_animationTransaction;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100252a58
@property(readonly, nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic, getter=isResigning) _Bool resigning; // @synthesize resigning=_resigning;
@property(readonly, nonatomic) BSTransaction *animationTransaction; // @synthesize animationTransaction=_animationTransaction;
@property(readonly, nonatomic) PBApplicationSceneViewController *toViewController; // @synthesize toViewController=_toViewController;
@property(readonly, nonatomic) PBApplicationSceneViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(readonly, nonatomic) PBSceneLayoutViewController *sceneLayoutViewController; // @synthesize sceneLayoutViewController=_sceneLayoutViewController;
@property(readonly, nonatomic) PBOpenApplicationRequest *openAppRequest; // @synthesize openAppRequest=_openAppRequest;
- (void)_didComplete;	// IMP=0x0000000100252518
- (void)_begin;	// IMP=0x00000001002520c0
- (_Bool)_canBeInterrupted;	// IMP=0x00000001002520a0
- (_Bool)_shouldFailForChildTransaction:(id)arg1;	// IMP=0x0000000100252044
- (_Bool)_animateDestinationViewInFront;	// IMP=0x0000000100251ef4
- (id)initWithRequest:(id)arg1 transitionType:(long long)arg2;	// IMP=0x0000000100251384

@end

