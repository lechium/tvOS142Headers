//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKDisplayBrightnessController, BKOrientationManager, CAWindowServer, NSMutableIndexSet, NSMutableSet;
@protocol OS_dispatch_queue;

@interface BKDisplayRenderOverlayManager : NSObject
{
    CAWindowServer *_windowServer;	// 8 = 0x8
    BKOrientationManager *_orientationManager;	// 16 = 0x10
    BKDisplayBrightnessController *_backlightManager;	// 24 = 0x18
    NSMutableSet *_activeOverlays;	// 32 = 0x20
    NSMutableSet *_overlaysDisablingUpdates;	// 40 = 0x28
    long long _lockedOrientation;	// 48 = 0x30
    _Bool _backlightLocked;	// 56 = 0x38
    NSMutableIndexSet *_frozenDisplayIDs;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x0000000100059d1c
- (void).cxx_destruct;	// IMP=0x0000000100059370
@property(readonly, nonatomic) long long lockedOrientation; // @synthesize lockedOrientation=_lockedOrientation;
@property(readonly, nonatomic) _Bool backlightLocked; // @synthesize backlightLocked=_backlightLocked;
@property(readonly, nonatomic) NSMutableSet *overlaysDisablingUpdates; // @synthesize overlaysDisablingUpdates=_overlaysDisablingUpdates;
- (id)_updateWindowServerUpdatesForOverlays:(id)arg1;	// IMP=0x00000001000591b4
- (void)_queue_setBacklightLocked:(_Bool)arg1;	// IMP=0x000000010005912c
- (void)_queue_setLockedOrientation:(long long)arg1;	// IMP=0x00000001000590ac
- (void)_queue_updateStateForActiveOverlayChange;	// IMP=0x0000000100058fa4
- (void)_queue_freezeOverlay:(id)arg1;	// IMP=0x0000000100058cd8
- (void)_queue_setOverlaysDisablingUpdates:(id)arg1;	// IMP=0x0000000100058c7c
- (_Bool)isShowingNonBootUIOverlays;	// IMP=0x0000000100058bec
- (void)prepareForRestart;	// IMP=0x0000000100058b94
- (_Bool)freezeOverlay:(id)arg1;	// IMP=0x0000000100058adc
- (_Bool)removeOverlay:(id)arg1 withAnimationSettings:(id)arg2;	// IMP=0x00000001000589e4
- (_Bool)applyOverlay:(id)arg1 withAnimationSettings:(id)arg2;	// IMP=0x00000001000588ec
@property(readonly, nonatomic) NSMutableSet *activeOverlays; // @synthesize activeOverlays=_activeOverlays;
- (id)activeOverlayWithDescriptor:(id)arg1;	// IMP=0x000000010005875c
- (id)description;	// IMP=0x00000001000586d4
- (id)_initWithPersistenceCoordinator:(id)arg1 orientationManager:(id)arg2 backlightManager:(id)arg3 windowServer:(id)arg4;	// IMP=0x0000000100058328

@end

