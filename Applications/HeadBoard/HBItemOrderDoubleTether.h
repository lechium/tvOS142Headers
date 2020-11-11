//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HBItemOrderTether.h"

#import "HBItemOrderTether-Protocol.h"

@class HBApp, NSString;

@interface HBItemOrderDoubleTether : HBItemOrderTether <HBItemOrderTether>
{
    HBApp *_leadingApplication;	// 8 = 0x8
    unsigned long long _leadingDistance;	// 16 = 0x10
    HBApp *_trailingApplication;	// 24 = 0x18
    unsigned long long _trailingDistance;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010005c990
@property(readonly, nonatomic) unsigned long long trailingDistance; // @synthesize trailingDistance=_trailingDistance;
@property(readonly, nonatomic) HBApp *trailingApplication; // @synthesize trailingApplication=_trailingApplication;
@property(readonly, nonatomic) unsigned long long leadingDistance; // @synthesize leadingDistance=_leadingDistance;
@property(readonly, nonatomic) HBApp *leadingApplication; // @synthesize leadingApplication=_leadingApplication;
- (unsigned long long)insertionIndexInItems:(id)arg1;	// IMP=0x000000010005c838
- (id)initWithLeadingApplication:(id)arg1 distance:(unsigned long long)arg2 trailingApplication:(id)arg3 distance:(unsigned long long)arg4;	// IMP=0x000000010005c75c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

