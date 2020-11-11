//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVHLockupLayout-Protocol.h"

@class NSString, TVHSimpleLockupFooterViewLayout;

@interface TVHSimpleLockupLayout : NSObject <TVHLockupLayout>
{
    double _contentViewToFooterViewSpacing;	// 8 = 0x8
    TVHSimpleLockupFooterViewLayout *_footerViewLayout;	// 16 = 0x10
    struct CGSize _contentViewSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010004cff4
@property(retain, nonatomic) TVHSimpleLockupFooterViewLayout *footerViewLayout; // @synthesize footerViewLayout=_footerViewLayout;
@property(nonatomic) double contentViewToFooterViewSpacing; // @synthesize contentViewToFooterViewSpacing=_contentViewToFooterViewSpacing;
@property(nonatomic) struct CGSize contentViewSize; // @synthesize contentViewSize=_contentViewSize;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010004cc08
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGSize lockupSize;
@property(readonly, nonatomic) double footerViewHeight;
- (id)init;	// IMP=0x000000010004ca08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

