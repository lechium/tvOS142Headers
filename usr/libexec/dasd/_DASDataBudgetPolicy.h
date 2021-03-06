//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASActivityPolicy-Protocol.h"

@class NSArray, NSString;

@interface _DASDataBudgetPolicy : NSObject <_DASActivityPolicy>
{
    NSString *_policyName;	// 8 = 0x8
    NSArray *_triggers;	// 16 = 0x10
}

+ (_Bool)budget:(id)arg1 isPositive:(id)arg2;	// IMP=0x0000000100022940
+ (_Bool)budgetIsPositive:(id)arg1;	// IMP=0x00000001000228b8
+ (_Bool)isBudgetAvailable:(id)arg1;	// IMP=0x000000010002280c
+ (id)policyInstance;	// IMP=0x00000001000227a0
- (void).cxx_destruct;	// IMP=0x0000000100022f40
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) NSString *policyName; // @synthesize policyName=_policyName;
- (id)responseForActivity:(id)arg1 withState:(id)arg2;	// IMP=0x0000000100022cdc
- (_Bool)shouldIgnoreBudgetForActivity:(id)arg1 withState:(id)arg2 rationale:(id)arg3;	// IMP=0x0000000100022b80
- (double)weightForActivity:(id)arg1;	// IMP=0x0000000100022b78
- (_Bool)appliesToActivity:(id)arg1;	// IMP=0x0000000100022b08
- (_Bool)shouldIgnoreTrigger:(id)arg1 withState:(id)arg2;	// IMP=0x0000000100022a5c
- (void)updateSystemConstraintsWithContext:(id)arg1;	// IMP=0x00000001000229bc
- (id)init;	// IMP=0x000000010002271c
- (id)initializeTriggers;	// IMP=0x00000001000225c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

