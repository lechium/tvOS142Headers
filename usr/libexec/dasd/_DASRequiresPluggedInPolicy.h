//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASActivityPolicyPredicting-Protocol.h"

@class NSArray, NSDate, NSString, _CDContextualKeyPath, _DKPredictionTimeline, _DKPredictor;

@interface _DASRequiresPluggedInPolicy : NSObject <_DASActivityPolicyPredicting>
{
    NSString *_policyName;	// 8 = 0x8
    _CDContextualKeyPath *_batteryStatusKeyPath;	// 16 = 0x10
    _CDContextualKeyPath *_watchIsPluggedInKeyPath;	// 24 = 0x18
    NSArray *_triggers;	// 32 = 0x20
    _DKPredictor *_predictor;	// 40 = 0x28
    _DKPredictionTimeline *_pluginTimeline;	// 48 = 0x30
    NSDate *_lastPredictionTimelineUpdate;	// 56 = 0x38
}

+ (_Bool)isWirelessCharger:(id)arg1;	// IMP=0x000000010002b050
+ (id)policyInstance;	// IMP=0x000000010002ada0
- (void).cxx_destruct;	// IMP=0x000000010002b664
@property(retain, nonatomic) NSDate *lastPredictionTimelineUpdate; // @synthesize lastPredictionTimelineUpdate=_lastPredictionTimelineUpdate;
@property(retain) _DKPredictionTimeline *pluginTimeline; // @synthesize pluginTimeline=_pluginTimeline;
@property(retain, nonatomic) _DKPredictor *predictor; // @synthesize predictor=_predictor;
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) _CDContextualKeyPath *watchIsPluggedInKeyPath; // @synthesize watchIsPluggedInKeyPath=_watchIsPluggedInKeyPath;
@property(retain, nonatomic) _CDContextualKeyPath *batteryStatusKeyPath; // @synthesize batteryStatusKeyPath=_batteryStatusKeyPath;
@property(retain, nonatomic) NSString *policyName; // @synthesize policyName=_policyName;
- (double)predictedScoreForActivity:(id)arg1 atDate:(id)arg2;	// IMP=0x000000010002b2d4
- (id)responseForActivity:(id)arg1 withState:(id)arg2;	// IMP=0x000000010002b0f4
- (double)scoreForActivity:(id)arg1 isPluggedIn:(_Bool)arg2;	// IMP=0x000000010002b014
- (double)weightForActivity:(id)arg1;	// IMP=0x000000010002af64
- (_Bool)appliesToActivity:(id)arg1;	// IMP=0x000000010002af40
- (_Bool)shouldIgnoreTrigger:(id)arg1 withState:(id)arg2;	// IMP=0x000000010002ae0c
- (_Bool)shouldLogScoreToPowerLog;	// IMP=0x000000010002ad98
- (id)predictionForDevicePluggedIn;	// IMP=0x000000010002ad2c
- (id)init;	// IMP=0x000000010002ab58
- (id)initializeTriggers;	// IMP=0x000000010002aa00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

