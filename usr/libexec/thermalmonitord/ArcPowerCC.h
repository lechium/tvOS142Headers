//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

#import "tGraphDataSource-Protocol.h"

@class CommonProduct;

@interface ArcPowerCC : ComponentControl <tGraphDataSource>
{
    CommonProduct *_product;	// 128 = 0x80
    int _thresholdModuleTemperature;	// 136 = 0x88
    int _latestModuleTemperature;	// 140 = 0x8c
    int _maxArcPower;	// 144 = 0x90
    int _minArcPower;	// 148 = 0x94
    int _arcPowerTarget;	// 152 = 0x98
    int _arcCurrentPower;	// 156 = 0x9c
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x0000000100016698
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x00000001000165e8
- (int)numberOfFields;	// IMP=0x00000001000165b0
- (void)refreshTGraphTelemetry;	// IMP=0x00000001000165ac
- (void)updatePowerTarget;	// IMP=0x00000001000164ec
- (void)defaultAction;	// IMP=0x00000001000164a0
- (id)initWithParams:(struct __CFDictionary *)arg1 product:(id)arg2;	// IMP=0x0000000100016210

@end

