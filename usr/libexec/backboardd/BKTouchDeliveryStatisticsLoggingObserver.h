//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKTouchLifecycleObserver-Protocol.h"

@class BKEventStatisticsLoggingController, BKHexadecimalIntegerEventStatistic, BKIntegerEventStatistic, BKMRUEventStatistics, NSString;
@protocol BSInvalidatable;

@interface BKTouchDeliveryStatisticsLoggingObserver : NSObject <BKTouchLifecycleObserver>
{
    BKEventStatisticsLoggingController *_loggingController;	// 8 = 0x8
    BKIntegerEventStatistic *_touchUpCount;	// 16 = 0x10
    BKIntegerEventStatistic *_touchDownCount;	// 24 = 0x18
    BKIntegerEventStatistic *_hardCancelCount;	// 32 = 0x20
    BKIntegerEventStatistic *_softCancelCount;	// 40 = 0x28
    BKIntegerEventStatistic *_tapToWakeCount;	// 48 = 0x30
    BKIntegerEventStatistic *_stylusTouchCount;	// 56 = 0x38
    BKIntegerEventStatistic *_detachedTouchCount;	// 64 = 0x40
    BKIntegerEventStatistic *_fromEdgeCount;	// 72 = 0x48
    BKHexadecimalIntegerEventStatistic *_lastTouchID;	// 80 = 0x50
    BKHexadecimalIntegerEventStatistic *_lastContextID;	// 88 = 0x58
    BKIntegerEventStatistic *_lastPID;	// 96 = 0x60
    BKMRUEventStatistics *_recentTouches;	// 104 = 0x68
    id <BSInvalidatable> _logTransaction;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000001000560dc
- (void)touchDidFinishProcessingTouchCollection;	// IMP=0x00000001000560a8
- (void)touchWillStartProcessingTouchCollection;	// IMP=0x0000000100055ff8
- (void)touchDidSoftCancel:(unsigned int)arg1;	// IMP=0x0000000100055f98
- (void)touchDidHIDCancel:(unsigned int)arg1;	// IMP=0x0000000100055f38
- (void)touchDidDetach:(unsigned int)arg1;	// IMP=0x0000000100055ed8
- (void)touch:(unsigned int)arg1 upAtPoint:(struct CGPoint)arg2;	// IMP=0x0000000100055e78
- (void)touch:(unsigned int)arg1 downAtPoint:(struct CGPoint)arg2 eventMask:(unsigned int)arg3 transducerType:(unsigned int)arg4;	// IMP=0x0000000100055e14
- (void)touch:(unsigned int)arg1 didMoveToPoint:(struct CGPoint)arg2 eventMask:(unsigned int)arg3;	// IMP=0x0000000100055e10
- (void)touch:(unsigned int)arg1 didHitTestToContextID:(unsigned int)arg2 clientPort:(unsigned int)arg3 hostingChainIndex:(long long)arg4;	// IMP=0x0000000100055da8
- (void)touch:(unsigned int)arg1 didAlwaysRouteToContext:(unsigned int)arg2 clientPort:(unsigned int)arg3;	// IMP=0x0000000100055da4
- (void)hitTestRegionsDidChange:(id)arg1;	// IMP=0x0000000100055da0
- (int)_pidForClientPort:(unsigned int)arg1;	// IMP=0x0000000100055d18
- (id)initWithDisplayUUID:(id)arg1;	// IMP=0x0000000100055940

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
