//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class NSNumber, PBOpenApplicationRequest;

@interface PBOpenAppLegacyGameDialogTransaction : BSTransaction
{
    PBOpenApplicationRequest *_request;	// 8 = 0x8
    NSNumber *_legacyGameValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000aa62c
@property(readonly, nonatomic) NSNumber *legacyGameValue; // @synthesize legacyGameValue=_legacyGameValue;
@property(readonly, nonatomic) PBOpenApplicationRequest *request; // @synthesize request=_request;
- (void)_begin;	// IMP=0x00000001000a98a0
- (id)initWithRequest:(id)arg1;	// IMP=0x00000001000a97b0

@end

