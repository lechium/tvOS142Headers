//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKExpressTapToSetupItemProviderStep-Protocol.h"

@class NSString;
@protocol TVSKStepDelegate;

@interface SATVAppAnalyticsStep : NSObject <TVSKExpressTapToSetupItemProviderStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
}

+ (_Bool)_isAppAnalyticsSupported;	// IMP=0x00000001000477e0
+ (id)expressTapToSetupItemWithTapToSetupDeviceInfo:(id)arg1;	// IMP=0x00000001000476c0
+ (id)stableIdentifier;	// IMP=0x00000001000472cc
+ (void)initialize;	// IMP=0x0000000100047268
- (void).cxx_destruct;	// IMP=0x0000000100047c7c
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_reset;	// IMP=0x0000000100047c44
- (void)_enableAppAnalytics:(_Bool)arg1 markAsPresented:(_Bool)arg2;	// IMP=0x0000000100047b6c
- (id)_handleDidConsentToAnalytics:(_Bool)arg1;	// IMP=0x0000000100047b20
- (void)_completeStepWithAnalyticsConsent:(_Bool)arg1;	// IMP=0x0000000100047aa8
- (void)_showAppAnalyticsViewController;	// IMP=0x0000000100047894
- (void)autoAdvance;	// IMP=0x0000000100047648
- (id)executeStepForContext:(id)arg1;	// IMP=0x00000001000472d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

