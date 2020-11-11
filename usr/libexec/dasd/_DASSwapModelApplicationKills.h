//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASSwapModeling-Protocol.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSUserDefaults;
@protocol OS_dispatch_queue, OS_os_log;

@interface _DASSwapModelApplicationKills : NSObject <_DASSwapModeling>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_todaysKillHistogram;	// 16 = 0x10
    NSDictionary *_historicalKillHistogram;	// 24 = 0x18
    NSObject<OS_os_log> *_log;	// 32 = 0x20
    NSDate *_lastSnapshotTime;	// 40 = 0x28
    NSUserDefaults *_killDefaults;	// 48 = 0x30
}

+ (id)histogramEventStream;	// IMP=0x0000000100041a7c
- (void).cxx_destruct;	// IMP=0x0000000100042e58
@property(retain, nonatomic) NSUserDefaults *killDefaults; // @synthesize killDefaults=_killDefaults;
@property(retain, nonatomic) NSDate *lastSnapshotTime; // @synthesize lastSnapshotTime=_lastSnapshotTime;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) NSDictionary *historicalKillHistogram; // @synthesize historicalKillHistogram=_historicalKillHistogram;
@property(retain, nonatomic) NSMutableDictionary *todaysKillHistogram; // @synthesize todaysKillHistogram=_todaysKillHistogram;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)updateScores;	// IMP=0x0000000100042dd4
- (id)scoresForAllApplicationsAtDate:(id)arg1;	// IMP=0x0000000100042aa8
- (double)scoreForApplication:(id)arg1 atDate:(id)arg2;	// IMP=0x0000000100042a00
- (void)incorporateLatestJetsamStatistics;	// IMP=0x00000001000424c8
- (double)secondsFrom:(unsigned long long)arg1 until:(unsigned long long)arg2;	// IMP=0x000000010004244c
- (void)registerDailyModelUpdateTask;	// IMP=0x000000010004229c
- (void)updateModel;	// IMP=0x000000010004213c
- (id)_queue_computeScores;	// IMP=0x0000000100041ea8
- (void)_queue_updateHistograms;	// IMP=0x0000000100041db4
- (void)_queue_loadHistograms;	// IMP=0x0000000100041b2c
- (id)queryForHistogramWithIdentifier:(id)arg1;	// IMP=0x0000000100041a98
- (id)init;	// IMP=0x00000001000418f4

@end

