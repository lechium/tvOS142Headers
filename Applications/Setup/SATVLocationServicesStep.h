//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKExpressTapToSetupItemProviderStep-Protocol.h"

@class NSString;
@protocol TVSKStepDelegate;

@interface SATVLocationServicesStep : NSObject <TVSKExpressTapToSetupItemProviderStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
}

+ (int)_authorizationForIdentifier:(id)arg1 locationServicesAuthorizationInfo:(id)arg2;	// IMP=0x000000010001215c
+ (int)_defaultAuthorizationForIdentifier:(id)arg1;	// IMP=0x000000010001208c
+ (id)expressTapToSetupItemWithTapToSetupDeviceInfo:(id)arg1;	// IMP=0x00000001000117e8
+ (id)stableIdentifier;	// IMP=0x0000000100011408
+ (void)initialize;	// IMP=0x00000001000113a4
- (void).cxx_destruct;	// IMP=0x0000000100012274
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_reset;	// IMP=0x0000000100011e5c
- (void)_enableLocationServices:(_Bool)arg1 locationServicesAuthorizationInfo:(id)arg2;	// IMP=0x0000000100011c0c
- (void)_completeStepWithEnableLocationServices:(_Bool)arg1 locationServicesAuthorizationInfo:(id)arg2;	// IMP=0x0000000100011b94
- (id)_handleEnableLocationServices:(_Bool)arg1 locationServicesAuthorizationInfo:(id)arg2;	// IMP=0x0000000100011b4c
- (void)_showLocationServicesViewController;	// IMP=0x0000000100011934
- (void)_enableLocationServicesByDefault;	// IMP=0x0000000100011920
- (void)autoAdvance;	// IMP=0x000000010001176c
- (id)executeStepForContext:(id)arg1;	// IMP=0x0000000100011414

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

