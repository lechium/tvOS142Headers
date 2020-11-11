//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NDApplication.h"

#import "NDSpringBoardAppObserver-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_source;

@interface NDSpringBoardApplication : NDApplication <NDSpringBoardAppObserver>
{
    NSObject<OS_dispatch_source> *_delayTimer;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_nonDiscretionaryGracePeriodTimer;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_extendedNonDiscretionaryGracePeriodTimer;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_transitionalDiscretionaryStateTimer;	// 64 = 0x40
    NDSpringBoardApplication *_containingApplication;	// 72 = 0x48
}

+ (id)requestDelayQueue;	// IMP=0x000000010003a1a0
- (void).cxx_destruct;	// IMP=0x0000000100039dec
- (void)applicationNoLongerInForeground:(id)arg1;	// IMP=0x0000000100039d4c
- (void)applicationEnteredForeground:(id)arg1;	// IMP=0x0000000100039b90
- (void)applicationWasSuspended:(id)arg1;	// IMP=0x0000000100039b54
- (void)applicationBackgroundUpdatesTurnedOn:(id)arg1;	// IMP=0x0000000100039b18
- (void)applicationBackgroundUpdatesTurnedOff:(id)arg1;	// IMP=0x0000000100039adc
- (void)applicationWasQuitFromAppSwitcher:(id)arg1;	// IMP=0x0000000100039aa0
- (void)startTransitionalDiscretionaryPeriodTimer;	// IMP=0x0000000100039a30
- (void)disableTransitionalDiscretionaryPeriodTimer;	// IMP=0x00000001000399e0
- (void)setupTransitionalDiscretionaryPeriodTimer;	// IMP=0x0000000100039900
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100039798
- (void)addObserver:(id)arg1;	// IMP=0x0000000100039554
- (_Bool)backgroundUpdatesEnabled;	// IMP=0x00000001000394e0
- (_Bool)hasBackgroundTaskCompletion;	// IMP=0x000000010003946c
- (_Bool)isBeingDebugged;	// IMP=0x00000001000393f8
- (_Bool)isHandlingBackgroundURLSessionWithIdentifier:(id)arg1 withSessionUUID:(id)arg2;	// IMP=0x0000000100039330
- (_Bool)isSuspended;	// IMP=0x00000001000392bc
- (_Bool)isAwake;	// IMP=0x0000000100039248
- (_Bool)canBeSuspended;	// IMP=0x0000000100039240
- (_Bool)isForeground;	// IMP=0x00000001000391cc
- (_Bool)hasForegroundBackgroundStates;	// IMP=0x00000001000391c4
- (_Bool)wakeForSessionIdentifier:(id)arg1 withSessionUUID:(id)arg2 wakeRequirement:(long long)arg3;	// IMP=0x0000000100039090
- (void)_onqueue_resetRequestDelay;	// IMP=0x0000000100038fbc
- (void)setupDelayTimer;	// IMP=0x0000000100038ed8
- (_Bool)supportsWakes;	// IMP=0x0000000100038ed0
- (id)containerURL;	// IMP=0x0000000100038e54
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000100038cd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

