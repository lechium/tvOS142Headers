//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PBAttentionMonitorStateMachine.h"

@interface SleepSM : PBAttentionMonitorStateMachine
{
    unsigned long long _suppressWakeForHIDEventsTimeRangeStart;	// 32 = 0x20
    unsigned long long _suppressTimeInTicks;	// 40 = 0x28
    _Bool _sleepAllowed;	// 48 = 0x30
}

- (void)_temporarilySuppressWakeForHIDEvents;	// IMP=0x00000001000176f8
- (void)_enterOffStateForced;	// IMP=0x00000001000176e4
- (void)_enterOnStateForced;	// IMP=0x00000001000175e4
- (void)_enterOffStateAutomatically;	// IMP=0x0000000100017580
- (void)_enterOnStateAutomatically;	// IMP=0x000000010001736c
- (_Bool)_canEnterOffStateAutomatically;	// IMP=0x00000001000172f8
- (_Bool)_canBeInOnStateAutomatically;	// IMP=0x0000000100016e9c
- (id)init;	// IMP=0x0000000100016720

@end

