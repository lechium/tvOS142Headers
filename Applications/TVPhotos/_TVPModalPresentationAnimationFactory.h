//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_UIBasicAnimationFactory-Protocol.h"

@class NSString;

@interface _TVPModalPresentationAnimationFactory : NSObject <_UIBasicAnimationFactory>
{
    unsigned long long _curve;	// 8 = 0x8
}

@property(readonly, nonatomic) unsigned long long curve; // @synthesize curve=_curve;
- (id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0000000100005e00
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0000000100005de8
- (id)initWithCurve:(unsigned long long)arg1;	// IMP=0x0000000100005da0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

