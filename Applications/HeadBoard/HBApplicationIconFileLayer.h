//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface HBApplicationIconFileLayer : NSObject <NSSecureCoding>
{
    int _blendMode;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    double _opacity;	// 24 = 0x18
    double _scale;	// 32 = 0x20
    struct CGRect _frame;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010003c374
- (void).cxx_destruct;	// IMP=0x000000010003c55c
@property(nonatomic, setter=_setScale:) double scale; // @synthesize scale=_scale;
@property(nonatomic, setter=_setBlendMode:) int blendMode; // @synthesize blendMode=_blendMode;
@property(nonatomic, setter=_setOpacity:) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic, setter=_setFrame:) struct CGRect frame; // @synthesize frame=_frame;
@property(copy, nonatomic, setter=_setName:) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x000000010003c37c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010003c258
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010003c124
- (id)_init;	// IMP=0x000000010003c0f0

@end

