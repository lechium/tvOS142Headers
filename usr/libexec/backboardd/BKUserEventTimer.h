//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKHIDUserEventNotifying-Protocol.h"

@class BSTimer, NSString;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface BKUserEventTimer : NSObject <BKHIDUserEventNotifying>
{
    double _currentTimeout;	// 8 = 0x8
    double _lastUserEvent;	// 16 = 0x10
    double _lastResetTimerRequest;	// 24 = 0x18
    BSTimer *_timer;	// 32 = 0x20
    _Bool _isIdle;	// 40 = 0x28
    int _currentMode;	// 44 = 0x2c
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    _Bool _shouldNotify;	// 56 = 0x38
    _Bool _safeToResetIdleTimer;	// 57 = 0x39
    id <BSInvalidatable> _stateCaptureAssertion;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x0000000100031390
- (void).cxx_destruct;	// IMP=0x0000000100030eb8
- (void)_queue_clearTimer;	// IMP=0x0000000100030e84
- (void)_queue_scheduleTimerWithTimeInterval:(double)arg1;	// IMP=0x0000000100030d60
- (void)_queue_userEventOccurredInPresenceMode;	// IMP=0x0000000100030d04
- (void)_queue_userEventOccurredInIdleMode;	// IMP=0x0000000100030cb0
- (void)_queue_postNotification:(struct __CFString *)arg1;	// IMP=0x0000000100030be8
- (_Bool)isSafeToResetIdleTimer;	// IMP=0x0000000100030be0
- (void)notifyOnNextUserEvent;	// IMP=0x0000000100030b88
- (void)userEventOccurredOnDisplay:(id)arg1;	// IMP=0x0000000100030b18
- (void)resetTimer:(double)arg1 mode:(int)arg2;	// IMP=0x0000000100030a80
- (double)lastUserEventTime;	// IMP=0x00000001000309f0
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100030894
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100030840
- (id)succinctDescriptionBuilder;	// IMP=0x0000000100030828
- (id)succinctDescription;	// IMP=0x00000001000307d4
- (void)dealloc;	// IMP=0x0000000100030738
- (id)init;	// IMP=0x000000010003040c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

