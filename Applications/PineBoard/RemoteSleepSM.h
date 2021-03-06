//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PBAttentionMonitorStateMachine.h"

@class NSObject;
@protocol OS_dispatch_source;

@interface RemoteSleepSM : PBAttentionMonitorStateMachine
{
    NSObject<OS_dispatch_source> *_timer;	// 32 = 0x20
    double _interval;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000166e0
- (void)_enterOffStateAutomatically;	// IMP=0x00000001000161bc
- (void)_enterOnStateAutomatically;	// IMP=0x0000000100016050
- (_Bool)_canBeInOnStateAutomatically;	// IMP=0x0000000100015d1c
- (_Bool)isAutomaticEnabled;	// IMP=0x0000000100015c94
- (id)init;	// IMP=0x0000000100015a58

@end

