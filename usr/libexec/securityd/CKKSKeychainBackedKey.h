//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class CKKSAESSIVKey, CKKSWrappedAESSIVKey, CKRecordZoneID, NSString;
@protocol SecCKKSKeyClass;

__attribute__((visibility("hidden")))
@interface CKKSKeychainBackedKey : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_uuid;	// 8 = 0x8
    NSString *_parentKeyUUID;	// 16 = 0x10
    NSString<SecCKKSKeyClass> *_keyclass;	// 24 = 0x18
    CKRecordZoneID *_zoneID;	// 32 = 0x20
    CKKSWrappedAESSIVKey *_wrappedkey;	// 40 = 0x28
    CKKSAESSIVKey *_aessivkey;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010017268c
+ (id)loadFromProtobuf:(id)arg1 error:(id *)arg2;	// IMP=0x000000010017239c
+ (id)keyFromKeychain:(id)arg1 parentKeyUUID:(id)arg2 keyclass:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x00000001001722a4
+ (id)fetchKeyMaterialItemFromKeychain:(id)arg1 resave:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0000000100171558
+ (id)queryKeyMaterialInKeychain:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100171410
+ (id)setKeyMaterialInKeychain:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100171000
+ (id)randomKeyWrappedBySelf:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100170f14
+ (id)randomKeyWrappedByParent:(id)arg1 keyclass:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100170dd4
+ (id)randomKeyWrappedByParent:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100170d48
- (void).cxx_destruct;	// IMP=0x0000000100170ce8
@property(retain) CKKSAESSIVKey *aessivkey; // @synthesize aessivkey=_aessivkey;
@property(retain) CKKSWrappedAESSIVKey *wrappedkey; // @synthesize wrappedkey=_wrappedkey;
@property(retain) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(retain) NSString<SecCKKSKeyClass> *keyclass; // @synthesize keyclass=_keyclass;
@property(retain) NSString *parentKeyUUID; // @synthesize parentKeyUUID=_parentKeyUUID;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100170adc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100170970
- (id)serializeAsProtobuf:(id *)arg1;	// IMP=0x0000000100170788
- (id)description;	// IMP=0x0000000100170674
- (_Bool)deleteKeyMaterialFromKeychain:(id *)arg1;	// IMP=0x0000000100170350
- (_Bool)loadKeyMaterialFromKeychain:(id *)arg1;	// IMP=0x000000010016ff64
- (_Bool)saveKeyMaterialToKeychain:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000010016f798
- (_Bool)saveKeyMaterialToKeychain:(id *)arg1;	// IMP=0x000000010016f784
- (id)decryptData:(id)arg1 authenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x000000010016f6d4
- (id)encryptData:(id)arg1 authenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x000000010016f624
- (id)unwrapAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000010016f598
- (id)wrapAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000010016f50c
- (_Bool)trySelfWrappedKeyCandidate:(id)arg1 error:(id *)arg2;	// IMP=0x000000010016f334
- (id)ensureKeyLoaded:(id *)arg1;	// IMP=0x000000010016f2b4
- (_Bool)unwrapSelfWithAESKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000010016f214
- (_Bool)wrapUnder:(id)arg1 error:(id *)arg2;	// IMP=0x000000010016f058
- (_Bool)wrapsSelf;	// IMP=0x000000010016efd4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010016ed30
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010016ebb4
- (id)initWithWrappedAESKey:(id)arg1 uuid:(id)arg2 parentKeyUUID:(id)arg3 keyclass:(id)arg4 zoneID:(id)arg5;	// IMP=0x000000010016ea88
- (id)initWrappedBy:(id)arg1 AESKey:(id)arg2 uuid:(id)arg3 keyclass:(id)arg4 zoneID:(id)arg5;	// IMP=0x000000010016e884
- (id)initSelfWrappedWithAESKey:(id)arg1 uuid:(id)arg2 keyclass:(id)arg3 zoneID:(id)arg4;	// IMP=0x000000010016e694

@end

