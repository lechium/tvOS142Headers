//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKStep-Protocol.h"

@class NSString;
@protocol TVSKStepDelegate;

@interface SATVRegionDisplayModeStep : NSObject <TVSKStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
}

+ (_Bool)_shouldExecuteStep;	// IMP=0x000000010004ba04
+ (id)stableIdentifier;	// IMP=0x000000010004b8a4
+ (void)initialize;	// IMP=0x000000010004b840
- (void).cxx_destruct;	// IMP=0x000000010004bcd4
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_completeStep;	// IMP=0x000000010004bc30
- (void)_showRegionDisplayModeViewController;	// IMP=0x000000010004baf0
- (void)autoAdvance;	// IMP=0x000000010004b990
- (id)executeStepForContext:(id)arg1;	// IMP=0x000000010004b8b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
