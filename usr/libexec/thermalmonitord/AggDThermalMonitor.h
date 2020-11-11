//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_source;

@interface AggDThermalMonitor : NSObject
{
    double cacheValues[8];	// 8 = 0x8
    NSObject<OS_dispatch_source> *theTimer;	// 72 = 0x48
    long long _scalarValues[16];	// 80 = 0x50
    NSArray *_temperatureHistograms;	// 208 = 0xd0
}

- (void)uploadAggdData;	// IMP=0x0000000100019df0
- (void)incrementHistogramMostRecentBin:(int)arg1 count:(unsigned int)arg2;	// IMP=0x0000000100019d7c
- (void)incrementHistogram:(int)arg1 temperature:(int)arg2 count:(int)arg3;	// IMP=0x0000000100019d00
- (void)incrementHistogram:(int)arg1 temperature:(int)arg2;	// IMP=0x0000000100019cf0
- (void)incrementAggregateDictScalar:(int)arg1 value:(long long)arg2;	// IMP=0x0000000100019bc4
- (void)resetScalarCounts;	// IMP=0x0000000100019bac
- (void)updateAggregateCell:(int)arg1:(double)arg2;	// IMP=0x0000000100019b74
- (void)updateAggregateDictStats:(int)arg1:(double)arg2:(_Bool)arg3;	// IMP=0x0000000100019af4
- (double)maxValue:(_Bool)arg1;	// IMP=0x0000000100019acc
- (void)dealloc;	// IMP=0x0000000100019a7c
- (id)init;	// IMP=0x0000000100019a6c
- (id)initForTemperatureHistogramTypes:(id)arg1;	// IMP=0x00000001000197ec

@end
