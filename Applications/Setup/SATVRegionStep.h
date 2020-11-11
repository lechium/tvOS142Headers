//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKStep-Protocol.h"

@class NSString, SATVRegionViewController;
@protocol TVSKStepDelegate;

@interface SATVRegionStep : NSObject <TVSKStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
    SATVRegionViewController *_regionViewController;	// 16 = 0x10
}

+ (id)stableIdentifier;	// IMP=0x0000000100068b80
+ (void)initialize;	// IMP=0x0000000100068b1c
- (void).cxx_destruct;	// IMP=0x0000000100069500
@property(retain, nonatomic) SATVRegionViewController *regionViewController; // @synthesize regionViewController=_regionViewController;
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (_Bool)_isRegionConfigured;	// IMP=0x00000001000693c0
- (void)_handleRegionSelection:(id)arg1;	// IMP=0x0000000100069274
- (void)_showRegionViewController;	// IMP=0x0000000100069038
- (void)_resetRegionIfRequiredForContext:(id)arg1;	// IMP=0x0000000100068f8c
- (void)autoAdvance;	// IMP=0x0000000100068ef8
- (id)executeStepForContext:(id)arg1;	// IMP=0x0000000100068b8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

