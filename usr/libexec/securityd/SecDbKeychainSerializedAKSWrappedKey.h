//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface SecDbKeychainSerializedAKSWrappedKey : PBCodable <NSCopying>
{
    NSData *_refKeyBlob;	// 8 = 0x8
    unsigned int _type;	// 16 = 0x10
    NSData *_wrappedKey;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100121914
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSData *refKeyBlob; // @synthesize refKeyBlob=_refKeyBlob;
@property(retain, nonatomic) NSData *wrappedKey; // @synthesize wrappedKey=_wrappedKey;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100121830
- (unsigned long long)hash;	// IMP=0x00000001001217b8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001216d4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100121614
- (void)copyTo:(id)arg1;	// IMP=0x00000001001215a0
- (void)writeTo:(id)arg1;	// IMP=0x000000010012152c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001001212c4
- (id)dictionaryRepresentation;	// IMP=0x00000001001211d8
- (id)description;	// IMP=0x0000000100121124
@property(readonly, nonatomic) _Bool hasRefKeyBlob;

@end

