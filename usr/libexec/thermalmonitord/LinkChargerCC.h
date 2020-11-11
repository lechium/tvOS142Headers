//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

#import "tGraphDataSource-Protocol.h"

@class AggDThermalMonitor;

@interface LinkChargerCC : ComponentControl <tGraphDataSource>
{
    unsigned int pmuPowerService;	// 128 = 0x80
    double _targetTimeCloaking;	// 136 = 0x88
    double _targetTimeCharging;	// 144 = 0x90
    double _defaultTargetTimeCloaking;	// 152 = 0x98
    double _defaultTargetTimeCharging;	// 160 = 0xa0
    double _targetTimeWirelessMatCloaking;	// 168 = 0xa8
    double _targetTimeWirelessMatCharging;	// 176 = 0xb0
    double _remainingTimeInterval;	// 184 = 0xb8
    double _remainingInitialNoCloakTime;	// 192 = 0xc0
    int _skipFirstChargeThreshold;	// 200 = 0xc8
    int _chargerType;	// 204 = 0xcc
    _Bool _currentlyCloaked;	// 208 = 0xd0
    _Bool _isOnCharger;	// 209 = 0xd1
    AggDThermalMonitor *_aggdController;	// 216 = 0xd8
    double _previousTimeStamp;	// 224 = 0xe0
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x00000001000101d8
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x00000001000100f8
- (int)numberOfFields;	// IMP=0x00000001000100c0
- (void)setChargerType:(int)arg1;	// IMP=0x00000001000100b0
- (_Bool)canSystemSleep;	// IMP=0x000000010000ff9c
- (_Bool)isOnCharger;	// IMP=0x000000010000ff8c
- (_Bool)isCurrentlyCloaked;	// IMP=0x000000010000ff7c
- (void)refreshTGraphTelemetry;	// IMP=0x000000010000ff58
- (_Bool)updateCloakingState:(_Bool)arg1;	// IMP=0x000000010000fdc4
- (void)defaultAction;	// IMP=0x000000010000f92c
- (id)initWithParams:(struct __CFDictionary *)arg1 aggdController:(id)arg2;	// IMP=0x000000010000f6a4

@end

