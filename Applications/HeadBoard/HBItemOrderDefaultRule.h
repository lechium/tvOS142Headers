//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HBItemOrderRule-Protocol.h"

@class NSString;

@interface HBItemOrderDefaultRule : NSObject <HBItemOrderRule>
{
}

- (id)insertApplications:(id)arg1 into:(id)arg2;	// IMP=0x000000010002f410
- (_Bool)evaluateWithApplication:(id)arg1;	// IMP=0x000000010002f408

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long processingLimit;
@property(readonly) Class superclass;

@end

