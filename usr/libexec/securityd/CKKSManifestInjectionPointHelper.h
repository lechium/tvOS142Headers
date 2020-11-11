//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _SFECKeyPair;

__attribute__((visibility("hidden")))
@interface CKKSManifestInjectionPointHelper : NSObject
{
    NSString *_peerID;	// 8 = 0x8
    _SFECKeyPair *_keyPair;	// 16 = 0x10
}

+ (void)setIgnoreChanges:(_Bool)arg1;	// IMP=0x00000001000ff09c
+ (_Bool)ignoreChanges;	// IMP=0x00000001000ff090
+ (void)registerEgoPeerID:(id)arg1 keyPair:(id)arg2;	// IMP=0x00000001000ff010
+ (void)registerHelper:(id)arg1 forPeer:(id)arg2;	// IMP=0x00000001000fef88
- (void).cxx_destruct;	// IMP=0x00000001000fed6c
- (id)peerID;	// IMP=0x00000001000fed64
- (id)keyPair;	// IMP=0x00000001000fed5c
- (void)performWithPeerVerifyingKeys:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fea54
- (void)performWithEgoPeerID:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fe930
- (void)performWithSigningKey:(CDUnknownBlockType)arg1;	// IMP=0x00000001000fe79c
- (id)description;	// IMP=0x00000001000fe708
- (id)initWithPeerID:(id)arg1 keyPair:(id)arg2 isEgoPeer:(_Bool)arg3;	// IMP=0x00000001000fe62c

@end
