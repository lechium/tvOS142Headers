//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface _DASConditionScore : NSObject
{
    NSDate *_date;	// 8 = 0x8
}

+ (id)getResponseStringForPolicy:(id)arg1 response:(id)arg2 appliesToActivity:(_Bool)arg3 weightForActivity:(double)arg4;	// IMP=0x000000010003230c
+ (id)lastDenialResponses:(id)arg1;	// IMP=0x0000000100032210
+ (double)preOptimalRelaxationFactor:(unsigned long long)arg1;	// IMP=0x0000000100032170
+ (double)relaxationFactorForTimeSlot:(long long)arg1 activityPriority:(unsigned long long)arg2;	// IMP=0x0000000100032038
+ (double)getScoreForTimeSlot:(long long)arg1 activityPriority:(unsigned long long)arg2 activityScore:(double)arg3;	// IMP=0x0000000100032004
+ (long long)getTimeSlotForActivity:(id)arg1;	// IMP=0x0000000100031ee4
+ (double)thresholdScoreForActivity:(id)arg1;	// IMP=0x0000000100031e28
+ (void)computeOptimalScoreAndDateForActivity:(id)arg1;	// IMP=0x0000000100031410
+ (double)scoreForActivity:(id)arg1 withState:(id)arg2 response:(long long *)arg3;	// IMP=0x00000001000306f8
+ (void)setActivityShouldBypassPredictions:(id)arg1;	// IMP=0x0000000100030620
- (void).cxx_destruct;	// IMP=0x0000000100032454
@property(readonly, retain, nonatomic) NSDate *date; // @synthesize date=_date;

@end

