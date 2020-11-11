//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface NDApplication : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSMutableArray *_observers;	// 16 = 0x10
    _Bool isInTransitionalDiscretionaryPeriod;	// 24 = 0x18
    double _currentRequestDelay;	// 32 = 0x20
}

+ (_Bool)springBoardApplicationExistsWithIdentifier:(id)arg1;	// IMP=0x0000000100038c3c
+ (id)springboardApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100038b04
+ (id)applicationWithIdentifier:(id)arg1;	// IMP=0x00000001000389c8
+ (void)initialize;	// IMP=0x0000000100038990
- (void).cxx_destruct;	// IMP=0x0000000100038778
@property double currentRequestDelay; // @synthesize currentRequestDelay=_currentRequestDelay;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property _Bool isInTransitionalDiscretionaryPeriod; // @synthesize isInTransitionalDiscretionaryPeriod;
- (void)_onqueue_resetRequestDelay;	// IMP=0x0000000100038680
- (_Bool)backgroundUpdatesEnabled;	// IMP=0x0000000100038678
- (void)invokeSelectorForAllObservers:(SEL)arg1;	// IMP=0x00000001000385f0
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100038540
- (void)addObserver:(id)arg1;	// IMP=0x00000001000384b0
- (_Bool)isHandlingBackgroundURLSessionWithIdentifier:(id)arg1 withSessionUUID:(id)arg2;	// IMP=0x00000001000384a8
- (_Bool)hasBackgroundTaskCompletion;	// IMP=0x00000001000384a0
- (_Bool)isBeingDebugged;	// IMP=0x0000000100038498
- (_Bool)isSuspended;	// IMP=0x0000000100038490
- (_Bool)canBeSuspended;	// IMP=0x0000000100038488
- (_Bool)isAwake;	// IMP=0x0000000100038480
- (_Bool)isForeground;	// IMP=0x0000000100038478
- (_Bool)hasForegroundBackgroundStates;	// IMP=0x0000000100038470
- (_Bool)wakeForSessionIdentifier:(id)arg1 withSessionUUID:(id)arg2 wakeRequirement:(long long)arg3;	// IMP=0x00000001000382dc
- (_Bool)maySupportWakesLater;	// IMP=0x00000001000382a8
- (_Bool)supportsWakes;	// IMP=0x0000000100038234
- (id)containerURL;	// IMP=0x000000010003822c
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000010003815c

@end

