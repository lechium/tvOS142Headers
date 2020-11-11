//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SFKeychainServerProtocol-Protocol.h"

@class NSArray, SecCDKeychain;

__attribute__((visibility("hidden")))
@interface SFKeychainServerConnection : NSObject <SFKeychainServerProtocol>
{
    SecCDKeychain *_keychain;	// 8 = 0x8
    NSArray *_clientAccessGroups;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100189ab0
@property(readonly) NSArray *clientAccessGroups; // @synthesize clientAccessGroups=_clientAccessGroups;
- (id)passwordCredentialForItemMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100189450
- (id)passwordCredentialForItem:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100189248
- (void)rpcReplaceOldCredential:(id)arg1 withNewCredential:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100189234
- (void)rpcRemoveCredentialWithPersistentIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100188fd4
- (void)rpcLookupCredentialsForServiceIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100188c4c
- (void)rpcFetchPasswordCredentialForPersistentIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001001889e4
- (void)rpcAddCredential:(id)arg1 withAccessPolicy:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100187bc0
- (int)keyclassForAccessPolicy:(id)arg1;	// IMP=0x0000000100187b20
- (id)initWithKeychain:(id)arg1 xpcConnection:(id)arg2;	// IMP=0x0000000100187a3c

@end

