//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKKSSerializedKey : PBCodable <NSCopying>
{
    NSData *_key;	// 8 = 0x8
    NSString *_keyclass;	// 16 = 0x10
    NSString *_uuid;	// 24 = 0x18
    NSString *_zoneName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000288b8
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *keyclass; // @synthesize keyclass=_keyclass;
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010002877c
- (unsigned long long)hash;	// IMP=0x00000001000286f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000285c4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000284c4
- (void)copyTo:(id)arg1;	// IMP=0x000000010002841c
- (void)writeTo:(id)arg1;	// IMP=0x0000000100028388
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100028164
- (id)dictionaryRepresentation;	// IMP=0x0000000100028088
- (id)description;	// IMP=0x0000000100027fd4

@end

