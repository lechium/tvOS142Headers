//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@interface MCNewCertificatePayloadHandler : MCNewPayloadHandler
{
    _Bool _isSetAside;	// 32 = 0x20
}

@property(readonly, nonatomic) _Bool isSetAside; // @synthesize isSetAside=_isSetAside;
- (struct __SecIdentity *)copyIdentityImmediatelyWithInteractionClient:(id)arg1 outError:(id *)arg2;	// IMP=0x000000010006a2c4
- (void)remove;	// IMP=0x000000010006a208
- (void)unsetAside;	// IMP=0x000000010006a160
- (void)setAside;	// IMP=0x000000010006a0b4

@end
