//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

#import "tGraphDataSource-Protocol.h"

@interface RefreshRateCC : ComponentControl <tGraphDataSource>
{
    unsigned char refreshRateLevelElem;	// 128 = 0x80
    unsigned char refreshRateLevelPointer;	// 129 = 0x81
    unsigned char refreshRateLevelUp[4];	// 130 = 0x82
    unsigned char refreshRateLevels[4];	// 134 = 0x86
    unsigned char refreshRateLevelDown[4];	// 138 = 0x8a
    unsigned char currentRefreshRateLevel;	// 142 = 0x8e
    unsigned char previousRefreshRateLevel;	// 143 = 0x8f
    unsigned char currentRefreshRateFPS;	// 144 = 0x90
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x000000010000f5dc
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x000000010000f540
- (int)numberOfFields;	// IMP=0x000000010000f50c
- (void)refreshTGraphTelemetry;	// IMP=0x000000010000f508
- (void)initRefreshRateTable:(struct __CFArray *)arg1;	// IMP=0x000000010000f2c4
- (void)defaultAction;	// IMP=0x000000010000f218
- (id)initWithParams:(struct __CFDictionary *)arg1;	// IMP=0x000000010000f108

@end

