//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@interface SDUnlockStartLTKTransfer : PBCodable <NSCopying>
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000dfba0
- (unsigned long long)hash;	// IMP=0x00000001000dfb6c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000dfac0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000dfa54
- (void)copyTo:(id)arg1;	// IMP=0x00000001000dfa24
- (void)writeTo:(id)arg1;	// IMP=0x00000001000df9f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000df9f0
- (id)dictionaryRepresentation;	// IMP=0x00000001000df728
- (id)description;	// IMP=0x00000001000df674
@property(nonatomic) _Bool hasVersion;

@end

