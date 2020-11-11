//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class PBSystemOverlayDismissalRequest, UIViewController;
@protocol PBSystemOverlayContentPresenting, PBSystemUIPresenting;

@interface PBSystemOverlayDismissalTransaction : BSTransaction
{
    PBSystemOverlayDismissalRequest *_request;	// 8 = 0x8
    UIViewController<PBSystemOverlayContentPresenting> *_viewController;	// 16 = 0x10
    long long _layoutLevel;	// 24 = 0x18
    unsigned long long _sceneDeactivationReasons;	// 32 = 0x20
    id <PBSystemUIPresenting> _presentationDelegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100260fa4
@property(readonly, nonatomic) __weak id <PBSystemUIPresenting> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(readonly, nonatomic) unsigned long long sceneDeactivationReasons; // @synthesize sceneDeactivationReasons=_sceneDeactivationReasons;
@property(readonly, nonatomic) long long layoutLevel; // @synthesize layoutLevel=_layoutLevel;
@property(readonly, nonatomic) UIViewController<PBSystemOverlayContentPresenting> *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) PBSystemOverlayDismissalRequest *request; // @synthesize request=_request;
- (void)_begin;	// IMP=0x0000000100260b00
- (_Bool)_canBeInterrupted;	// IMP=0x0000000100260ae0
- (id)initWithRequest:(id)arg1 viewController:(id)arg2 layoutLevel:(long long)arg3 deactivationReasons:(unsigned long long)arg4 presentationDelegate:(id)arg5;	// IMP=0x0000000100260924
- (id)init;	// IMP=0x00000001002608ec

@end

