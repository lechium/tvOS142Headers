//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HBItemOrderRule-Protocol.h"

@class HBItemOrderVideoSubscriberApplicationConfiguration, NSString;

@interface HBItemOrderVideoSubscriberApplicationRule : NSObject <HBItemOrderRule>
{
    HBItemOrderVideoSubscriberApplicationConfiguration *_configuration;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010001ac4c
@property(readonly, nonatomic) HBItemOrderVideoSubscriberApplicationConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)insertApplications:(id)arg1 into:(id)arg2;	// IMP=0x000000010001aafc
- (_Bool)evaluateWithApplication:(id)arg1;	// IMP=0x000000010001aa54
@property(readonly, nonatomic) unsigned long long processingLimit;
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000010001a9d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

