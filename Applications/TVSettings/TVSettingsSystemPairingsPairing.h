//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUPairedPeer, NSString, NSUUID, TVSettingsSystemPairingsFacade;

@interface TVSettingsSystemPairingsPairing : NSObject
{
    _Bool _isDevice;	// 8 = 0x8
    CUPairedPeer *_pairedPeer;	// 16 = 0x10
    TVSettingsSystemPairingsFacade *_facade;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000aba34
@property(nonatomic) __weak TVSettingsSystemPairingsFacade *facade; // @synthesize facade=_facade;
@property(nonatomic) _Bool isDevice; // @synthesize isDevice=_isDevice;
@property(retain, nonatomic) CUPairedPeer *pairedPeer; // @synthesize pairedPeer=_pairedPeer;
- (void)unpairWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ab98c
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSUUID *key;

@end

