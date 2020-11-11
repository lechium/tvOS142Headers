//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITimingCurveProvider-Protocol.h"

@class UICubicTimingParameters, UISpringTimingParameters;

@interface PBAppSwitcherTimingCurveProvider : NSObject <UITimingCurveProvider>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001786e4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100178694
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001785fc
@property(readonly, nonatomic) UISpringTimingParameters *springTimingParameters;
@property(readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
@property(readonly, nonatomic) long long timingCurveType;

@end

