//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKClientProxy, GKDataTransport, GKPlayerCredential, GKPlayerInternal;

@interface GKService : NSObject
{
    GKClientProxy *_clientProxy;	// 8 = 0x8
    GKDataTransport *_transport;	// 16 = 0x10
    GKPlayerInternal *_localPlayer;	// 24 = 0x18
    GKPlayerCredential *_credential;	// 32 = 0x20
}

+ (Class)interfaceClass;	// IMP=0x000000010015d660
+ (unsigned long long)requiredEntitlements;	// IMP=0x000000010015d528
+ (id)serviceForBundleID:(id)arg1 localPlayer:(id)arg2;	// IMP=0x000000010015d4dc
+ (id)serviceFromService:(id)arg1;	// IMP=0x000000010015d438
+ (id)serviceWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3;	// IMP=0x000000010015d3e8
+ (id)serviceWithTransport:(id)arg1 forClient:(id)arg2 credential:(id)arg3;	// IMP=0x000000010015d380
@property(retain) GKPlayerCredential *credential; // @synthesize credential=_credential;
@property(retain) GKPlayerInternal *localPlayer; // @synthesize localPlayer=_localPlayer;
@property(retain) GKDataTransport *transport; // @synthesize transport=_transport;
@property(retain) GKClientProxy *clientProxy; // @synthesize clientProxy=_clientProxy;
- (id)transactionGroupForPlayerInternal:(id)arg1;	// IMP=0x000000010015d798
- (id)transactionGroup;	// IMP=0x000000010015d74c
- (_Bool)requiresAuthenticationForSelector:(SEL)arg1;	// IMP=0x000000010015d740
- (_Bool)requiresAuthentication;	// IMP=0x000000010015d738
- (void)dealloc;	// IMP=0x000000010015d600
- (id)initWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3 credential:(id)arg4;	// IMP=0x000000010015d1e8
- (id)initWithoutCredentialWithTransport:(id)arg1 forClient:(id)arg2;	// IMP=0x000000010015d170
- (void)_coreInitWithTransport:(id)arg1 forClient:(id)arg2 localPlayer:(id)arg3 credential:(id)arg4;	// IMP=0x000000010015d070

@end

