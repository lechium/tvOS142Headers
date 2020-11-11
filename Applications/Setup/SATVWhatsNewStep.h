//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKStep-Protocol.h"

@class NSString;
@protocol TVSKStepDelegate;

@interface SATVWhatsNewStep : NSObject <TVSKStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
}

+ (_Bool)_isSupportedForUpdate;	// IMP=0x0000000100038c18
+ (id)stableIdentifier;	// IMP=0x00000001000387b4
+ (void)initialize;	// IMP=0x0000000100038750
- (void).cxx_destruct;	// IMP=0x0000000100038e0c
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_completeStep;	// IMP=0x0000000100038d68
- (void)_displayWhatsNewViewController;	// IMP=0x0000000100038c20
- (void)autoAdvance;	// IMP=0x0000000100038c14
- (id)executeStepForContext:(id)arg1;	// IMP=0x00000001000387c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

