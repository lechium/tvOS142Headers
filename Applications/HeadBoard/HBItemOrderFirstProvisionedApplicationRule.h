//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HBItemOrderProvisionedApplicationIdentifiersRule.h"

#import "HBItemOrderRule-Protocol.h"

@class NSString;

@interface HBItemOrderFirstProvisionedApplicationRule : HBItemOrderProvisionedApplicationIdentifiersRule <HBItemOrderRule>
{
}

- (id)insertApplications:(id)arg1 into:(id)arg2;	// IMP=0x0000000100005778
- (_Bool)evaluateWithApplication:(id)arg1;	// IMP=0x00000001000056d4
@property(readonly, nonatomic) unsigned long long processingLimit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

