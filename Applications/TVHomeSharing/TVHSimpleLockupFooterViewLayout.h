//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVHSimpleLockupFooterViewLayout : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    double _labelHeight;	// 16 = 0x10
    double _labelSpacing;	// 24 = 0x18
}

@property(nonatomic) double labelSpacing; // @synthesize labelSpacing=_labelSpacing;
@property(nonatomic) double labelHeight; // @synthesize labelHeight=_labelHeight;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)_typeStringFromType:(unsigned long long)arg1;	// IMP=0x00000001000bdb18
- (id)description;	// IMP=0x00000001000bd9bc
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000bd7a4
- (unsigned long long)hash;	// IMP=0x00000001000bd6c4
@property(readonly, nonatomic) double footerViewHeight;
- (id)init;	// IMP=0x00000001000bd60c

@end

