//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

#import "tGraphDataSource-Protocol.h"

@interface PackagePowerCC : ComponentControl <tGraphDataSource>
{
    int _packageCCListId;	// 128 = 0x80
}

- (void)refreshCPMSTGraphTelemetry;	// IMP=0x000000010001620c
- (void)updatePowerTarget;	// IMP=0x00000001000160e0
- (void)defaultCPMSAction;	// IMP=0x00000001000160d4
- (void)defaultAction;	// IMP=0x00000001000160c8
- (id)initWithParams:(struct __CFDictionary *)arg1;	// IMP=0x0000000100015ed0

@end

